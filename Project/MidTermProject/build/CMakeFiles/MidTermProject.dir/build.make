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
CMAKE_SOURCE_DIR = /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/build

# Include any dependencies generated for this target.
include CMakeFiles/MidTermProject.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/MidTermProject.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/MidTermProject.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MidTermProject.dir/flags.make

CMakeFiles/MidTermProject.dir/main.cpp.o: CMakeFiles/MidTermProject.dir/flags.make
CMakeFiles/MidTermProject.dir/main.cpp.o: ../main.cpp
CMakeFiles/MidTermProject.dir/main.cpp.o: CMakeFiles/MidTermProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MidTermProject.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MidTermProject.dir/main.cpp.o -MF CMakeFiles/MidTermProject.dir/main.cpp.o.d -o CMakeFiles/MidTermProject.dir/main.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/main.cpp

CMakeFiles/MidTermProject.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MidTermProject.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/main.cpp > CMakeFiles/MidTermProject.dir/main.cpp.i

CMakeFiles/MidTermProject.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MidTermProject.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/main.cpp -o CMakeFiles/MidTermProject.dir/main.cpp.s

CMakeFiles/MidTermProject.dir/Cursor.cpp.o: CMakeFiles/MidTermProject.dir/flags.make
CMakeFiles/MidTermProject.dir/Cursor.cpp.o: ../Cursor.cpp
CMakeFiles/MidTermProject.dir/Cursor.cpp.o: CMakeFiles/MidTermProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/MidTermProject.dir/Cursor.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MidTermProject.dir/Cursor.cpp.o -MF CMakeFiles/MidTermProject.dir/Cursor.cpp.o.d -o CMakeFiles/MidTermProject.dir/Cursor.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/Cursor.cpp

CMakeFiles/MidTermProject.dir/Cursor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MidTermProject.dir/Cursor.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/Cursor.cpp > CMakeFiles/MidTermProject.dir/Cursor.cpp.i

CMakeFiles/MidTermProject.dir/Cursor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MidTermProject.dir/Cursor.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/Cursor.cpp -o CMakeFiles/MidTermProject.dir/Cursor.cpp.s

CMakeFiles/MidTermProject.dir/EventHandler.cpp.o: CMakeFiles/MidTermProject.dir/flags.make
CMakeFiles/MidTermProject.dir/EventHandler.cpp.o: ../EventHandler.cpp
CMakeFiles/MidTermProject.dir/EventHandler.cpp.o: CMakeFiles/MidTermProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/MidTermProject.dir/EventHandler.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MidTermProject.dir/EventHandler.cpp.o -MF CMakeFiles/MidTermProject.dir/EventHandler.cpp.o.d -o CMakeFiles/MidTermProject.dir/EventHandler.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/EventHandler.cpp

CMakeFiles/MidTermProject.dir/EventHandler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MidTermProject.dir/EventHandler.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/EventHandler.cpp > CMakeFiles/MidTermProject.dir/EventHandler.cpp.i

CMakeFiles/MidTermProject.dir/EventHandler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MidTermProject.dir/EventHandler.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/EventHandler.cpp -o CMakeFiles/MidTermProject.dir/EventHandler.cpp.s

CMakeFiles/MidTermProject.dir/guiComponent.cpp.o: CMakeFiles/MidTermProject.dir/flags.make
CMakeFiles/MidTermProject.dir/guiComponent.cpp.o: ../guiComponent.cpp
CMakeFiles/MidTermProject.dir/guiComponent.cpp.o: CMakeFiles/MidTermProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/MidTermProject.dir/guiComponent.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MidTermProject.dir/guiComponent.cpp.o -MF CMakeFiles/MidTermProject.dir/guiComponent.cpp.o.d -o CMakeFiles/MidTermProject.dir/guiComponent.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/guiComponent.cpp

CMakeFiles/MidTermProject.dir/guiComponent.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MidTermProject.dir/guiComponent.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/guiComponent.cpp > CMakeFiles/MidTermProject.dir/guiComponent.cpp.i

CMakeFiles/MidTermProject.dir/guiComponent.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MidTermProject.dir/guiComponent.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/guiComponent.cpp -o CMakeFiles/MidTermProject.dir/guiComponent.cpp.s

CMakeFiles/MidTermProject.dir/History.cpp.o: CMakeFiles/MidTermProject.dir/flags.make
CMakeFiles/MidTermProject.dir/History.cpp.o: ../History.cpp
CMakeFiles/MidTermProject.dir/History.cpp.o: CMakeFiles/MidTermProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/MidTermProject.dir/History.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MidTermProject.dir/History.cpp.o -MF CMakeFiles/MidTermProject.dir/History.cpp.o.d -o CMakeFiles/MidTermProject.dir/History.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/History.cpp

