# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_SOURCE_DIR = /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/build

# Include any dependencies generated for this target.
include CMakeFiles/DropDownMenu4.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/DropDownMenu4.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/DropDownMenu4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DropDownMenu4.dir/flags.make

CMakeFiles/DropDownMenu4.dir/main.cpp.o: CMakeFiles/DropDownMenu4.dir/flags.make
CMakeFiles/DropDownMenu4.dir/main.cpp.o: ../main.cpp
CMakeFiles/DropDownMenu4.dir/main.cpp.o: CMakeFiles/DropDownMenu4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DropDownMenu4.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/DropDownMenu4.dir/main.cpp.o -MF CMakeFiles/DropDownMenu4.dir/main.cpp.o.d -o CMakeFiles/DropDownMenu4.dir/main.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/main.cpp

CMakeFiles/DropDownMenu4.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DropDownMenu4.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/main.cpp > CMakeFiles/DropDownMenu4.dir/main.cpp.i

CMakeFiles/DropDownMenu4.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DropDownMenu4.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/main.cpp -o CMakeFiles/DropDownMenu4.dir/main.cpp.s

CMakeFiles/DropDownMenu4.dir/EventHandler.cpp.o: CMakeFiles/DropDownMenu4.dir/flags.make
CMakeFiles/DropDownMenu4.dir/EventHandler.cpp.o: ../EventHandler.cpp
CMakeFiles/DropDownMenu4.dir/EventHandler.cpp.o: CMakeFiles/DropDownMenu4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/DropDownMenu4.dir/EventHandler.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/DropDownMenu4.dir/EventHandler.cpp.o -MF CMakeFiles/DropDownMenu4.dir/EventHandler.cpp.o.d -o CMakeFiles/DropDownMenu4.dir/EventHandler.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/EventHandler.cpp

CMakeFiles/DropDownMenu4.dir/EventHandler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DropDownMenu4.dir/EventHandler.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/EventHandler.cpp > CMakeFiles/DropDownMenu4.dir/EventHandler.cpp.i

CMakeFiles/DropDownMenu4.dir/EventHandler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DropDownMenu4.dir/EventHandler.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/EventHandler.cpp -o CMakeFiles/DropDownMenu4.dir/EventHandler.cpp.s

CMakeFiles/DropDownMenu4.dir/States.cpp.o: CMakeFiles/DropDownMenu4.dir/flags.make
CMakeFiles/DropDownMenu4.dir/States.cpp.o: ../States.cpp
CMakeFiles/DropDownMenu4.dir/States.cpp.o: CMakeFiles/DropDownMenu4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/DropDownMenu4.dir/States.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/DropDownMenu4.dir/States.cpp.o -MF CMakeFiles/DropDownMenu4.dir/States.cpp.o.d -o CMakeFiles/DropDownMenu4.dir/States.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/States.cpp

CMakeFiles/DropDownMenu4.dir/States.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DropDownMenu4.dir/States.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/States.cpp > CMakeFiles/DropDownMenu4.dir/States.cpp.i

CMakeFiles/DropDownMenu4.dir/States.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DropDownMenu4.dir/States.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/States.cpp -o CMakeFiles/DropDownMenu4.dir/States.cpp.s

CMakeFiles/DropDownMenu4.dir/Snapshot.cpp.o: CMakeFiles/DropDownMenu4.dir/flags.make
CMakeFiles/DropDownMenu4.dir/Snapshot.cpp.o: ../Snapshot.cpp
CMakeFiles/DropDownMenu4.dir/Snapshot.cpp.o: CMakeFiles/DropDownMenu4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/DropDownMenu4.dir/Snapshot.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/DropDownMenu4.dir/Snapshot.cpp.o -MF CMakeFiles/DropDownMenu4.dir/Snapshot.cpp.o.d -o CMakeFiles/DropDownMenu4.dir/Snapshot.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/Snapshot.cpp

