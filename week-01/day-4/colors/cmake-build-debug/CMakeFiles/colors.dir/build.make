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
CMAKE_SOURCE_DIR = /cygdrive/d/greenfox/szecsia929/week-01/day-4/colors

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/d/greenfox/szecsia929/week-01/day-4/colors/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/colors.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/colors.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/colors.dir/flags.make

CMakeFiles/colors.dir/main.cpp.o: CMakeFiles/colors.dir/flags.make
CMakeFiles/colors.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/d/greenfox/szecsia929/week-01/day-4/colors/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/colors.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/colors.dir/main.cpp.o -c /cygdrive/d/greenfox/szecsia929/week-01/day-4/colors/main.cpp

CMakeFiles/colors.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/colors.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/d/greenfox/szecsia929/week-01/day-4/colors/main.cpp > CMakeFiles/colors.dir/main.cpp.i

CMakeFiles/colors.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/colors.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/d/greenfox/szecsia929/week-01/day-4/colors/main.cpp -o CMakeFiles/colors.dir/main.cpp.s

# Object files for target colors
colors_OBJECTS = \
"CMakeFiles/colors.dir/main.cpp.o"

# External object files for target colors
colors_EXTERNAL_OBJECTS =

colors.exe: CMakeFiles/colors.dir/main.cpp.o
colors.exe: CMakeFiles/colors.dir/build.make
colors.exe: CMakeFiles/colors.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/d/greenfox/szecsia929/week-01/day-4/colors/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable colors.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/colors.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/colors.dir/build: colors.exe

.PHONY : CMakeFiles/colors.dir/build

CMakeFiles/colors.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/colors.dir/cmake_clean.cmake
.PHONY : CMakeFiles/colors.dir/clean

CMakeFiles/colors.dir/depend:
	cd /cygdrive/d/greenfox/szecsia929/week-01/day-4/colors/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/d/greenfox/szecsia929/week-01/day-4/colors /cygdrive/d/greenfox/szecsia929/week-01/day-4/colors /cygdrive/d/greenfox/szecsia929/week-01/day-4/colors/cmake-build-debug /cygdrive/d/greenfox/szecsia929/week-01/day-4/colors/cmake-build-debug /cygdrive/d/greenfox/szecsia929/week-01/day-4/colors/cmake-build-debug/CMakeFiles/colors.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/colors.dir/depend

