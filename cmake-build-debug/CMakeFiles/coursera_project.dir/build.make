# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/nikitaplakhin/Desktop/Programming/Projects/C++/coursera_project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/nikitaplakhin/Desktop/Programming/Projects/C++/coursera_project/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/coursera_project.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/coursera_project.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/coursera_project.dir/flags.make

CMakeFiles/coursera_project.dir/main.cpp.o: CMakeFiles/coursera_project.dir/flags.make
CMakeFiles/coursera_project.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nikitaplakhin/Desktop/Programming/Projects/C++/coursera_project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/coursera_project.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/coursera_project.dir/main.cpp.o -c /Users/nikitaplakhin/Desktop/Programming/Projects/C++/coursera_project/main.cpp

CMakeFiles/coursera_project.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/coursera_project.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nikitaplakhin/Desktop/Programming/Projects/C++/coursera_project/main.cpp > CMakeFiles/coursera_project.dir/main.cpp.i

CMakeFiles/coursera_project.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/coursera_project.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nikitaplakhin/Desktop/Programming/Projects/C++/coursera_project/main.cpp -o CMakeFiles/coursera_project.dir/main.cpp.s

# Object files for target coursera_project
coursera_project_OBJECTS = \
"CMakeFiles/coursera_project.dir/main.cpp.o"

# External object files for target coursera_project
coursera_project_EXTERNAL_OBJECTS =

coursera_project: CMakeFiles/coursera_project.dir/main.cpp.o
coursera_project: CMakeFiles/coursera_project.dir/build.make
coursera_project: CMakeFiles/coursera_project.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/nikitaplakhin/Desktop/Programming/Projects/C++/coursera_project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable coursera_project"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/coursera_project.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/coursera_project.dir/build: coursera_project

.PHONY : CMakeFiles/coursera_project.dir/build

CMakeFiles/coursera_project.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/coursera_project.dir/cmake_clean.cmake
.PHONY : CMakeFiles/coursera_project.dir/clean

CMakeFiles/coursera_project.dir/depend:
	cd /Users/nikitaplakhin/Desktop/Programming/Projects/C++/coursera_project/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/nikitaplakhin/Desktop/Programming/Projects/C++/coursera_project /Users/nikitaplakhin/Desktop/Programming/Projects/C++/coursera_project /Users/nikitaplakhin/Desktop/Programming/Projects/C++/coursera_project/cmake-build-debug /Users/nikitaplakhin/Desktop/Programming/Projects/C++/coursera_project/cmake-build-debug /Users/nikitaplakhin/Desktop/Programming/Projects/C++/coursera_project/cmake-build-debug/CMakeFiles/coursera_project.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/coursera_project.dir/depend
