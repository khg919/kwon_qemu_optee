# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/qemu-sgx/devel/optee/out-br/build/optee_test_ext-1.0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/qemu-sgx/devel/optee/out-br/build/optee_test_ext-1.0

# Include any dependencies generated for this target.
include host/supp_plugin/CMakeFiles/f07bfc66-958c-4a15-99c0-260e4e7375dd.plugin.dir/depend.make

# Include the progress variables for this target.
include host/supp_plugin/CMakeFiles/f07bfc66-958c-4a15-99c0-260e4e7375dd.plugin.dir/progress.make

# Include the compile flags for this target's objects.
include host/supp_plugin/CMakeFiles/f07bfc66-958c-4a15-99c0-260e4e7375dd.plugin.dir/flags.make

host/supp_plugin/CMakeFiles/f07bfc66-958c-4a15-99c0-260e4e7375dd.plugin.dir/test_supp_plugin.c.o: host/supp_plugin/CMakeFiles/f07bfc66-958c-4a15-99c0-260e4e7375dd.plugin.dir/flags.make
host/supp_plugin/CMakeFiles/f07bfc66-958c-4a15-99c0-260e4e7375dd.plugin.dir/test_supp_plugin.c.o: host/supp_plugin/test_supp_plugin.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --progress-dir=/home/qemu-sgx/devel/optee/out-br/build/optee_test_ext-1.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object host/supp_plugin/CMakeFiles/f07bfc66-958c-4a15-99c0-260e4e7375dd.plugin.dir/test_supp_plugin.c.o"
	cd /home/qemu-sgx/devel/optee/out-br/build/optee_test_ext-1.0/host/supp_plugin && ccache /home/qemu-sgx/devel/optee/out-br/host/bin/arm-linux-gnueabihf-gcc --sysroot=/home/qemu-sgx/devel/optee/out-br/host/arm-buildroot-linux-gnueabihf/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/f07bfc66-958c-4a15-99c0-260e4e7375dd.plugin.dir/test_supp_plugin.c.o   -c /home/qemu-sgx/devel/optee/out-br/build/optee_test_ext-1.0/host/supp_plugin/test_supp_plugin.c

host/supp_plugin/CMakeFiles/f07bfc66-958c-4a15-99c0-260e4e7375dd.plugin.dir/test_supp_plugin.c.i: cmake_force
	@echo "Preprocessing C source to CMakeFiles/f07bfc66-958c-4a15-99c0-260e4e7375dd.plugin.dir/test_supp_plugin.c.i"
	cd /home/qemu-sgx/devel/optee/out-br/build/optee_test_ext-1.0/host/supp_plugin && /home/qemu-sgx/devel/optee/out-br/host/bin/arm-linux-gnueabihf-gcc --sysroot=/home/qemu-sgx/devel/optee/out-br/host/arm-buildroot-linux-gnueabihf/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/qemu-sgx/devel/optee/out-br/build/optee_test_ext-1.0/host/supp_plugin/test_supp_plugin.c > CMakeFiles/f07bfc66-958c-4a15-99c0-260e4e7375dd.plugin.dir/test_supp_plugin.c.i

host/supp_plugin/CMakeFiles/f07bfc66-958c-4a15-99c0-260e4e7375dd.plugin.dir/test_supp_plugin.c.s: cmake_force
	@echo "Compiling C source to assembly CMakeFiles/f07bfc66-958c-4a15-99c0-260e4e7375dd.plugin.dir/test_supp_plugin.c.s"
	cd /home/qemu-sgx/devel/optee/out-br/build/optee_test_ext-1.0/host/supp_plugin && /home/qemu-sgx/devel/optee/out-br/host/bin/arm-linux-gnueabihf-gcc --sysroot=/home/qemu-sgx/devel/optee/out-br/host/arm-buildroot-linux-gnueabihf/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/qemu-sgx/devel/optee/out-br/build/optee_test_ext-1.0/host/supp_plugin/test_supp_plugin.c -o CMakeFiles/f07bfc66-958c-4a15-99c0-260e4e7375dd.plugin.dir/test_supp_plugin.c.s