CMakeFiles/MidTermProject.dir/History.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MidTermProject.dir/History.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/History.cpp > CMakeFiles/MidTermProject.dir/History.cpp.i

CMakeFiles/MidTermProject.dir/History.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MidTermProject.dir/History.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/History.cpp -o CMakeFiles/MidTermProject.dir/History.cpp.s

CMakeFiles/MidTermProject.dir/KeyBoardShortCuts.cpp.o: CMakeFiles/MidTermProject.dir/flags.make
CMakeFiles/MidTermProject.dir/KeyBoardShortCuts.cpp.o: ../KeyBoardShortCuts.cpp
CMakeFiles/MidTermProject.dir/KeyBoardShortCuts.cpp.o: CMakeFiles/MidTermProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/MidTermProject.dir/KeyBoardShortCuts.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MidTermProject.dir/KeyBoardShortCuts.cpp.o -MF CMakeFiles/MidTermProject.dir/KeyBoardShortCuts.cpp.o.d -o CMakeFiles/MidTermProject.dir/KeyBoardShortCuts.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/KeyBoardShortCuts.cpp

CMakeFiles/MidTermProject.dir/KeyBoardShortCuts.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MidTermProject.dir/KeyBoardShortCuts.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/KeyBoardShortCuts.cpp > CMakeFiles/MidTermProject.dir/KeyBoardShortCuts.cpp.i

CMakeFiles/MidTermProject.dir/KeyBoardShortCuts.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MidTermProject.dir/KeyBoardShortCuts.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/KeyBoardShortCuts.cpp -o CMakeFiles/MidTermProject.dir/KeyBoardShortCuts.cpp.s

CMakeFiles/MidTermProject.dir/MouseEvent.cpp.o: CMakeFiles/MidTermProject.dir/flags.make
CMakeFiles/MidTermProject.dir/MouseEvent.cpp.o: ../MouseEvent.cpp
CMakeFiles/MidTermProject.dir/MouseEvent.cpp.o: CMakeFiles/MidTermProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/MidTermProject.dir/MouseEvent.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MidTermProject.dir/MouseEvent.cpp.o -MF CMakeFiles/MidTermProject.dir/MouseEvent.cpp.o.d -o CMakeFiles/MidTermProject.dir/MouseEvent.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/MouseEvent.cpp

CMakeFiles/MidTermProject.dir/MouseEvent.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MidTermProject.dir/MouseEvent.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/MouseEvent.cpp > CMakeFiles/MidTermProject.dir/MouseEvent.cpp.i

CMakeFiles/MidTermProject.dir/MouseEvent.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MidTermProject.dir/MouseEvent.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/MouseEvent.cpp -o CMakeFiles/MidTermProject.dir/MouseEvent.cpp.s

CMakeFiles/MidTermProject.dir/Snapshot.cpp.o: CMakeFiles/MidTermProject.dir/flags.make
CMakeFiles/MidTermProject.dir/Snapshot.cpp.o: ../Snapshot.cpp
CMakeFiles/MidTermProject.dir/Snapshot.cpp.o: CMakeFiles/MidTermProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/MidTermProject.dir/Snapshot.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MidTermProject.dir/Snapshot.cpp.o -MF CMakeFiles/MidTermProject.dir/Snapshot.cpp.o.d -o CMakeFiles/MidTermProject.dir/Snapshot.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/Snapshot.cpp

CMakeFiles/MidTermProject.dir/Snapshot.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MidTermProject.dir/Snapshot.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/Snapshot.cpp > CMakeFiles/MidTermProject.dir/Snapshot.cpp.i

CMakeFiles/MidTermProject.dir/Snapshot.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MidTermProject.dir/Snapshot.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/Snapshot.cpp -o CMakeFiles/MidTermProject.dir/Snapshot.cpp.s

CMakeFiles/MidTermProject.dir/SnapshotInterface.cpp.o: CMakeFiles/MidTermProject.dir/flags.make
CMakeFiles/MidTermProject.dir/SnapshotInterface.cpp.o: ../SnapshotInterface.cpp
CMakeFiles/MidTermProject.dir/SnapshotInterface.cpp.o: CMakeFiles/MidTermProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/MidTermProject.dir/SnapshotInterface.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MidTermProject.dir/SnapshotInterface.cpp.o -MF CMakeFiles/MidTermProject.dir/SnapshotInterface.cpp.o.d -o CMakeFiles/MidTermProject.dir/SnapshotInterface.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/SnapshotInterface.cpp

