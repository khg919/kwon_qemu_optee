// Copyright (C) 2011-2020 Joel Rosdahl
//
// This program is free software; you can redistribute it and/or modify it
// under the terms of the GNU General Public License as published by the Free
// Software Foundation; either version 3 of the License, or (at your option)
// any later version.
//
// This program is distributed in the hope that it will be useful, but WITHOUT
// ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
// FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
// more details.
//
// You should have received a copy of the GNU General Public License along with
// this program; if not, write to the Free Software Foundation, Inc., 51
// Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA

#include "../src/conf.h"
#include "framework.h"
#include "util.h"

#define N_CONFIG_ITEMS 33
static struct {
	char *descr;
	char *origin;
} received_conf_items[N_CONFIG_ITEMS];
static size_t n_received_conf_items = 0;

static void
conf_item_receiver(const char *descr, const char *origin, void *context)
{
	(void)context;
	received_conf_items[n_received_conf_items].descr = x_strdup(descr);
	received_conf_items[n_received_conf_items].origin = x_strdup(origin);
	++n_received_conf_items;
}

static void
free_received_conf_items(void)
{
	while (n_received_conf_items > 0) {
		--n_received_conf_items;
		free(received_conf_items[n_received_conf_items].descr);
		free(received_conf_items[n_received_conf_items].origin);
	}
}

TEST_SUITE(conf)

TEST(conf_create)
{
	struct conf *conf = conf_create();
	CHECK_STR_EQ("", conf->base_dir);
	CHECK_STR_EQ_FREE1(format("%s/.ccache", get_home_directory()),
	                   conf->cache_dir);
	CHECK_INT_EQ(2, conf->cache_dir_levels);
	CHECK_STR_EQ("", conf->compiler);
	CHECK_STR_EQ("mtime", conf->compiler_check);
	CHECK(!conf->compression);
	CHECK_INT_EQ(6, conf->compression_level);
	CHECK_STR_EQ("", conf->cpp_extension);
	CHECK(!conf->debug);
	CHECK(!conf->depend_mode);
	CHECK(conf->direct_mode);
	CHECK(!conf->disable);
	CHECK_STR_EQ("", conf->extra_files_to_hash);
	CHECK(!conf->hard_link);
	CHECK(conf->hash_dir);
	CHECK_STR_EQ("", conf->ignore_headers_in_manifest);
	CHECK(!conf->keep_comments_cpp);
	CHECK_DOUBLE_EQ(0.8, conf->limit_multiple);
	CHECK_STR_EQ("", conf->log_file);
	CHECK_INT_EQ(0, conf->max_files);
	CHECK_INT_EQ((uint64_t)5 * 1000 * 1000 * 1000, conf->max_size);
	CHECK_STR_EQ("", conf->path);
	CHECK(!conf->pch_external_checksum);
	CHECK_STR_EQ("", conf->prefix_command);
	CHECK_STR_EQ("", conf->prefix_command_cpp);
	CHECK(!conf->read_only);
	CHECK(!conf->read_only_direct);
	CHECK(!conf->recache);
	CHECK(conf->run_second_cpp);
	CHECK_INT_EQ(0, conf->sloppiness);
	CHECK(conf->stats);
	CHECK_STR_EQ("", conf->temporary_dir);
	CHECK_INT_EQ(UINT_MAX, conf->umask);
	conf_free(conf);
}

