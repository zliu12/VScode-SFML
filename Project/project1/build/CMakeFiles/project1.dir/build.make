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
CMAKE_SOURCE_DIR = /Users/qcl/pcc/spring2021/SFML/Project/project1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/qcl/pcc/spring2021/SFML/Project/project1/build

# Include any dependencies generated for this target.
include CMakeFiles/project1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/project1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/project1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/project1.dir/flags.make

CMakeFiles/project1.dir/main.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/main.cpp.o: ../main.cpp
CMakeFiles/project1.dir/main.cpp.o: CMakeFiles/project1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/project1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/project1.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/project1.dir/main.cpp.o -MF CMakeFiles/project1.dir/main.cpp.o.d -o CMakeFiles/project1.dir/main.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/project1/main.cpp

CMakeFiles/project1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/project1/main.cpp > CMakeFiles/project1.dir/main.cpp.i

CMakeFiles/project1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/project1/main.cpp -o CMakeFiles/project1.dir/main.cpp.s

CMakeFiles/project1.dir/EventHandler.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/EventHandler.cpp.o: ../EventHandler.cpp
CMakeFiles/project1.dir/EventHandler.cpp.o: CMakeFiles/project1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/project1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/project1.dir/EventHandler.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/project1.dir/EventHandler.cpp.o -MF CMakeFiles/project1.dir/EventHandler.cpp.o.d -o CMakeFiles/project1.dir/EventHandler.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/project1/EventHandler.cpp

CMakeFiles/project1.dir/EventHandler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/EventHandler.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/project1/EventHandler.cpp > CMakeFiles/project1.dir/EventHandler.cpp.i

CMakeFiles/project1.dir/EventHandler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/EventHandler.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/project1/EventHandler.cpp -o CMakeFiles/project1.dir/EventHandler.cpp.s

CMakeFiles/project1.dir/States.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/States.cpp.o: ../States.cpp
CMakeFiles/project1.dir/States.cpp.o: CMakeFiles/project1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/project1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/project1.dir/States.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/project1.dir/States.cpp.o -MF CMakeFiles/project1.dir/States.cpp.o.d -o CMakeFiles/project1.dir/States.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/project1/States.cpp

CMakeFiles/project1.dir/States.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/States.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/project1/States.cpp > CMakeFiles/project1.dir/States.cpp.i

CMakeFiles/project1.dir/States.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/States.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/project1/States.cpp -o CMakeFiles/project1.dir/States.cpp.s

CMakeFiles/project1.dir/Snapshot.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/Snapshot.cpp.o: ../Snapshot.cpp
CMakeFiles/project1.dir/Snapshot.cpp.o: CMakeFiles/project1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/project1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/project1.dir/Snapshot.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/project1.dir/Snapshot.cpp.o -MF CMakeFiles/project1.dir/Snapshot.cpp.o.d -o CMakeFiles/project1.dir/Snapshot.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/project1/Snapshot.cpp

CMakeFiles/project1.dir/Snapshot.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/Snapshot.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/project1/Snapshot.cpp > CMakeFiles/project1.dir/Snapshot.cpp.i

CMakeFiles/project1.dir/Snapshot.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/Snapshot.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/project1/Snapshot.cpp -o CMakeFiles/project1.dir/Snapshot.cpp.s

CMakeFiles/project1.dir/SnapshotInterface.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/SnapshotInterface.cpp.o: ../SnapshotInterface.cpp
CMakeFiles/project1.dir/SnapshotInterface.cpp.o: CMakeFiles/project1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/project1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/project1.dir/SnapshotInterface.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/project1.dir/SnapshotInterface.cpp.o -MF CMakeFiles/project1.dir/SnapshotInterface.cpp.o.d -o CMakeFiles/project1.dir/SnapshotInterface.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/project1/SnapshotInterface.cpp

CMakeFiles/project1.dir/SnapshotInterface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/SnapshotInterface.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/project1/SnapshotInterface.cpp > CMakeFiles/project1.dir/SnapshotInterface.cpp.i

CMakeFiles/project1.dir/SnapshotInterface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/SnapshotInterface.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/project1/SnapshotInterface.cpp -o CMakeFiles/project1.dir/SnapshotInterface.cpp.s

CMakeFiles/project1.dir/guiComponent.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/guiComponent.cpp.o: ../guiComponent.cpp
CMakeFiles/project1.dir/guiComponent.cpp.o: CMakeFiles/project1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/project1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/project1.dir/guiComponent.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/project1.dir/guiComponent.cpp.o -MF CMakeFiles/project1.dir/guiComponent.cpp.o.d -o CMakeFiles/project1.dir/guiComponent.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/project1/guiComponent.cpp

CMakeFiles/project1.dir/guiComponent.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/guiComponent.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/project1/guiComponent.cpp > CMakeFiles/project1.dir/guiComponent.cpp.i

CMakeFiles/project1.dir/guiComponent.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/guiComponent.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/project1/guiComponent.cpp -o CMakeFiles/project1.dir/guiComponent.cpp.s

