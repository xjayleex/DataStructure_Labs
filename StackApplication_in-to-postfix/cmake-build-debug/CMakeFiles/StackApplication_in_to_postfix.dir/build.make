# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/ijaehyeon/Desktop/MyDocuments/gitblog/DataStructure_Labs/StackApplication_in-to-postfix

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ijaehyeon/Desktop/MyDocuments/gitblog/DataStructure_Labs/StackApplication_in-to-postfix/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/StackApplication_in_to_postfix.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/StackApplication_in_to_postfix.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/StackApplication_in_to_postfix.dir/flags.make

CMakeFiles/StackApplication_in_to_postfix.dir/main.c.o: CMakeFiles/StackApplication_in_to_postfix.dir/flags.make
CMakeFiles/StackApplication_in_to_postfix.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ijaehyeon/Desktop/MyDocuments/gitblog/DataStructure_Labs/StackApplication_in-to-postfix/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/StackApplication_in_to_postfix.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/StackApplication_in_to_postfix.dir/main.c.o   -c /Users/ijaehyeon/Desktop/MyDocuments/gitblog/DataStructure_Labs/StackApplication_in-to-postfix/main.c

CMakeFiles/StackApplication_in_to_postfix.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/StackApplication_in_to_postfix.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/ijaehyeon/Desktop/MyDocuments/gitblog/DataStructure_Labs/StackApplication_in-to-postfix/main.c > CMakeFiles/StackApplication_in_to_postfix.dir/main.c.i

CMakeFiles/StackApplication_in_to_postfix.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/StackApplication_in_to_postfix.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/ijaehyeon/Desktop/MyDocuments/gitblog/DataStructure_Labs/StackApplication_in-to-postfix/main.c -o CMakeFiles/StackApplication_in_to_postfix.dir/main.c.s

CMakeFiles/StackApplication_in_to_postfix.dir/main.c.o.requires:

.PHONY : CMakeFiles/StackApplication_in_to_postfix.dir/main.c.o.requires

CMakeFiles/StackApplication_in_to_postfix.dir/main.c.o.provides: CMakeFiles/StackApplication_in_to_postfix.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/StackApplication_in_to_postfix.dir/build.make CMakeFiles/StackApplication_in_to_postfix.dir/main.c.o.provides.build
.PHONY : CMakeFiles/StackApplication_in_to_postfix.dir/main.c.o.provides

CMakeFiles/StackApplication_in_to_postfix.dir/main.c.o.provides.build: CMakeFiles/StackApplication_in_to_postfix.dir/main.c.o


# Object files for target StackApplication_in_to_postfix
StackApplication_in_to_postfix_OBJECTS = \
"CMakeFiles/StackApplication_in_to_postfix.dir/main.c.o"

# External object files for target StackApplication_in_to_postfix
StackApplication_in_to_postfix_EXTERNAL_OBJECTS =

StackApplication_in_to_postfix: CMakeFiles/StackApplication_in_to_postfix.dir/main.c.o
StackApplication_in_to_postfix: CMakeFiles/StackApplication_in_to_postfix.dir/build.make
StackApplication_in_to_postfix: CMakeFiles/StackApplication_in_to_postfix.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/ijaehyeon/Desktop/MyDocuments/gitblog/DataStructure_Labs/StackApplication_in-to-postfix/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable StackApplication_in_to_postfix"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/StackApplication_in_to_postfix.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/StackApplication_in_to_postfix.dir/build: StackApplication_in_to_postfix

.PHONY : CMakeFiles/StackApplication_in_to_postfix.dir/build

CMakeFiles/StackApplication_in_to_postfix.dir/requires: CMakeFiles/StackApplication_in_to_postfix.dir/main.c.o.requires

.PHONY : CMakeFiles/StackApplication_in_to_postfix.dir/requires

CMakeFiles/StackApplication_in_to_postfix.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/StackApplication_in_to_postfix.dir/cmake_clean.cmake
.PHONY : CMakeFiles/StackApplication_in_to_postfix.dir/clean

CMakeFiles/StackApplication_in_to_postfix.dir/depend:
	cd /Users/ijaehyeon/Desktop/MyDocuments/gitblog/DataStructure_Labs/StackApplication_in-to-postfix/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ijaehyeon/Desktop/MyDocuments/gitblog/DataStructure_Labs/StackApplication_in-to-postfix /Users/ijaehyeon/Desktop/MyDocuments/gitblog/DataStructure_Labs/StackApplication_in-to-postfix /Users/ijaehyeon/Desktop/MyDocuments/gitblog/DataStructure_Labs/StackApplication_in-to-postfix/cmake-build-debug /Users/ijaehyeon/Desktop/MyDocuments/gitblog/DataStructure_Labs/StackApplication_in-to-postfix/cmake-build-debug /Users/ijaehyeon/Desktop/MyDocuments/gitblog/DataStructure_Labs/StackApplication_in-to-postfix/cmake-build-debug/CMakeFiles/StackApplication_in_to_postfix.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/StackApplication_in_to_postfix.dir/depend