TEST(conf_read_valid_config)
{
	struct conf *conf = conf_create();
	char *errmsg, *user;
	putenv("USER=rabbit");
	user = getenv("USER");
	CHECK_STR_EQ("rabbit", user);
	create_file(
		"ccache.conf",
#ifndef _WIN32
		"base_dir =  /$USER/foo/${USER} \n"
#else
		"base_dir = C:/$USER/foo/${USER}\n"
#endif
		"cache_dir=\n"
		"cache_dir = $USER$/${USER}/.ccache\n"
		"\n"
		"\n"
		"  #A comment\n"
		" cache_dir_levels = 4\n"
		"\t compiler = foo\n"
		"compiler_check = none\n"
		"compression=true\n"
		"compression_level= 2\n"
		"cpp_extension = .foo\n"
		"depend_mode = true\n"
		"direct_mode = false\n"
		"disable = true\n"
		"extra_files_to_hash = a:b c:$USER\n"
		"hard_link = true\n"
		"hash_dir = false\n"
		"ignore_headers_in_manifest = a:b/c\n"
		"keep_comments_cpp = true\n"
		"limit_multiple = 1.0\n"
		"log_file = $USER${USER} \n"
		"max_files = 17\n"
		"max_size = 123M\n"
		"path = $USER.x\n"
		"pch_external_checksum = true\n"
		"prefix_command = x$USER\n"
		"prefix_command_cpp = y\n"
		"read_only = true\n"
		"read_only_direct = true\n"
		"recache = true\n"
		"run_second_cpp = false\n"
		"sloppiness =     time_macros   ,include_file_mtime  include_file_ctime,file_stat_matches,file_stat_matches_ctime,pch_defines ,  no_system_headers,system_headers,clang_index_store\n"
		"stats = false\n"
		"temporary_dir = ${USER}_foo\n"
		"umask = 777"); // Note: no newline.
	CHECK(conf_read(conf, "ccache.conf", &errmsg));
	CHECK(!errmsg);

#ifndef _WIN32
	CHECK_STR_EQ_FREE1(format("/%s/foo/%s", user, user), conf->base_dir);
#else
	CHECK_STR_EQ_FREE1(format("C:/%s/foo/%s", user, user), conf->base_dir);
#endif
	CHECK_STR_EQ_FREE1(format("%s$/%s/.ccache", user, user), conf->cache_dir);
	CHECK_INT_EQ(4, conf->cache_dir_levels);
	CHECK_STR_EQ("foo", conf->compiler);
	CHECK_STR_EQ("none", conf->compiler_check);
	CHECK(conf->compression);
	CHECK_INT_EQ(2, conf->compression_level);
	CHECK_STR_EQ(".foo", conf->cpp_extension);
	CHECK(conf->depend_mode);
	CHECK(!conf->direct_mode);
	CHECK(conf->disable);
	CHECK_STR_EQ_FREE1(format("a:b c:%s", user), conf->extra_files_to_hash);
	CHECK(conf->hard_link);
	CHECK(!conf->hash_dir);
	CHECK_STR_EQ("a:b/c", conf->ignore_headers_in_manifest);
	CHECK(conf->keep_comments_cpp);
	CHECK_DOUBLE_EQ(1.0, conf->limit_multiple);
	CHECK_STR_EQ_FREE1(format("%s%s", user, user), conf->log_file);
	CHECK_INT_EQ(17, conf->max_files);
	CHECK_INT_EQ(123 * 1000 * 1000, conf->max_size);
	CHECK_STR_EQ_FREE1(format("%s.x", user), conf->path);
	CHECK(conf->pch_external_checksum);
	CHECK_STR_EQ_FREE1(format("x%s", user), conf->prefix_command);
	CHECK_STR_EQ("y", conf->prefix_command_cpp);
	CHECK(conf->read_only);
	CHECK(conf->read_only_direct);
	CHECK(conf->recache);
	CHECK(!conf->run_second_cpp);
	CHECK_INT_EQ(
		SLOPPY_INCLUDE_FILE_MTIME
		|SLOPPY_INCLUDE_FILE_CTIME
		|SLOPPY_TIME_MACROS
		|SLOPPY_FILE_STAT_MATCHES
		|SLOPPY_FILE_STAT_MATCHES_CTIME
		|SLOPPY_SYSTEM_HEADERS
		|SLOPPY_PCH_DEFINES
		|SLOPPY_CLANG_INDEX_STORE,
		conf->sloppiness);
	CHECK(!conf->stats);
	CHECK_STR_EQ_FREE1(format("%s_foo", user), conf->temporary_dir);
	CHECK_INT_EQ(0777, conf->umask);

	conf_free(conf);
}

TEST(conf_read_with_missing_equal_sign)
{
	struct conf *conf = conf_create();
	char *errmsg;
	create_file("ccache.conf", "no equal sign");
	CHECK(!conf_read(conf, "ccache.conf", &errmsg));
	CHECK_INT_EQ(errno, 0);
	CHECK_STR_EQ_FREE2("ccache.conf:1: missing equal sign",
	                   errmsg);
	conf_free(conf);
}

TEST(conf_read_with_unknown_config_key)
{
	struct conf *conf = conf_create();
	char *errmsg;
	create_file("ccache.conf", "# Comment\nfoo = bar");
	CHECK(conf_read(conf, "ccache.conf", &errmsg));
	conf_free(conf);
}