CMakeFiles/DropDownMenu4.dir/Snapshot.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DropDownMenu4.dir/Snapshot.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/Snapshot.cpp > CMakeFiles/DropDownMenu4.dir/Snapshot.cpp.i

CMakeFiles/DropDownMenu4.dir/Snapshot.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DropDownMenu4.dir/Snapshot.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/Snapshot.cpp -o CMakeFiles/DropDownMenu4.dir/Snapshot.cpp.s

CMakeFiles/DropDownMenu4.dir/SnapshotInterface.cpp.o: CMakeFiles/DropDownMenu4.dir/flags.make
CMakeFiles/DropDownMenu4.dir/SnapshotInterface.cpp.o: ../SnapshotInterface.cpp
CMakeFiles/DropDownMenu4.dir/SnapshotInterface.cpp.o: CMakeFiles/DropDownMenu4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/DropDownMenu4.dir/SnapshotInterface.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/DropDownMenu4.dir/SnapshotInterface.cpp.o -MF CMakeFiles/DropDownMenu4.dir/SnapshotInterface.cpp.o.d -o CMakeFiles/DropDownMenu4.dir/SnapshotInterface.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/SnapshotInterface.cpp

CMakeFiles/DropDownMenu4.dir/SnapshotInterface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DropDownMenu4.dir/SnapshotInterface.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/SnapshotInterface.cpp > CMakeFiles/DropDownMenu4.dir/SnapshotInterface.cpp.i

CMakeFiles/DropDownMenu4.dir/SnapshotInterface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DropDownMenu4.dir/SnapshotInterface.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/SnapshotInterface.cpp -o CMakeFiles/DropDownMenu4.dir/SnapshotInterface.cpp.s

CMakeFiles/DropDownMenu4.dir/GuiComponent.cpp.o: CMakeFiles/DropDownMenu4.dir/flags.make
CMakeFiles/DropDownMenu4.dir/GuiComponent.cpp.o: ../GuiComponent.cpp
CMakeFiles/DropDownMenu4.dir/GuiComponent.cpp.o: CMakeFiles/DropDownMenu4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/DropDownMenu4.dir/GuiComponent.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/DropDownMenu4.dir/GuiComponent.cpp.o -MF CMakeFiles/DropDownMenu4.dir/GuiComponent.cpp.o.d -o CMakeFiles/DropDownMenu4.dir/GuiComponent.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/GuiComponent.cpp

CMakeFiles/DropDownMenu4.dir/GuiComponent.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DropDownMenu4.dir/GuiComponent.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/GuiComponent.cpp > CMakeFiles/DropDownMenu4.dir/GuiComponent.cpp.i

CMakeFiles/DropDownMenu4.dir/GuiComponent.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DropDownMenu4.dir/GuiComponent.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/GuiComponent.cpp -o CMakeFiles/DropDownMenu4.dir/GuiComponent.cpp.s

CMakeFiles/DropDownMenu4.dir/KeyBoardShortCuts.cpp.o: CMakeFiles/DropDownMenu4.dir/flags.make
CMakeFiles/DropDownMenu4.dir/KeyBoardShortCuts.cpp.o: ../KeyBoardShortCuts.cpp
CMakeFiles/DropDownMenu4.dir/KeyBoardShortCuts.cpp.o: CMakeFiles/DropDownMenu4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/DropDownMenu4.dir/KeyBoardShortCuts.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/DropDownMenu4.dir/KeyBoardShortCuts.cpp.o -MF CMakeFiles/DropDownMenu4.dir/KeyBoardShortCuts.cpp.o.d -o CMakeFiles/DropDownMenu4.dir/KeyBoardShortCuts.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/KeyBoardShortCuts.cpp

CMakeFiles/DropDownMenu4.dir/KeyBoardShortCuts.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DropDownMenu4.dir/KeyBoardShortCuts.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/KeyBoardShortCuts.cpp > CMakeFiles/DropDownMenu4.dir/KeyBoardShortCuts.cpp.i

