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
CMAKE_SOURCE_DIR = /Users/ijaehyeon/Desktop/MyDocuments/gitblog/DataStructure_Labs/DS_lab4_k-th-number

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ijaehyeon/Desktop/MyDocuments/gitblog/DataStructure_Labs/DS_lab4_k-th-number/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/DS_lab4_k_th_number.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/DS_lab4_k_th_number.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DS_lab4_k_th_number.dir/flags.make

CMakeFiles/DS_lab4_k_th_number.dir/main.c.o: CMakeFiles/DS_lab4_k_th_number.dir/flags.make
CMakeFiles/DS_lab4_k_th_number.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ijaehyeon/Desktop/MyDocuments/gitblog/DataStructure_Labs/DS_lab4_k-th-number/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/DS_lab4_k_th_number.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/DS_lab4_k_th_number.dir/main.c.o   -c /Users/ijaehyeon/Desktop/MyDocuments/gitblog/DataStructure_Labs/DS_lab4_k-th-number/main.c

CMakeFiles/DS_lab4_k_th_number.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/DS_lab4_k_th_number.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/ijaehyeon/Desktop/MyDocuments/gitblog/DataStructure_Labs/DS_lab4_k-th-number/main.c > CMakeFiles/DS_lab4_k_th_number.dir/main.c.i

CMakeFiles/DS_lab4_k_th_number.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/DS_lab4_k_th_number.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/ijaehyeon/Desktop/MyDocuments/gitblog/DataStructure_Labs/DS_lab4_k-th-number/main.c -o CMakeFiles/DS_lab4_k_th_number.dir/main.c.s

CMakeFiles/DS_lab4_k_th_number.dir/main.c.o.requires:

.PHONY : CMakeFiles/DS_lab4_k_th_number.dir/main.c.o.requires

CMakeFiles/DS_lab4_k_th_number.dir/main.c.o.provides: CMakeFiles/DS_lab4_k_th_number.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/DS_lab4_k_th_number.dir/build.make CMakeFiles/DS_lab4_k_th_number.dir/main.c.o.provides.build
.PHONY : CMakeFiles/DS_lab4_k_th_number.dir/main.c.o.provides

CMakeFiles/DS_lab4_k_th_number.dir/main.c.o.provides.build: CMakeFiles/DS_lab4_k_th_number.dir/main.c.o


CMakeFiles/DS_lab4_k_th_number.dir/adt.c.o: CMakeFiles/DS_lab4_k_th_number.dir/flags.make
CMakeFiles/DS_lab4_k_th_number.dir/adt.c.o: ../adt.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ijaehyeon/Desktop/MyDocuments/gitblog/DataStructure_Labs/DS_lab4_k-th-number/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/DS_lab4_k_th_number.dir/adt.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/DS_lab4_k_th_number.dir/adt.c.o   -c /Users/ijaehyeon/Desktop/MyDocuments/gitblog/DataStructure_Labs/DS_lab4_k-th-number/adt.c

CMakeFiles/DS_lab4_k_th_number.dir/adt.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/DS_lab4_k_th_number.dir/adt.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/ijaehyeon/Desktop/MyDocuments/gitblog/DataStructure_Labs/DS_lab4_k-th-number/adt.c > CMakeFiles/DS_lab4_k_th_number.dir/adt.c.i

CMakeFiles/DS_lab4_k_th_number.dir/adt.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/DS_lab4_k_th_number.dir/adt.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/ijaehyeon/Desktop/MyDocuments/gitblog/DataStructure_Labs/DS_lab4_k-th-number/adt.c -o CMakeFiles/DS_lab4_k_th_number.dir/adt.c.s

CMakeFiles/DS_lab4_k_th_number.dir/adt.c.o.requires:

.PHONY : CMakeFiles/DS_lab4_k_th_number.dir/adt.c.o.requires

CMakeFiles/DS_lab4_k_th_number.dir/adt.c.o.provides: CMakeFiles/DS_lab4_k_th_number.dir/adt.c.o.requires
	$(MAKE) -f CMakeFiles/DS_lab4_k_th_number.dir/build.make CMakeFiles/DS_lab4_k_th_number.dir/adt.c.o.provides.build
.PHONY : CMakeFiles/DS_lab4_k_th_number.dir/adt.c.o.provides

CMakeFiles/DS_lab4_k_th_number.dir/adt.c.o.provides.build: CMakeFiles/DS_lab4_k_th_number.dir/adt.c.o


# Object files for target DS_lab4_k_th_number
DS_lab4_k_th_number_OBJECTS = \
"CMakeFiles/DS_lab4_k_th_number.dir/main.c.o" \
"CMakeFiles/DS_lab4_k_th_number.dir/adt.c.o"

# External object files for target DS_lab4_k_th_number
DS_lab4_k_th_number_EXTERNAL_OBJECTS =

DS_lab4_k_th_number: CMakeFiles/DS_lab4_k_th_number.dir/main.c.o
DS_lab4_k_th_number: CMakeFiles/DS_lab4_k_th_number.dir/adt.c.o
DS_lab4_k_th_number: CMakeFiles/DS_lab4_k_th_number.dir/build.make
DS_lab4_k_th_number: CMakeFiles/DS_lab4_k_th_number.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/ijaehyeon/Desktop/MyDocuments/gitblog/DataStructure_Labs/DS_lab4_k-th-number/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable DS_lab4_k_th_number"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DS_lab4_k_th_number.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DS_lab4_k_th_number.dir/build: DS_lab4_k_th_number

.PHONY : CMakeFiles/DS_lab4_k_th_number.dir/build

CMakeFiles/DS_lab4_k_th_number.dir/requires: CMakeFiles/DS_lab4_k_th_number.dir/main.c.o.requires
CMakeFiles/DS_lab4_k_th_number.dir/requires: CMakeFiles/DS_lab4_k_th_number.dir/adt.c.o.requires

.PHONY : CMakeFiles/DS_lab4_k_th_number.dir/requires

CMakeFiles/DS_lab4_k_th_number.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/DS_lab4_k_th_number.dir/cmake_clean.cmake
.PHONY : CMakeFiles/DS_lab4_k_th_number.dir/clean

CMakeFiles/DS_lab4_k_th_number.dir/depend:
	cd /Users/ijaehyeon/Desktop/MyDocuments/gitblog/DataStructure_Labs/DS_lab4_k-th-number/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ijaehyeon/Desktop/MyDocuments/gitblog/DataStructure_Labs/DS_lab4_k-th-number /Users/ijaehyeon/Desktop/MyDocuments/gitblog/DataStructure_Labs/DS_lab4_k-th-number /Users/ijaehyeon/Desktop/MyDocuments/gitblog/DataStructure_Labs/DS_lab4_k-th-number/cmake-build-debug /Users/ijaehyeon/Desktop/MyDocuments/gitblog/DataStructure_Labs/DS_lab4_k-th-number/cmake-build-debug /Users/ijaehyeon/Desktop/MyDocuments/gitblog/DataStructure_Labs/DS_lab4_k-th-number/cmake-build-debug/CMakeFiles/DS_lab4_k_th_number.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DS_lab4_k_th_number.dir/depend

