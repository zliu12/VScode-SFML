# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/qcl/pcc/spring2021/SFML/Project/Bouncing_ball

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/qcl/pcc/spring2021/SFML/Project/Bouncing_ball/build

# Utility rule file for Nightly.

# Include the progress variables for this target.
include CMakeFiles/Nightly.dir/progress.make

CMakeFiles/Nightly:
	/Applications/CMake.app/Contents/bin/ctest -D Nightly

Nightly: CMakeFiles/Nightly
Nightly: CMakeFiles/Nightly.dir/build.make

.PHONY : Nightly

# Rule to build all files generated by this target.
CMakeFiles/Nightly.dir/build: Nightly

.PHONY : CMakeFiles/Nightly.dir/build

CMakeFiles/Nightly.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Nightly.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Nightly.dir/clean

CMakeFiles/Nightly.dir/depend:
	cd /Users/qcl/pcc/spring2021/SFML/Project/Bouncing_ball/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/qcl/pcc/spring2021/SFML/Project/Bouncing_ball /Users/qcl/pcc/spring2021/SFML/Project/Bouncing_ball /Users/qcl/pcc/spring2021/SFML/Project/Bouncing_ball/build /Users/qcl/pcc/spring2021/SFML/Project/Bouncing_ball/build /Users/qcl/pcc/spring2021/SFML/Project/Bouncing_ball/build/CMakeFiles/Nightly.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Nightly.dir/depend

