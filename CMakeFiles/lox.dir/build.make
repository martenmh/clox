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
CMAKE_COMMAND = /var/lib/snapd/snap/clion/114/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /var/lib/snapd/snap/clion/114/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/marten/projects/clox

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/marten/projects/clox

# Include any dependencies generated for this target.
include CMakeFiles/lox.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lox.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lox.dir/flags.make

CMakeFiles/lox.dir/src/memory.c.o: CMakeFiles/lox.dir/flags.make
CMakeFiles/lox.dir/src/memory.c.o: src/memory.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/marten/projects/clox/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/lox.dir/src/memory.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lox.dir/src/memory.c.o   -c /home/marten/projects/clox/src/memory.c

CMakeFiles/lox.dir/src/memory.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lox.dir/src/memory.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/marten/projects/clox/src/memory.c > CMakeFiles/lox.dir/src/memory.c.i

CMakeFiles/lox.dir/src/memory.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lox.dir/src/memory.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/marten/projects/clox/src/memory.c -o CMakeFiles/lox.dir/src/memory.c.s

CMakeFiles/lox.dir/src/value.c.o: CMakeFiles/lox.dir/flags.make
CMakeFiles/lox.dir/src/value.c.o: src/value.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/marten/projects/clox/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/lox.dir/src/value.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lox.dir/src/value.c.o   -c /home/marten/projects/clox/src/value.c

CMakeFiles/lox.dir/src/value.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lox.dir/src/value.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/marten/projects/clox/src/value.c > CMakeFiles/lox.dir/src/value.c.i

CMakeFiles/lox.dir/src/value.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lox.dir/src/value.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/marten/projects/clox/src/value.c -o CMakeFiles/lox.dir/src/value.c.s

CMakeFiles/lox.dir/src/object.c.o: CMakeFiles/lox.dir/flags.make
CMakeFiles/lox.dir/src/object.c.o: src/object.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/marten/projects/clox/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/lox.dir/src/object.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lox.dir/src/object.c.o   -c /home/marten/projects/clox/src/object.c

CMakeFiles/lox.dir/src/object.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lox.dir/src/object.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/marten/projects/clox/src/object.c > CMakeFiles/lox.dir/src/object.c.i

CMakeFiles/lox.dir/src/object.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lox.dir/src/object.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/marten/projects/clox/src/object.c -o CMakeFiles/lox.dir/src/object.c.s

CMakeFiles/lox.dir/src/scanner.c.o: CMakeFiles/lox.dir/flags.make
CMakeFiles/lox.dir/src/scanner.c.o: src/scanner.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/marten/projects/clox/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/lox.dir/src/scanner.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lox.dir/src/scanner.c.o   -c /home/marten/projects/clox/src/scanner.c

CMakeFiles/lox.dir/src/scanner.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lox.dir/src/scanner.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/marten/projects/clox/src/scanner.c > CMakeFiles/lox.dir/src/scanner.c.i

CMakeFiles/lox.dir/src/scanner.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lox.dir/src/scanner.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/marten/projects/clox/src/scanner.c -o CMakeFiles/lox.dir/src/scanner.c.s

CMakeFiles/lox.dir/src/compiler.c.o: CMakeFiles/lox.dir/flags.make
CMakeFiles/lox.dir/src/compiler.c.o: src/compiler.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/marten/projects/clox/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/lox.dir/src/compiler.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lox.dir/src/compiler.c.o   -c /home/marten/projects/clox/src/compiler.c

CMakeFiles/lox.dir/src/compiler.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lox.dir/src/compiler.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/marten/projects/clox/src/compiler.c > CMakeFiles/lox.dir/src/compiler.c.i

CMakeFiles/lox.dir/src/compiler.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lox.dir/src/compiler.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/marten/projects/clox/src/compiler.c -o CMakeFiles/lox.dir/src/compiler.c.s

CMakeFiles/lox.dir/src/chunk.c.o: CMakeFiles/lox.dir/flags.make
CMakeFiles/lox.dir/src/chunk.c.o: src/chunk.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/marten/projects/clox/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/lox.dir/src/chunk.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lox.dir/src/chunk.c.o   -c /home/marten/projects/clox/src/chunk.c

CMakeFiles/lox.dir/src/chunk.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lox.dir/src/chunk.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/marten/projects/clox/src/chunk.c > CMakeFiles/lox.dir/src/chunk.c.i

CMakeFiles/lox.dir/src/chunk.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lox.dir/src/chunk.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/marten/projects/clox/src/chunk.c -o CMakeFiles/lox.dir/src/chunk.c.s

