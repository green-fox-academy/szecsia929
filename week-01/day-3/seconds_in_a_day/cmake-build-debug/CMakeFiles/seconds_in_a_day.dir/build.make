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
CMAKE_SOURCE_DIR = /cygdrive/d/greenfox/week1/day3/seconds_in_a_day

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/d/greenfox/week1/day3/seconds_in_a_day/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/seconds_in_a_day.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/seconds_in_a_day.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/seconds_in_a_day.dir/flags.make

CMakeFiles/seconds_in_a_day.dir/main.cpp.o: CMakeFiles/seconds_in_a_day.dir/flags.make
CMakeFiles/seconds_in_a_day.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/d/greenfox/week1/day3/seconds_in_a_day/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/seconds_in_a_day.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/seconds_in_a_day.dir/main.cpp.o -c /cygdrive/d/greenfox/week1/day3/seconds_in_a_day/main.cpp

CMakeFiles/seconds_in_a_day.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/seconds_in_a_day.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/d/greenfox/week1/day3/seconds_in_a_day/main.cpp > CMakeFiles/seconds_in_a_day.dir/main.cpp.i

CMakeFiles/seconds_in_a_day.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/seconds_in_a_day.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/d/greenfox/week1/day3/seconds_in_a_day/main.cpp -o CMakeFiles/seconds_in_a_day.dir/main.cpp.s

# Object files for target seconds_in_a_day
seconds_in_a_day_OBJECTS = \
"CMakeFiles/seconds_in_a_day.dir/main.cpp.o"

# External object files for target seconds_in_a_day
seconds_in_a_day_EXTERNAL_OBJECTS =

seconds_in_a_day.exe: CMakeFiles/seconds_in_a_day.dir/main.cpp.o
seconds_in_a_day.exe: CMakeFiles/seconds_in_a_day.dir/build.make
seconds_in_a_day.exe: CMakeFiles/seconds_in_a_day.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/d/greenfox/week1/day3/seconds_in_a_day/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable seconds_in_a_day.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/seconds_in_a_day.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/seconds_in_a_day.dir/build: seconds_in_a_day.exe

.PHONY : CMakeFiles/seconds_in_a_day.dir/build

CMakeFiles/seconds_in_a_day.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/seconds_in_a_day.dir/cmake_clean.cmake
.PHONY : CMakeFiles/seconds_in_a_day.dir/clean

CMakeFiles/seconds_in_a_day.dir/depend:
	cd /cygdrive/d/greenfox/week1/day3/seconds_in_a_day/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/d/greenfox/week1/day3/seconds_in_a_day /cygdrive/d/greenfox/week1/day3/seconds_in_a_day /cygdrive/d/greenfox/week1/day3/seconds_in_a_day/cmake-build-debug /cygdrive/d/greenfox/week1/day3/seconds_in_a_day/cmake-build-debug /cygdrive/d/greenfox/week1/day3/seconds_in_a_day/cmake-build-debug/CMakeFiles/seconds_in_a_day.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/seconds_in_a_day.dir/depend