CMakeFiles/DropDownMenu4.dir/KeyBoardShortCuts.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DropDownMenu4.dir/KeyBoardShortCuts.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/KeyBoardShortCuts.cpp -o CMakeFiles/DropDownMenu4.dir/KeyBoardShortCuts.cpp.s

CMakeFiles/DropDownMenu4.dir/MouseEvents.cpp.o: CMakeFiles/DropDownMenu4.dir/flags.make
CMakeFiles/DropDownMenu4.dir/MouseEvents.cpp.o: ../MouseEvents.cpp
CMakeFiles/DropDownMenu4.dir/MouseEvents.cpp.o: CMakeFiles/DropDownMenu4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/DropDownMenu4.dir/MouseEvents.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/DropDownMenu4.dir/MouseEvents.cpp.o -MF CMakeFiles/DropDownMenu4.dir/MouseEvents.cpp.o.d -o CMakeFiles/DropDownMenu4.dir/MouseEvents.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/MouseEvents.cpp

CMakeFiles/DropDownMenu4.dir/MouseEvents.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DropDownMenu4.dir/MouseEvents.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/MouseEvents.cpp > CMakeFiles/DropDownMenu4.dir/MouseEvents.cpp.i

CMakeFiles/DropDownMenu4.dir/MouseEvents.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DropDownMenu4.dir/MouseEvents.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/MouseEvents.cpp -o CMakeFiles/DropDownMenu4.dir/MouseEvents.cpp.s

CMakeFiles/DropDownMenu4.dir/History.cpp.o: CMakeFiles/DropDownMenu4.dir/flags.make
CMakeFiles/DropDownMenu4.dir/History.cpp.o: ../History.cpp
CMakeFiles/DropDownMenu4.dir/History.cpp.o: CMakeFiles/DropDownMenu4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/DropDownMenu4.dir/History.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/DropDownMenu4.dir/History.cpp.o -MF CMakeFiles/DropDownMenu4.dir/History.cpp.o.d -o CMakeFiles/DropDownMenu4.dir/History.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/History.cpp

CMakeFiles/DropDownMenu4.dir/History.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DropDownMenu4.dir/History.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/History.cpp > CMakeFiles/DropDownMenu4.dir/History.cpp.i

CMakeFiles/DropDownMenu4.dir/History.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DropDownMenu4.dir/History.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/History.cpp -o CMakeFiles/DropDownMenu4.dir/History.cpp.s

CMakeFiles/DropDownMenu4.dir/Node.cpp.o: CMakeFiles/DropDownMenu4.dir/flags.make
CMakeFiles/DropDownMenu4.dir/Node.cpp.o: ../Node.cpp
CMakeFiles/DropDownMenu4.dir/Node.cpp.o: CMakeFiles/DropDownMenu4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/DropDownMenu4.dir/Node.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/DropDownMenu4.dir/Node.cpp.o -MF CMakeFiles/DropDownMenu4.dir/Node.cpp.o.d -o CMakeFiles/DropDownMenu4.dir/Node.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/Node.cpp

CMakeFiles/DropDownMenu4.dir/Node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DropDownMenu4.dir/Node.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/Node.cpp > CMakeFiles/DropDownMenu4.dir/Node.cpp.i

CMakeFiles/DropDownMenu4.dir/Node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DropDownMenu4.dir/Node.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/Node.cpp -o CMakeFiles/DropDownMenu4.dir/Node.cpp.s

CMakeFiles/DropDownMenu4.dir/NodeIterator.cpp.o: CMakeFiles/DropDownMenu4.dir/flags.make
CMakeFiles/DropDownMenu4.dir/NodeIterator.cpp.o: ../NodeIterator.cpp
CMakeFiles/DropDownMenu4.dir/NodeIterator.cpp.o: CMakeFiles/DropDownMenu4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/DropDownMenu4.dir/NodeIterator.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/DropDownMenu4.dir/NodeIterator.cpp.o -MF CMakeFiles/DropDownMenu4.dir/NodeIterator.cpp.o.d -o CMakeFiles/DropDownMenu4.dir/NodeIterator.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/NodeIterator.cpp

