# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /cygdrive/c/Users/user/.CLion2019.1/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/user/.CLion2019.1/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/d/greenfox/week1/day3/variables

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/d/greenfox/week1/day3/variables/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/variables.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/variables.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/variables.dir/flags.make

CMakeFiles/variables.dir/main.cpp.o: CMakeFiles/variables.dir/flags.make
CMakeFiles/variables.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/d/greenfox/week1/day3/variables/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/variables.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/variables.dir/main.cpp.o -c /cygdrive/d/greenfox/week1/day3/variables/main.cpp

CMakeFiles/variables.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/variables.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/d/greenfox/week1/day3/variables/main.cpp > CMakeFiles/variables.dir/main.cpp.i

CMakeFiles/variables.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/variables.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/d/greenfox/week1/day3/variables/main.cpp -o CMakeFiles/variables.dir/main.cpp.s

# Object files for target variables
variables_OBJECTS = \
"CMakeFiles/variables.dir/main.cpp.o"

# External object files for target variables
variables_EXTERNAL_OBJECTS =

variables.exe: CMakeFiles/variables.dir/main.cpp.o
variables.exe: CMakeFiles/variables.dir/build.make
variables.exe: CMakeFiles/variables.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/d/greenfox/week1/day3/variables/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable variables.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/variables.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/variables.dir/build: variables.exe

.PHONY : CMakeFiles/variables.dir/build

CMakeFiles/variables.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/variables.dir/cmake_clean.cmake
.PHONY : CMakeFiles/variables.dir/clean

CMakeFiles/variables.dir/depend:
	cd /cygdrive/d/greenfox/week1/day3/variables/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/d/greenfox/week1/day3/variables /cygdrive/d/greenfox/week1/day3/variables /cygdrive/d/greenfox/week1/day3/variables/cmake-build-debug /cygdrive/d/greenfox/week1/day3/variables/cmake-build-debug /cygdrive/d/greenfox/week1/day3/variables/cmake-build-debug/CMakeFiles/variables.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/variables.dir/depend