TEST(conf_read_invalid_bool)
{
	struct conf *conf = conf_create();
	char *errmsg;

	create_file("ccache.conf", "disable=");
	CHECK(!conf_read(conf, "ccache.conf", &errmsg));
	CHECK_INT_EQ(errno, 0);
	CHECK_STR_EQ_FREE2("ccache.conf:1: not a boolean value: \"\"",
	                   errmsg);

	create_file("ccache.conf", "disable=foo");
	CHECK(!conf_read(conf, "ccache.conf", &errmsg));
	CHECK_INT_EQ(errno, 0);
	CHECK_STR_EQ_FREE2("ccache.conf:1: not a boolean value: \"foo\"",
	                   errmsg);
	conf_free(conf);
}

TEST(conf_read_invalid_env_string)
{
	struct conf *conf = conf_create();
	char *errmsg;
	create_file("ccache.conf", "base_dir = ${foo");
	CHECK(!conf_read(conf, "ccache.conf", &errmsg));
	CHECK_INT_EQ(errno, 0);
	CHECK_STR_EQ_FREE2("ccache.conf:1: syntax error: missing '}' after \"foo\"",
	                   errmsg);
	// Other cases tested in test_util.c.
	conf_free(conf);
}

TEST(conf_read_empty_umask)
{
	struct conf *conf = conf_create();
	char *errmsg;
	create_file("ccache.conf", "umask = ");
	CHECK(conf_read(conf, "ccache.conf", &errmsg));
	CHECK_INT_EQ(conf->umask, UINT_MAX);
	conf_free(conf);
}

TEST(conf_read_invalid_size)
{
	struct conf *conf = conf_create();
	char *errmsg;
	create_file("ccache.conf", "max_size = foo");
	CHECK(!conf_read(conf, "ccache.conf", &errmsg));
	CHECK_INT_EQ(errno, 0);
	CHECK_STR_EQ_FREE2("ccache.conf:1: invalid size: \"foo\"",
	                   errmsg);
	// Other cases tested in test_util.c.
	conf_free(conf);
}

TEST(conf_read_unknown_sloppiness)
{
	struct conf *conf = conf_create();
	char *errmsg;
	create_file("ccache.conf", "sloppiness = time_macros, foo");
	CHECK(conf_read(conf, "ccache.conf", &errmsg));
	CHECK_INT_EQ(conf->sloppiness, SLOPPY_TIME_MACROS);
	conf_free(conf);
}

TEST(conf_read_invalid_unsigned)
{
	struct conf *conf = conf_create();
	char *errmsg;

	create_file("ccache.conf", "max_files =");
	CHECK(!conf_read(conf, "ccache.conf", &errmsg));
	CHECK_INT_EQ(errno, 0);
	CHECK_STR_EQ_FREE2("ccache.conf:1: invalid unsigned integer: \"\"",
	                   errmsg);

	create_file("ccache.conf", "max_files = -42");
	CHECK(!conf_read(conf, "ccache.conf", &errmsg));
	CHECK_STR_EQ_FREE2("ccache.conf:1: invalid unsigned integer: \"-42\"",
	                   errmsg);

	create_file("ccache.conf", "max_files = foo");
	CHECK(!conf_read(conf, "ccache.conf", &errmsg));
	CHECK_STR_EQ_FREE2("ccache.conf:1: invalid unsigned integer: \"foo\"",
	                   errmsg);

	conf_free(conf);
}

TEST(conf_read_missing_config_file)
{
	struct conf *conf = conf_create();
	char *errmsg;
	CHECK(!conf_read(conf, "ccache.conf", &errmsg));
	CHECK_INT_EQ(errno, ENOENT);
}

TEST(verify_absolute_base_dir)
{
	struct conf *conf = conf_create();
	char *errmsg;

	create_file("ccache.conf", "base_dir = relative/path");
	CHECK(!conf_read(conf, "ccache.conf", &errmsg));
	CHECK_STR_EQ_FREE2("ccache.conf:1: not an absolute path: \"relative/path\"",
	                   errmsg);

	create_file("ccache.conf", "base_dir =");
	CHECK(conf_read(conf, "ccache.conf", &errmsg));

	conf_free(conf);
}

TEST(verify_dir_levels)
{
	struct conf *conf = conf_create();
	char *errmsg;

	create_file("ccache.conf", "cache_dir_levels = 0");
	CHECK(!conf_read(conf, "ccache.conf", &errmsg));
	CHECK_STR_EQ_FREE2(
		"ccache.conf:1: cache directory levels must be between 1 and 8",
		errmsg);
	create_file("ccache.conf", "cache_dir_levels = 9");
	CHECK(!conf_read(conf, "ccache.conf", &errmsg));
	CHECK_STR_EQ_FREE2(
		"ccache.conf:1: cache directory levels must be between 1 and 8",
		errmsg);

	conf_free(conf);
}