CMakeFiles/lox.dir/src/debug.c.o: CMakeFiles/lox.dir/flags.make
CMakeFiles/lox.dir/src/debug.c.o: src/debug.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/marten/projects/clox/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/lox.dir/src/debug.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lox.dir/src/debug.c.o   -c /home/marten/projects/clox/src/debug.c

CMakeFiles/lox.dir/src/debug.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lox.dir/src/debug.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/marten/projects/clox/src/debug.c > CMakeFiles/lox.dir/src/debug.c.i

CMakeFiles/lox.dir/src/debug.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lox.dir/src/debug.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/marten/projects/clox/src/debug.c -o CMakeFiles/lox.dir/src/debug.c.s

CMakeFiles/lox.dir/src/vm.c.o: CMakeFiles/lox.dir/flags.make
CMakeFiles/lox.dir/src/vm.c.o: src/vm.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/marten/projects/clox/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/lox.dir/src/vm.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lox.dir/src/vm.c.o   -c /home/marten/projects/clox/src/vm.c

CMakeFiles/lox.dir/src/vm.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lox.dir/src/vm.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/marten/projects/clox/src/vm.c > CMakeFiles/lox.dir/src/vm.c.i

CMakeFiles/lox.dir/src/vm.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lox.dir/src/vm.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/marten/projects/clox/src/vm.c -o CMakeFiles/lox.dir/src/vm.c.s

CMakeFiles/lox.dir/src/table.c.o: CMakeFiles/lox.dir/flags.make
CMakeFiles/lox.dir/src/table.c.o: src/table.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/marten/projects/clox/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/lox.dir/src/table.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lox.dir/src/table.c.o   -c /home/marten/projects/clox/src/table.c

CMakeFiles/lox.dir/src/table.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lox.dir/src/table.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/marten/projects/clox/src/table.c > CMakeFiles/lox.dir/src/table.c.i

CMakeFiles/lox.dir/src/table.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lox.dir/src/table.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/marten/projects/clox/src/table.c -o CMakeFiles/lox.dir/src/table.c.s

CMakeFiles/lox.dir/src/main.c.o: CMakeFiles/lox.dir/flags.make
CMakeFiles/lox.dir/src/main.c.o: src/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/marten/projects/clox/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/lox.dir/src/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lox.dir/src/main.c.o   -c /home/marten/projects/clox/src/main.c

CMakeFiles/lox.dir/src/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lox.dir/src/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/marten/projects/clox/src/main.c > CMakeFiles/lox.dir/src/main.c.i

CMakeFiles/lox.dir/src/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lox.dir/src/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/marten/projects/clox/src/main.c -o CMakeFiles/lox.dir/src/main.c.s

# Object files for target lox
lox_OBJECTS = \
"CMakeFiles/lox.dir/src/memory.c.o" \
"CMakeFiles/lox.dir/src/value.c.o" \
"CMakeFiles/lox.dir/src/object.c.o" \
"CMakeFiles/lox.dir/src/scanner.c.o" \
"CMakeFiles/lox.dir/src/compiler.c.o" \
"CMakeFiles/lox.dir/src/chunk.c.o" \
"CMakeFiles/lox.dir/src/debug.c.o" \
"CMakeFiles/lox.dir/src/vm.c.o" \
"CMakeFiles/lox.dir/src/table.c.o" \
"CMakeFiles/lox.dir/src/main.c.o"

# External object files for target lox
lox_EXTERNAL_OBJECTS =

lox: CMakeFiles/lox.dir/src/memory.c.o
lox: CMakeFiles/lox.dir/src/value.c.o
lox: CMakeFiles/lox.dir/src/object.c.o
lox: CMakeFiles/lox.dir/src/scanner.c.o
lox: CMakeFiles/lox.dir/src/compiler.c.o
lox: CMakeFiles/lox.dir/src/chunk.c.o
lox: CMakeFiles/lox.dir/src/debug.c.o
lox: CMakeFiles/lox.dir/src/vm.c.o
lox: CMakeFiles/lox.dir/src/table.c.o
lox: CMakeFiles/lox.dir/src/main.c.o
lox: CMakeFiles/lox.dir/build.make
lox: CMakeFiles/lox.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/marten/projects/clox/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking C executable lox"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lox.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lox.dir/build: lox

.PHONY : CMakeFiles/lox.dir/build

CMakeFiles/lox.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lox.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lox.dir/clean

CMakeFiles/lox.dir/depend:
	cd /home/marten/projects/clox && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/marten/projects/clox /home/marten/projects/clox /home/marten/projects/clox /home/marten/projects/clox /home/marten/projects/clox/CMakeFiles/lox.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lox.dir/depend
