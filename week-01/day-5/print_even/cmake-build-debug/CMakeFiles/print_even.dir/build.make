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
CMAKE_SOURCE_DIR = /cygdrive/d/greenfox/szecsia929/week-01/day-5/print_even

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/d/greenfox/szecsia929/week-01/day-5/print_even/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/print_even.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/print_even.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/print_even.dir/flags.make

CMakeFiles/print_even.dir/main.cpp.o: CMakeFiles/print_even.dir/flags.make
CMakeFiles/print_even.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/d/greenfox/szecsia929/week-01/day-5/print_even/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/print_even.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/print_even.dir/main.cpp.o -c /cygdrive/d/greenfox/szecsia929/week-01/day-5/print_even/main.cpp

CMakeFiles/print_even.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/print_even.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/d/greenfox/szecsia929/week-01/day-5/print_even/main.cpp > CMakeFiles/print_even.dir/main.cpp.i

CMakeFiles/print_even.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/print_even.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/d/greenfox/szecsia929/week-01/day-5/print_even/main.cpp -o CMakeFiles/print_even.dir/main.cpp.s

# Object files for target print_even
print_even_OBJECTS = \
"CMakeFiles/print_even.dir/main.cpp.o"

# External object files for target print_even
print_even_EXTERNAL_OBJECTS =

print_even.exe: CMakeFiles/print_even.dir/main.cpp.o
print_even.exe: CMakeFiles/print_even.dir/build.make
print_even.exe: CMakeFiles/print_even.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/d/greenfox/szecsia929/week-01/day-5/print_even/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable print_even.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/print_even.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/print_even.dir/build: print_even.exe

.PHONY : CMakeFiles/print_even.dir/build

CMakeFiles/print_even.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/print_even.dir/cmake_clean.cmake
.PHONY : CMakeFiles/print_even.dir/clean

CMakeFiles/print_even.dir/depend:
	cd /cygdrive/d/greenfox/szecsia929/week-01/day-5/print_even/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/d/greenfox/szecsia929/week-01/day-5/print_even /cygdrive/d/greenfox/szecsia929/week-01/day-5/print_even /cygdrive/d/greenfox/szecsia929/week-01/day-5/print_even/cmake-build-debug /cygdrive/d/greenfox/szecsia929/week-01/day-5/print_even/cmake-build-debug /cygdrive/d/greenfox/szecsia929/week-01/day-5/print_even/cmake-build-debug/CMakeFiles/print_even.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/print_even.dir/depend