CMakeFiles/MidTermProject.dir/SnapshotInterface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MidTermProject.dir/SnapshotInterface.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/SnapshotInterface.cpp > CMakeFiles/MidTermProject.dir/SnapshotInterface.cpp.i

CMakeFiles/MidTermProject.dir/SnapshotInterface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MidTermProject.dir/SnapshotInterface.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/SnapshotInterface.cpp -o CMakeFiles/MidTermProject.dir/SnapshotInterface.cpp.s

CMakeFiles/MidTermProject.dir/States.cpp.o: CMakeFiles/MidTermProject.dir/flags.make
CMakeFiles/MidTermProject.dir/States.cpp.o: ../States.cpp
CMakeFiles/MidTermProject.dir/States.cpp.o: CMakeFiles/MidTermProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/MidTermProject.dir/States.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MidTermProject.dir/States.cpp.o -MF CMakeFiles/MidTermProject.dir/States.cpp.o.d -o CMakeFiles/MidTermProject.dir/States.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/States.cpp

CMakeFiles/MidTermProject.dir/States.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MidTermProject.dir/States.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/States.cpp > CMakeFiles/MidTermProject.dir/States.cpp.i

CMakeFiles/MidTermProject.dir/States.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MidTermProject.dir/States.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/States.cpp -o CMakeFiles/MidTermProject.dir/States.cpp.s

CMakeFiles/MidTermProject.dir/TextBox.cpp.o: CMakeFiles/MidTermProject.dir/flags.make
CMakeFiles/MidTermProject.dir/TextBox.cpp.o: ../TextBox.cpp
CMakeFiles/MidTermProject.dir/TextBox.cpp.o: CMakeFiles/MidTermProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/MidTermProject.dir/TextBox.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MidTermProject.dir/TextBox.cpp.o -MF CMakeFiles/MidTermProject.dir/TextBox.cpp.o.d -o CMakeFiles/MidTermProject.dir/TextBox.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/TextBox.cpp

CMakeFiles/MidTermProject.dir/TextBox.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MidTermProject.dir/TextBox.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/TextBox.cpp > CMakeFiles/MidTermProject.dir/TextBox.cpp.i

CMakeFiles/MidTermProject.dir/TextBox.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MidTermProject.dir/TextBox.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/TextBox.cpp -o CMakeFiles/MidTermProject.dir/TextBox.cpp.s

CMakeFiles/MidTermProject.dir/TextBoxLabel.cpp.o: CMakeFiles/MidTermProject.dir/flags.make
CMakeFiles/MidTermProject.dir/TextBoxLabel.cpp.o: ../TextBoxLabel.cpp
CMakeFiles/MidTermProject.dir/TextBoxLabel.cpp.o: CMakeFiles/MidTermProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/MidTermProject.dir/TextBoxLabel.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MidTermProject.dir/TextBoxLabel.cpp.o -MF CMakeFiles/MidTermProject.dir/TextBoxLabel.cpp.o.d -o CMakeFiles/MidTermProject.dir/TextBoxLabel.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/TextBoxLabel.cpp

CMakeFiles/MidTermProject.dir/TextBoxLabel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MidTermProject.dir/TextBoxLabel.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/TextBoxLabel.cpp > CMakeFiles/MidTermProject.dir/TextBoxLabel.cpp.i

CMakeFiles/MidTermProject.dir/TextBoxLabel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MidTermProject.dir/TextBoxLabel.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/TextBoxLabel.cpp -o CMakeFiles/MidTermProject.dir/TextBoxLabel.cpp.s

CMakeFiles/MidTermProject.dir/TextInput.cpp.o: CMakeFiles/MidTermProject.dir/flags.make
CMakeFiles/MidTermProject.dir/TextInput.cpp.o: ../TextInput.cpp
CMakeFiles/MidTermProject.dir/TextInput.cpp.o: CMakeFiles/MidTermProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/MidTermProject.dir/TextInput.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MidTermProject.dir/TextInput.cpp.o -MF CMakeFiles/MidTermProject.dir/TextInput.cpp.o.d -o CMakeFiles/MidTermProject.dir/TextInput.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/TextInput.cpp

CMakeFiles/MidTermProject.dir/TextInput.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MidTermProject.dir/TextInput.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/TextInput.cpp > CMakeFiles/MidTermProject.dir/TextInput.cpp.i

CMakeFiles/MidTermProject.dir/TextInput.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MidTermProject.dir/TextInput.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/TextInput.cpp -o CMakeFiles/MidTermProject.dir/TextInput.cpp.s