TEST(conf_update_from_environment)
{
	struct conf *conf = conf_create();
	char *errmsg;

	putenv("CCACHE_COMPRESS=1");
	CHECK(conf_update_from_environment(conf, &errmsg));
	CHECK(conf->compression);

	x_unsetenv("CCACHE_COMPRESS");
	putenv("CCACHE_NOCOMPRESS=1");
	CHECK(conf_update_from_environment(conf, &errmsg));
	CHECK(!conf->compression);

	conf_free(conf);
}

TEST(conf_set_new_value)
{
	char *errmsg;
	char *data;

	create_file("ccache.conf", "path = vanilla\n");
	CHECKM(conf_set_value_in_file("ccache.conf", "compiler", "chocolate",
	                              &errmsg),
	       errmsg);
	data = read_text_file("ccache.conf", 0);
	CHECK(data);
	CHECK_STR_EQ_FREE2("path = vanilla\ncompiler = chocolate\n", data);
}

TEST(conf_set_existing_value)
{
	char *errmsg;
	char *data;

	create_file("ccache.conf", "path = chocolate\nstats = chocolate\n");
	CHECKM(conf_set_value_in_file("ccache.conf", "path", "vanilla", &errmsg),
	       errmsg);
	data = read_text_file("ccache.conf", 0);
	CHECK(data);
	CHECK_STR_EQ_FREE2("path = vanilla\nstats = chocolate\n", data);
}

TEST(conf_set_unknown_option)
{
	char *errmsg;
	char *data;

	create_file("ccache.conf", "path = chocolate\nstats = chocolate\n");
	CHECKM(!conf_set_value_in_file("ccache.conf", "foo", "bar", &errmsg),
	       errmsg);
	CHECK_STR_EQ_FREE2("unknown configuration option \"foo\"", errmsg);

	data = read_text_file("ccache.conf", 0);
	CHECK(data);
	CHECK_STR_EQ_FREE2("path = chocolate\nstats = chocolate\n", data);
}

TEST(conf_set_unknown_sloppiness)
{
	char *errmsg;
	char *data;

	create_file("ccache.conf", "path = vanilla\n");
	CHECK(conf_set_value_in_file("ccache.conf", "sloppiness", "foo", &errmsg));

	data = read_text_file("ccache.conf", 0);
	CHECK(data);
	CHECK_STR_EQ_FREE2("path = vanilla\nsloppiness = foo\n", data);
}

TEST(conf_print_existing_value)
{
	struct conf *conf = conf_create();
	conf->max_files = 42;
	char *errmsg;
	{
		FILE *log = fopen("log", "w");
		CHECK(log);
		CHECK(conf_print_value(conf, "max_files", log, &errmsg));
		fclose(log);
	}
	{
		FILE *log = fopen("log", "r");
		CHECK(log);
		char buf[100];
		CHECK(fgets(buf, sizeof(buf), log));
		CHECK_STR_EQ("42\n", buf);
		fclose(log);
	}
	conf_free(conf);
}

TEST(conf_print_unknown_value)
{
	struct conf *conf = conf_create();
	char *errmsg;
	{
		FILE *log = fopen("log", "w");
		CHECK(log);
		CHECK(!conf_print_value(conf, "foo", log, &errmsg));
		CHECK_STR_EQ_FREE2("unknown configuration option \"foo\"",
		                   errmsg);
		fclose(log);
	}
	{
		FILE *log = fopen("log", "r");
		CHECK(log);
		char buf[100];
		CHECK(!fgets(buf, sizeof(buf), log));
		fclose(log);
	}
	conf_free(conf);
}