# Object files for target f07bfc66-958c-4a15-99c0-260e4e7375dd.plugin
f07bfc66__958c__4a15__99c0__260e4e7375dd_plugin_OBJECTS = \
"CMakeFiles/f07bfc66-958c-4a15-99c0-260e4e7375dd.plugin.dir/test_supp_plugin.c.o"

# External object files for target f07bfc66-958c-4a15-99c0-260e4e7375dd.plugin
f07bfc66__958c__4a15__99c0__260e4e7375dd_plugin_EXTERNAL_OBJECTS =

host/supp_plugin/f07bfc66-958c-4a15-99c0-260e4e7375dd.plugin.so: host/supp_plugin/CMakeFiles/f07bfc66-958c-4a15-99c0-260e4e7375dd.plugin.dir/test_supp_plugin.c.o
host/supp_plugin/f07bfc66-958c-4a15-99c0-260e4e7375dd.plugin.so: host/supp_plugin/CMakeFiles/f07bfc66-958c-4a15-99c0-260e4e7375dd.plugin.dir/build.make
host/supp_plugin/f07bfc66-958c-4a15-99c0-260e4e7375dd.plugin.so: host/supp_plugin/CMakeFiles/f07bfc66-958c-4a15-99c0-260e4e7375dd.plugin.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --progress-dir=/home/qemu-sgx/devel/optee/out-br/build/optee_test_ext-1.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C shared library f07bfc66-958c-4a15-99c0-260e4e7375dd.plugin.so"
	cd /home/qemu-sgx/devel/optee/out-br/build/optee_test_ext-1.0/host/supp_plugin && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/f07bfc66-958c-4a15-99c0-260e4e7375dd.plugin.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
host/supp_plugin/CMakeFiles/f07bfc66-958c-4a15-99c0-260e4e7375dd.plugin.dir/build: host/supp_plugin/f07bfc66-958c-4a15-99c0-260e4e7375dd.plugin.so

.PHONY : host/supp_plugin/CMakeFiles/f07bfc66-958c-4a15-99c0-260e4e7375dd.plugin.dir/build

host/supp_plugin/CMakeFiles/f07bfc66-958c-4a15-99c0-260e4e7375dd.plugin.dir/clean:
	cd /home/qemu-sgx/devel/optee/out-br/build/optee_test_ext-1.0/host/supp_plugin && $(CMAKE_COMMAND) -P CMakeFiles/f07bfc66-958c-4a15-99c0-260e4e7375dd.plugin.dir/cmake_clean.cmake
.PHONY : host/supp_plugin/CMakeFiles/f07bfc66-958c-4a15-99c0-260e4e7375dd.plugin.dir/clean

host/supp_plugin/CMakeFiles/f07bfc66-958c-4a15-99c0-260e4e7375dd.plugin.dir/depend:
	cd /home/qemu-sgx/devel/optee/out-br/build/optee_test_ext-1.0 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/qemu-sgx/devel/optee/out-br/build/optee_test_ext-1.0 /home/qemu-sgx/devel/optee/out-br/build/optee_test_ext-1.0/host/supp_plugin /home/qemu-sgx/devel/optee/out-br/build/optee_test_ext-1.0 /home/qemu-sgx/devel/optee/out-br/build/optee_test_ext-1.0/host/supp_plugin /home/qemu-sgx/devel/optee/out-br/build/optee_test_ext-1.0/host/supp_plugin/CMakeFiles/f07bfc66-958c-4a15-99c0-260e4e7375dd.plugin.dir/DependInfo.cmake
.PHONY : host/supp_plugin/CMakeFiles/f07bfc66-958c-4a15-99c0-260e4e7375dd.plugin.dir/depend