CMakeFiles/DropDownMenu4.dir/NodeIterator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DropDownMenu4.dir/NodeIterator.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/NodeIterator.cpp > CMakeFiles/DropDownMenu4.dir/NodeIterator.cpp.i

CMakeFiles/DropDownMenu4.dir/NodeIterator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DropDownMenu4.dir/NodeIterator.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/NodeIterator.cpp -o CMakeFiles/DropDownMenu4.dir/NodeIterator.cpp.s

CMakeFiles/DropDownMenu4.dir/linkedList.cpp.o: CMakeFiles/DropDownMenu4.dir/flags.make
CMakeFiles/DropDownMenu4.dir/linkedList.cpp.o: ../linkedList.cpp
CMakeFiles/DropDownMenu4.dir/linkedList.cpp.o: CMakeFiles/DropDownMenu4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/DropDownMenu4.dir/linkedList.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/DropDownMenu4.dir/linkedList.cpp.o -MF CMakeFiles/DropDownMenu4.dir/linkedList.cpp.o.d -o CMakeFiles/DropDownMenu4.dir/linkedList.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/linkedList.cpp

CMakeFiles/DropDownMenu4.dir/linkedList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DropDownMenu4.dir/linkedList.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/linkedList.cpp > CMakeFiles/DropDownMenu4.dir/linkedList.cpp.i

CMakeFiles/DropDownMenu4.dir/linkedList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DropDownMenu4.dir/linkedList.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/linkedList.cpp -o CMakeFiles/DropDownMenu4.dir/linkedList.cpp.s

CMakeFiles/DropDownMenu4.dir/ProjectFont.cpp.o: CMakeFiles/DropDownMenu4.dir/flags.make
CMakeFiles/DropDownMenu4.dir/ProjectFont.cpp.o: ../ProjectFont.cpp
CMakeFiles/DropDownMenu4.dir/ProjectFont.cpp.o: CMakeFiles/DropDownMenu4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/DropDownMenu4.dir/ProjectFont.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/DropDownMenu4.dir/ProjectFont.cpp.o -MF CMakeFiles/DropDownMenu4.dir/ProjectFont.cpp.o.d -o CMakeFiles/DropDownMenu4.dir/ProjectFont.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/ProjectFont.cpp

CMakeFiles/DropDownMenu4.dir/ProjectFont.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DropDownMenu4.dir/ProjectFont.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/ProjectFont.cpp > CMakeFiles/DropDownMenu4.dir/ProjectFont.cpp.i

CMakeFiles/DropDownMenu4.dir/ProjectFont.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DropDownMenu4.dir/ProjectFont.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/ProjectFont.cpp -o CMakeFiles/DropDownMenu4.dir/ProjectFont.cpp.s

CMakeFiles/DropDownMenu4.dir/Item.cpp.o: CMakeFiles/DropDownMenu4.dir/flags.make
CMakeFiles/DropDownMenu4.dir/Item.cpp.o: ../Item.cpp
CMakeFiles/DropDownMenu4.dir/Item.cpp.o: CMakeFiles/DropDownMenu4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/DropDownMenu4.dir/Item.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/DropDownMenu4.dir/Item.cpp.o -MF CMakeFiles/DropDownMenu4.dir/Item.cpp.o.d -o CMakeFiles/DropDownMenu4.dir/Item.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/Item.cpp

CMakeFiles/DropDownMenu4.dir/Item.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DropDownMenu4.dir/Item.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/Item.cpp > CMakeFiles/DropDownMenu4.dir/Item.cpp.i

CMakeFiles/DropDownMenu4.dir/Item.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DropDownMenu4.dir/Item.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/Item.cpp -o CMakeFiles/DropDownMenu4.dir/Item.cpp.s