CMakeFiles/project1.dir/KeyBoardShortCuts.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/KeyBoardShortCuts.cpp.o: ../KeyBoardShortCuts.cpp
CMakeFiles/project1.dir/KeyBoardShortCuts.cpp.o: CMakeFiles/project1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/project1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/project1.dir/KeyBoardShortCuts.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/project1.dir/KeyBoardShortCuts.cpp.o -MF CMakeFiles/project1.dir/KeyBoardShortCuts.cpp.o.d -o CMakeFiles/project1.dir/KeyBoardShortCuts.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/project1/KeyBoardShortCuts.cpp

CMakeFiles/project1.dir/KeyBoardShortCuts.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/KeyBoardShortCuts.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/project1/KeyBoardShortCuts.cpp > CMakeFiles/project1.dir/KeyBoardShortCuts.cpp.i

CMakeFiles/project1.dir/KeyBoardShortCuts.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/KeyBoardShortCuts.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/project1/KeyBoardShortCuts.cpp -o CMakeFiles/project1.dir/KeyBoardShortCuts.cpp.s

CMakeFiles/project1.dir/MouseEvent.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/MouseEvent.cpp.o: ../MouseEvent.cpp
CMakeFiles/project1.dir/MouseEvent.cpp.o: CMakeFiles/project1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/project1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/project1.dir/MouseEvent.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/project1.dir/MouseEvent.cpp.o -MF CMakeFiles/project1.dir/MouseEvent.cpp.o.d -o CMakeFiles/project1.dir/MouseEvent.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/project1/MouseEvent.cpp

CMakeFiles/project1.dir/MouseEvent.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/MouseEvent.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/project1/MouseEvent.cpp > CMakeFiles/project1.dir/MouseEvent.cpp.i

CMakeFiles/project1.dir/MouseEvent.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/MouseEvent.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/project1/MouseEvent.cpp -o CMakeFiles/project1.dir/MouseEvent.cpp.s

CMakeFiles/project1.dir/History.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/History.cpp.o: ../History.cpp
CMakeFiles/project1.dir/History.cpp.o: CMakeFiles/project1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/project1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/project1.dir/History.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/project1.dir/History.cpp.o -MF CMakeFiles/project1.dir/History.cpp.o.d -o CMakeFiles/project1.dir/History.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/project1/History.cpp

CMakeFiles/project1.dir/History.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/History.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/project1/History.cpp > CMakeFiles/project1.dir/History.cpp.i

CMakeFiles/project1.dir/History.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/History.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/project1/History.cpp -o CMakeFiles/project1.dir/History.cpp.s

CMakeFiles/project1.dir/TextInput.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/TextInput.cpp.o: ../TextInput.cpp
CMakeFiles/project1.dir/TextInput.cpp.o: CMakeFiles/project1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/project1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/project1.dir/TextInput.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/project1.dir/TextInput.cpp.o -MF CMakeFiles/project1.dir/TextInput.cpp.o.d -o CMakeFiles/project1.dir/TextInput.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/project1/TextInput.cpp

CMakeFiles/project1.dir/TextInput.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/TextInput.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/project1/TextInput.cpp > CMakeFiles/project1.dir/TextInput.cpp.i

CMakeFiles/project1.dir/TextInput.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/TextInput.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/project1/TextInput.cpp -o CMakeFiles/project1.dir/TextInput.cpp.s

CMakeFiles/project1.dir/TextBoxLabel.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/TextBoxLabel.cpp.o: ../TextBoxLabel.cpp
CMakeFiles/project1.dir/TextBoxLabel.cpp.o: CMakeFiles/project1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/project1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/project1.dir/TextBoxLabel.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/project1.dir/TextBoxLabel.cpp.o -MF CMakeFiles/project1.dir/TextBoxLabel.cpp.o.d -o CMakeFiles/project1.dir/TextBoxLabel.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/project1/TextBoxLabel.cpp

CMakeFiles/project1.dir/TextBoxLabel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/TextBoxLabel.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/project1/TextBoxLabel.cpp > CMakeFiles/project1.dir/TextBoxLabel.cpp.i

CMakeFiles/project1.dir/TextBoxLabel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/TextBoxLabel.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/project1/TextBoxLabel.cpp -o CMakeFiles/project1.dir/TextBoxLabel.cpp.s

CMakeFiles/project1.dir/TextBox.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/TextBox.cpp.o: ../TextBox.cpp
CMakeFiles/project1.dir/TextBox.cpp.o: CMakeFiles/project1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/project1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/project1.dir/TextBox.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/project1.dir/TextBox.cpp.o -MF CMakeFiles/project1.dir/TextBox.cpp.o.d -o CMakeFiles/project1.dir/TextBox.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/project1/TextBox.cpp

CMakeFiles/project1.dir/TextBox.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/TextBox.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/project1/TextBox.cpp > CMakeFiles/project1.dir/TextBox.cpp.i

CMakeFiles/project1.dir/TextBox.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/TextBox.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/project1/TextBox.cpp -o CMakeFiles/project1.dir/TextBox.cpp.s

