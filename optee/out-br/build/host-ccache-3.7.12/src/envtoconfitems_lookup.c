/* ANSI-C code produced by gperf version 3.1 */
/* Command-line: gperf  */
/* Computed positions: -k'1,5' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#warning "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gperf@gnu.org>."
#endif

#include "envtoconfitems.h"
struct env_to_conf_item;
/* maximum key range = 49, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
envtoconfitems_hash (register const char *str, register size_t len)
{
  static const unsigned char asso_values[] =
    {
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 30,  0,  0,  0,
      35, 51, 25,  5,  0, 51, 10, 15,  0, 10,
       5,  5,  5, 20, 20,  5, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51
    };
  register unsigned int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[4]+1];
      /*FALLTHROUGH*/
      case 4:
      case 3:
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

const struct env_to_conf_item *
envtoconfitems_get (register const char *str, register size_t len)
{
  enum
    {
      TOTAL_KEYWORDS = 34,
      MIN_WORD_LENGTH = 2,
      MAX_WORD_LENGTH = 15,
      MIN_HASH_VALUE = 2,
      MAX_HASH_VALUE = 50
    };

  static const struct env_to_conf_item wordlist[] =
    {
      {"",""}, {"",""},
      {"CC", "compiler"},
      {"DIR", "cache_dir"},
      {"CPP2", "run_second_cpp"},
      {"",""},
      {"DIRECT", "direct_mode"},
      {"DISABLE", "disable"},
      {"COMPILER", "compiler"},
      {"PATH", "path"},
      {"",""},
      {"PREFIX", "prefix_command"},
      {"RECACHE", "recache"},
      {"COMPILERCHECK", "compiler_check"},
      {"",""},
      {"PREFIX_CPP", "prefix_command_cpp"},
      {"DEPEND", "depend_mode"},
      {"LOGFILE", "log_file"},
      {"READONLY", "read_only"},
      {"EXTENSION", "cpp_extension"},
      {"UMASK", "umask"},
      {"",""},
      {"MAXSIZE", "max_size"},
      {"MAXFILES", "max_files"},
      {"",""},
      {"READONLY_DIRECT", "read_only_direct"},
      {"",""},
      {"TEMPDIR", "temporary_dir"},
      {"COMPRESS", "compression"},
      {"LIMIT_MULTIPLE", "limit_multiple"},
      {"DEBUG", "debug"},
      {"",""},
      {"HASHDIR", "hash_dir"},
      {"COMPRESSLEVEL", "compression_level"},
      {"",""},
      {"SLOPPINESS", "sloppiness"},
      {"",""},
      {"BASEDIR", "base_dir"},
      {"IGNOREHEADERS", "ignore_headers_in_manifest"},
      {"",""},
      {"EXTRAFILES", "extra_files_to_hash"},
      {"",""},
      {"NLEVELS", "cache_dir_levels"},
      {"COMMENTS", "keep_comments_cpp"},
      {"",""},
      {"STATS", "stats"},
      {"",""}, {"",""},
      {"HARDLINK", "hard_link"},
      {"",""},
      {"PCH_EXTSUM", "pch_external_checksum"}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register unsigned int key = envtoconfitems_hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register const char *s = wordlist[key].env_name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
size_t envtoconfitems_count(void) { return 34; }