CMakeFiles/DropDownMenu4.dir/InputBox.cpp.o: CMakeFiles/DropDownMenu4.dir/flags.make
CMakeFiles/DropDownMenu4.dir/InputBox.cpp.o: ../InputBox.cpp
CMakeFiles/DropDownMenu4.dir/InputBox.cpp.o: CMakeFiles/DropDownMenu4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/DropDownMenu4.dir/InputBox.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/DropDownMenu4.dir/InputBox.cpp.o -MF CMakeFiles/DropDownMenu4.dir/InputBox.cpp.o.d -o CMakeFiles/DropDownMenu4.dir/InputBox.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/InputBox.cpp

CMakeFiles/DropDownMenu4.dir/InputBox.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DropDownMenu4.dir/InputBox.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/InputBox.cpp > CMakeFiles/DropDownMenu4.dir/InputBox.cpp.i

CMakeFiles/DropDownMenu4.dir/InputBox.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DropDownMenu4.dir/InputBox.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/InputBox.cpp -o CMakeFiles/DropDownMenu4.dir/InputBox.cpp.s

CMakeFiles/DropDownMenu4.dir/ItemList.cpp.o: CMakeFiles/DropDownMenu4.dir/flags.make
CMakeFiles/DropDownMenu4.dir/ItemList.cpp.o: ../ItemList.cpp
CMakeFiles/DropDownMenu4.dir/ItemList.cpp.o: CMakeFiles/DropDownMenu4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/DropDownMenu4.dir/ItemList.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/DropDownMenu4.dir/ItemList.cpp.o -MF CMakeFiles/DropDownMenu4.dir/ItemList.cpp.o.d -o CMakeFiles/DropDownMenu4.dir/ItemList.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/ItemList.cpp

CMakeFiles/DropDownMenu4.dir/ItemList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DropDownMenu4.dir/ItemList.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/ItemList.cpp > CMakeFiles/DropDownMenu4.dir/ItemList.cpp.i

CMakeFiles/DropDownMenu4.dir/ItemList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DropDownMenu4.dir/ItemList.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/ItemList.cpp -o CMakeFiles/DropDownMenu4.dir/ItemList.cpp.s

CMakeFiles/DropDownMenu4.dir/DropDownMenu.cpp.o: CMakeFiles/DropDownMenu4.dir/flags.make
CMakeFiles/DropDownMenu4.dir/DropDownMenu.cpp.o: ../DropDownMenu.cpp
CMakeFiles/DropDownMenu4.dir/DropDownMenu.cpp.o: CMakeFiles/DropDownMenu4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building CXX object CMakeFiles/DropDownMenu4.dir/DropDownMenu.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/DropDownMenu4.dir/DropDownMenu.cpp.o -MF CMakeFiles/DropDownMenu4.dir/DropDownMenu.cpp.o.d -o CMakeFiles/DropDownMenu4.dir/DropDownMenu.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/DropDownMenu.cpp

CMakeFiles/DropDownMenu4.dir/DropDownMenu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DropDownMenu4.dir/DropDownMenu.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/DropDownMenu.cpp > CMakeFiles/DropDownMenu4.dir/DropDownMenu.cpp.i

CMakeFiles/DropDownMenu4.dir/DropDownMenu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DropDownMenu4.dir/DropDownMenu.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/DropDownMenu.cpp -o CMakeFiles/DropDownMenu4.dir/DropDownMenu.cpp.s