TEST(conf_print_items)
{
	size_t i;
	struct conf conf = {
		"bd",
		"cd",
		7,
		"c",
		"cc",
		true,
		8,
		"ce",
		false,
		true,
		false,
		true,
		"efth",
		true,
		.hash_dir = false,
		"ihim",
		true,
		0.0,
		"lf",
		4711,
		98.7 * 1000 * 1000,
		"p",
		true,
		"pc",
		"pcc",
		true,
		true,
		true,
		.run_second_cpp = false,
		SLOPPY_INCLUDE_FILE_MTIME|
		SLOPPY_INCLUDE_FILE_CTIME|SLOPPY_TIME_MACROS|
		SLOPPY_FILE_STAT_MATCHES|SLOPPY_FILE_STAT_MATCHES_CTIME|
		SLOPPY_PCH_DEFINES|SLOPPY_SYSTEM_HEADERS|SLOPPY_CLANG_INDEX_STORE,
		false,
		"td",
		022,
		NULL
	};
	size_t n = 0;

	conf.item_origins = x_malloc(N_CONFIG_ITEMS * sizeof(char *));
	for (i = 0; i < N_CONFIG_ITEMS; ++i) {
#ifndef __MINGW32__
		conf.item_origins[i] = format("origin%zu", i);
#else
		conf.item_origins[i] = format("origin%u", (unsigned) i);
#endif
	}

	conf_print_items(&conf, conf_item_receiver, NULL);
	CHECK_INT_EQ(N_CONFIG_ITEMS, n_received_conf_items);
	CHECK_STR_EQ("base_dir = bd", received_conf_items[n++].descr);
	CHECK_STR_EQ("cache_dir = cd", received_conf_items[n++].descr);
	CHECK_STR_EQ("cache_dir_levels = 7", received_conf_items[n++].descr);
	CHECK_STR_EQ("compiler = c", received_conf_items[n++].descr);
	CHECK_STR_EQ("compiler_check = cc", received_conf_items[n++].descr);
	CHECK_STR_EQ("compression = true", received_conf_items[n++].descr);
	CHECK_STR_EQ("compression_level = 8", received_conf_items[n++].descr);
	CHECK_STR_EQ("cpp_extension = ce", received_conf_items[n++].descr);
	CHECK_STR_EQ("debug = false", received_conf_items[n++].descr);
	CHECK_STR_EQ("depend_mode = true", received_conf_items[n++].descr);
	CHECK_STR_EQ("direct_mode = false", received_conf_items[n++].descr);
	CHECK_STR_EQ("disable = true", received_conf_items[n++].descr);
	CHECK_STR_EQ("extra_files_to_hash = efth", received_conf_items[n++].descr);
	CHECK_STR_EQ("hard_link = true", received_conf_items[n++].descr);
	CHECK_STR_EQ("hash_dir = false", received_conf_items[n++].descr);
	CHECK_STR_EQ("ignore_headers_in_manifest = ihim",
	             received_conf_items[n++].descr);
	CHECK_STR_EQ("keep_comments_cpp = true", received_conf_items[n++].descr);
	CHECK_STR_EQ("limit_multiple = 0.0", received_conf_items[n++].descr);
	CHECK_STR_EQ("log_file = lf", received_conf_items[n++].descr);
	CHECK_STR_EQ("max_files = 4711", received_conf_items[n++].descr);
	CHECK_STR_EQ("max_size = 98.7M", received_conf_items[n++].descr);
	CHECK_STR_EQ("path = p", received_conf_items[n++].descr);
	CHECK_STR_EQ("pch_external_checksum = true", received_conf_items[n++].descr);
	CHECK_STR_EQ("prefix_command = pc", received_conf_items[n++].descr);
	CHECK_STR_EQ("prefix_command_cpp = pcc", received_conf_items[n++].descr);
	CHECK_STR_EQ("read_only = true", received_conf_items[n++].descr);
	CHECK_STR_EQ("read_only_direct = true", received_conf_items[n++].descr);
	CHECK_STR_EQ("recache = true", received_conf_items[n++].descr);
	CHECK_STR_EQ("run_second_cpp = false", received_conf_items[n++].descr);
	CHECK_STR_EQ("sloppiness = include_file_mtime,"
	             " include_file_ctime, time_macros, pch_defines,"
	             " file_stat_matches, file_stat_matches_ctime, system_headers,"
	             " clang_index_store",
	             received_conf_items[n++].descr);
	CHECK_STR_EQ("stats = false", received_conf_items[n++].descr);
	CHECK_STR_EQ("temporary_dir = td", received_conf_items[n++].descr);
	CHECK_STR_EQ("umask = 022", received_conf_items[n++].descr);

	for (i = 0; i < N_CONFIG_ITEMS; ++i) {
#ifndef __MINGW32__
		char *expected = format("origin%zu", i);
#else
		char *expected = format("origin%u", (unsigned) i);
#endif
		CHECK_STR_EQ_FREE1(expected, received_conf_items[i].origin);
	}

	free_received_conf_items();
	free(conf.item_origins);
}

TEST_SUITE_END