CMakeFiles/MidTermProject.dir/Typing.cpp.o: CMakeFiles/MidTermProject.dir/flags.make
CMakeFiles/MidTermProject.dir/Typing.cpp.o: ../Typing.cpp
CMakeFiles/MidTermProject.dir/Typing.cpp.o: CMakeFiles/MidTermProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/MidTermProject.dir/Typing.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MidTermProject.dir/Typing.cpp.o -MF CMakeFiles/MidTermProject.dir/Typing.cpp.o.d -o CMakeFiles/MidTermProject.dir/Typing.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/Typing.cpp

CMakeFiles/MidTermProject.dir/Typing.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MidTermProject.dir/Typing.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/Typing.cpp > CMakeFiles/MidTermProject.dir/Typing.cpp.i

CMakeFiles/MidTermProject.dir/Typing.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MidTermProject.dir/Typing.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/Typing.cpp -o CMakeFiles/MidTermProject.dir/Typing.cpp.s

# Object files for target MidTermProject
MidTermProject_OBJECTS = \
"CMakeFiles/MidTermProject.dir/main.cpp.o" \
"CMakeFiles/MidTermProject.dir/Cursor.cpp.o" \
"CMakeFiles/MidTermProject.dir/EventHandler.cpp.o" \
"CMakeFiles/MidTermProject.dir/guiComponent.cpp.o" \
"CMakeFiles/MidTermProject.dir/History.cpp.o" \
"CMakeFiles/MidTermProject.dir/KeyBoardShortCuts.cpp.o" \
"CMakeFiles/MidTermProject.dir/MouseEvent.cpp.o" \
"CMakeFiles/MidTermProject.dir/Snapshot.cpp.o" \
"CMakeFiles/MidTermProject.dir/SnapshotInterface.cpp.o" \
"CMakeFiles/MidTermProject.dir/States.cpp.o" \
"CMakeFiles/MidTermProject.dir/TextBox.cpp.o" \
"CMakeFiles/MidTermProject.dir/TextBoxLabel.cpp.o" \
"CMakeFiles/MidTermProject.dir/TextInput.cpp.o" \
"CMakeFiles/MidTermProject.dir/Typing.cpp.o"

# External object files for target MidTermProject
MidTermProject_EXTERNAL_OBJECTS =

MidTermProject: CMakeFiles/MidTermProject.dir/main.cpp.o
MidTermProject: CMakeFiles/MidTermProject.dir/Cursor.cpp.o
MidTermProject: CMakeFiles/MidTermProject.dir/EventHandler.cpp.o
MidTermProject: CMakeFiles/MidTermProject.dir/guiComponent.cpp.o
MidTermProject: CMakeFiles/MidTermProject.dir/History.cpp.o
MidTermProject: CMakeFiles/MidTermProject.dir/KeyBoardShortCuts.cpp.o
MidTermProject: CMakeFiles/MidTermProject.dir/MouseEvent.cpp.o
MidTermProject: CMakeFiles/MidTermProject.dir/Snapshot.cpp.o
MidTermProject: CMakeFiles/MidTermProject.dir/SnapshotInterface.cpp.o
MidTermProject: CMakeFiles/MidTermProject.dir/States.cpp.o
MidTermProject: CMakeFiles/MidTermProject.dir/TextBox.cpp.o
MidTermProject: CMakeFiles/MidTermProject.dir/TextBoxLabel.cpp.o
MidTermProject: CMakeFiles/MidTermProject.dir/TextInput.cpp.o
MidTermProject: CMakeFiles/MidTermProject.dir/Typing.cpp.o
MidTermProject: CMakeFiles/MidTermProject.dir/build.make
MidTermProject: /opt/homebrew/lib/libsfml-graphics.2.5.1.dylib
MidTermProject: /opt/homebrew/lib/libsfml-audio.2.5.1.dylib
MidTermProject: /opt/homebrew/lib/libsfml-window.2.5.1.dylib
MidTermProject: /opt/homebrew/lib/libsfml-system.2.5.1.dylib
MidTermProject: CMakeFiles/MidTermProject.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Linking CXX executable MidTermProject"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MidTermProject.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MidTermProject.dir/build: MidTermProject
.PHONY : CMakeFiles/MidTermProject.dir/build

CMakeFiles/MidTermProject.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MidTermProject.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MidTermProject.dir/clean

CMakeFiles/MidTermProject.dir/depend:
	cd /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/build /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/build /Users/qcl/pcc/spring2021/SFML/Project/MidTermProject/build/CMakeFiles/MidTermProject.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MidTermProject.dir/depend