# Object files for target DropDownMenu4
DropDownMenu4_OBJECTS = \
"CMakeFiles/DropDownMenu4.dir/main.cpp.o" \
"CMakeFiles/DropDownMenu4.dir/EventHandler.cpp.o" \
"CMakeFiles/DropDownMenu4.dir/States.cpp.o" \
"CMakeFiles/DropDownMenu4.dir/Snapshot.cpp.o" \
"CMakeFiles/DropDownMenu4.dir/SnapshotInterface.cpp.o" \
"CMakeFiles/DropDownMenu4.dir/GuiComponent.cpp.o" \
"CMakeFiles/DropDownMenu4.dir/KeyBoardShortCuts.cpp.o" \
"CMakeFiles/DropDownMenu4.dir/MouseEvents.cpp.o" \
"CMakeFiles/DropDownMenu4.dir/History.cpp.o" \
"CMakeFiles/DropDownMenu4.dir/Node.cpp.o" \
"CMakeFiles/DropDownMenu4.dir/NodeIterator.cpp.o" \
"CMakeFiles/DropDownMenu4.dir/linkedList.cpp.o" \
"CMakeFiles/DropDownMenu4.dir/ProjectFont.cpp.o" \
"CMakeFiles/DropDownMenu4.dir/Item.cpp.o" \
"CMakeFiles/DropDownMenu4.dir/InputBox.cpp.o" \
"CMakeFiles/DropDownMenu4.dir/ItemList.cpp.o" \
"CMakeFiles/DropDownMenu4.dir/DropDownMenu.cpp.o"

# External object files for target DropDownMenu4
DropDownMenu4_EXTERNAL_OBJECTS =

DropDownMenu4: CMakeFiles/DropDownMenu4.dir/main.cpp.o
DropDownMenu4: CMakeFiles/DropDownMenu4.dir/EventHandler.cpp.o
DropDownMenu4: CMakeFiles/DropDownMenu4.dir/States.cpp.o
DropDownMenu4: CMakeFiles/DropDownMenu4.dir/Snapshot.cpp.o
DropDownMenu4: CMakeFiles/DropDownMenu4.dir/SnapshotInterface.cpp.o
DropDownMenu4: CMakeFiles/DropDownMenu4.dir/GuiComponent.cpp.o
DropDownMenu4: CMakeFiles/DropDownMenu4.dir/KeyBoardShortCuts.cpp.o
DropDownMenu4: CMakeFiles/DropDownMenu4.dir/MouseEvents.cpp.o
DropDownMenu4: CMakeFiles/DropDownMenu4.dir/History.cpp.o
DropDownMenu4: CMakeFiles/DropDownMenu4.dir/Node.cpp.o
DropDownMenu4: CMakeFiles/DropDownMenu4.dir/NodeIterator.cpp.o
DropDownMenu4: CMakeFiles/DropDownMenu4.dir/linkedList.cpp.o
DropDownMenu4: CMakeFiles/DropDownMenu4.dir/ProjectFont.cpp.o
DropDownMenu4: CMakeFiles/DropDownMenu4.dir/Item.cpp.o
DropDownMenu4: CMakeFiles/DropDownMenu4.dir/InputBox.cpp.o
DropDownMenu4: CMakeFiles/DropDownMenu4.dir/ItemList.cpp.o
DropDownMenu4: CMakeFiles/DropDownMenu4.dir/DropDownMenu.cpp.o
DropDownMenu4: CMakeFiles/DropDownMenu4.dir/build.make
DropDownMenu4: /opt/homebrew/lib/libsfml-graphics.2.5.1.dylib
DropDownMenu4: /opt/homebrew/lib/libsfml-audio.2.5.1.dylib
DropDownMenu4: /opt/homebrew/lib/libsfml-window.2.5.1.dylib
DropDownMenu4: /opt/homebrew/lib/libsfml-system.2.5.1.dylib
DropDownMenu4: CMakeFiles/DropDownMenu4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Linking CXX executable DropDownMenu4"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DropDownMenu4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DropDownMenu4.dir/build: DropDownMenu4
.PHONY : CMakeFiles/DropDownMenu4.dir/build

CMakeFiles/DropDownMenu4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/DropDownMenu4.dir/cmake_clean.cmake
.PHONY : CMakeFiles/DropDownMenu4.dir/clean

CMakeFiles/DropDownMenu4.dir/depend:
	cd /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4 /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4 /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/build /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/build /Users/qcl/pcc/spring2021/SFML/Project/DropDownMenu4/build/CMakeFiles/DropDownMenu4.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DropDownMenu4.dir/depend
