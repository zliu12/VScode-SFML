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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/qcl/pcc/spring2021/SFML/Project/Bouncing_ball

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/qcl/pcc/spring2021/SFML/Project/Bouncing_ball/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/bouncing_ball.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/bouncing_ball.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bouncing_ball.dir/flags.make

CMakeFiles/bouncing_ball.dir/main.cpp.o: CMakeFiles/bouncing_ball.dir/flags.make
CMakeFiles/bouncing_ball.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/Bouncing_ball/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/bouncing_ball.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/bouncing_ball.dir/main.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/Bouncing_ball/main.cpp

CMakeFiles/bouncing_ball.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bouncing_ball.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/Bouncing_ball/main.cpp > CMakeFiles/bouncing_ball.dir/main.cpp.i

CMakeFiles/bouncing_ball.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bouncing_ball.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/Bouncing_ball/main.cpp -o CMakeFiles/bouncing_ball.dir/main.cpp.s

CMakeFiles/bouncing_ball.dir/BounceIt.cpp.o: CMakeFiles/bouncing_ball.dir/flags.make
CMakeFiles/bouncing_ball.dir/BounceIt.cpp.o: ../BounceIt.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/Bouncing_ball/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/bouncing_ball.dir/BounceIt.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/bouncing_ball.dir/BounceIt.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/Bouncing_ball/BounceIt.cpp

CMakeFiles/bouncing_ball.dir/BounceIt.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bouncing_ball.dir/BounceIt.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/Bouncing_ball/BounceIt.cpp > CMakeFiles/bouncing_ball.dir/BounceIt.cpp.i

CMakeFiles/bouncing_ball.dir/BounceIt.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bouncing_ball.dir/BounceIt.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/Bouncing_ball/BounceIt.cpp -o CMakeFiles/bouncing_ball.dir/BounceIt.cpp.s

# Object files for target bouncing_ball
bouncing_ball_OBJECTS = \
"CMakeFiles/bouncing_ball.dir/main.cpp.o" \
"CMakeFiles/bouncing_ball.dir/BounceIt.cpp.o"

# External object files for target bouncing_ball
bouncing_ball_EXTERNAL_OBJECTS =

bouncing_ball: CMakeFiles/bouncing_ball.dir/main.cpp.o
bouncing_ball: CMakeFiles/bouncing_ball.dir/BounceIt.cpp.o
bouncing_ball: CMakeFiles/bouncing_ball.dir/build.make
bouncing_ball: /opt/homebrew/lib/libsfml-graphics.2.5.1.dylib
bouncing_ball: /opt/homebrew/lib/libsfml-audio.2.5.1.dylib
bouncing_ball: /opt/homebrew/lib/libsfml-window.2.5.1.dylib
bouncing_ball: /opt/homebrew/lib/libsfml-system.2.5.1.dylib
bouncing_ball: CMakeFiles/bouncing_ball.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/Bouncing_ball/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable bouncing_ball"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bouncing_ball.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bouncing_ball.dir/build: bouncing_ball

.PHONY : CMakeFiles/bouncing_ball.dir/build

CMakeFiles/bouncing_ball.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/bouncing_ball.dir/cmake_clean.cmake
.PHONY : CMakeFiles/bouncing_ball.dir/clean

CMakeFiles/bouncing_ball.dir/depend:
	cd /Users/qcl/pcc/spring2021/SFML/Project/Bouncing_ball/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/qcl/pcc/spring2021/SFML/Project/Bouncing_ball /Users/qcl/pcc/spring2021/SFML/Project/Bouncing_ball /Users/qcl/pcc/spring2021/SFML/Project/Bouncing_ball/cmake-build-debug /Users/qcl/pcc/spring2021/SFML/Project/Bouncing_ball/cmake-build-debug /Users/qcl/pcc/spring2021/SFML/Project/Bouncing_ball/cmake-build-debug/CMakeFiles/bouncing_ball.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bouncing_ball.dir/depend