CMakeFiles/project1.dir/Cursor.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/Cursor.cpp.o: ../Cursor.cpp
CMakeFiles/project1.dir/Cursor.cpp.o: CMakeFiles/project1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/project1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/project1.dir/Cursor.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/project1.dir/Cursor.cpp.o -MF CMakeFiles/project1.dir/Cursor.cpp.o.d -o CMakeFiles/project1.dir/Cursor.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/project1/Cursor.cpp

CMakeFiles/project1.dir/Cursor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/Cursor.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/project1/Cursor.cpp > CMakeFiles/project1.dir/Cursor.cpp.i

CMakeFiles/project1.dir/Cursor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/Cursor.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/project1/Cursor.cpp -o CMakeFiles/project1.dir/Cursor.cpp.s

CMakeFiles/project1.dir/Typing.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/Typing.cpp.o: ../Typing.cpp
CMakeFiles/project1.dir/Typing.cpp.o: CMakeFiles/project1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/project1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/project1.dir/Typing.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/project1.dir/Typing.cpp.o -MF CMakeFiles/project1.dir/Typing.cpp.o.d -o CMakeFiles/project1.dir/Typing.cpp.o -c /Users/qcl/pcc/spring2021/SFML/Project/project1/Typing.cpp

CMakeFiles/project1.dir/Typing.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/Typing.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qcl/pcc/spring2021/SFML/Project/project1/Typing.cpp > CMakeFiles/project1.dir/Typing.cpp.i

CMakeFiles/project1.dir/Typing.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/Typing.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qcl/pcc/spring2021/SFML/Project/project1/Typing.cpp -o CMakeFiles/project1.dir/Typing.cpp.s

# Object files for target project1
project1_OBJECTS = \
"CMakeFiles/project1.dir/main.cpp.o" \
"CMakeFiles/project1.dir/EventHandler.cpp.o" \
"CMakeFiles/project1.dir/States.cpp.o" \
"CMakeFiles/project1.dir/Snapshot.cpp.o" \
"CMakeFiles/project1.dir/SnapshotInterface.cpp.o" \
"CMakeFiles/project1.dir/guiComponent.cpp.o" \
"CMakeFiles/project1.dir/KeyBoardShortCuts.cpp.o" \
"CMakeFiles/project1.dir/MouseEvent.cpp.o" \
"CMakeFiles/project1.dir/History.cpp.o" \
"CMakeFiles/project1.dir/TextInput.cpp.o" \
"CMakeFiles/project1.dir/TextBoxLabel.cpp.o" \
"CMakeFiles/project1.dir/TextBox.cpp.o" \
"CMakeFiles/project1.dir/Cursor.cpp.o" \
"CMakeFiles/project1.dir/Typing.cpp.o"

# External object files for target project1
project1_EXTERNAL_OBJECTS =

project1: CMakeFiles/project1.dir/main.cpp.o
project1: CMakeFiles/project1.dir/EventHandler.cpp.o
project1: CMakeFiles/project1.dir/States.cpp.o
project1: CMakeFiles/project1.dir/Snapshot.cpp.o
project1: CMakeFiles/project1.dir/SnapshotInterface.cpp.o
project1: CMakeFiles/project1.dir/guiComponent.cpp.o
project1: CMakeFiles/project1.dir/KeyBoardShortCuts.cpp.o
project1: CMakeFiles/project1.dir/MouseEvent.cpp.o
project1: CMakeFiles/project1.dir/History.cpp.o
project1: CMakeFiles/project1.dir/TextInput.cpp.o
project1: CMakeFiles/project1.dir/TextBoxLabel.cpp.o
project1: CMakeFiles/project1.dir/TextBox.cpp.o
project1: CMakeFiles/project1.dir/Cursor.cpp.o
project1: CMakeFiles/project1.dir/Typing.cpp.o
project1: CMakeFiles/project1.dir/build.make
project1: /opt/homebrew/lib/libsfml-graphics.2.5.1.dylib
project1: /opt/homebrew/lib/libsfml-audio.2.5.1.dylib
project1: /opt/homebrew/lib/libsfml-window.2.5.1.dylib
project1: /opt/homebrew/lib/libsfml-system.2.5.1.dylib
project1: CMakeFiles/project1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/qcl/pcc/spring2021/SFML/Project/project1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Linking CXX executable project1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/project1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/project1.dir/build: project1
.PHONY : CMakeFiles/project1.dir/build

CMakeFiles/project1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/project1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/project1.dir/clean

CMakeFiles/project1.dir/depend:
	cd /Users/qcl/pcc/spring2021/SFML/Project/project1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/qcl/pcc/spring2021/SFML/Project/project1 /Users/qcl/pcc/spring2021/SFML/Project/project1 /Users/qcl/pcc/spring2021/SFML/Project/project1/build /Users/qcl/pcc/spring2021/SFML/Project/project1/build /Users/qcl/pcc/spring2021/SFML/Project/project1/build/CMakeFiles/project1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/project1.dir/depend

