# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.30.4/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.30.4/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/jannis/Desktop/Game

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/jannis/Desktop/Game/build

# Include any dependencies generated for this target.
include CMakeFiles/Game.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Game.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Game.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Game.dir/flags.make

CMakeFiles/Game.dir/src/main.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/src/main.cpp.o: /Users/jannis/Desktop/Game/src/main.cpp
CMakeFiles/Game.dir/src/main.cpp.o: CMakeFiles/Game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jannis/Desktop/Game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Game.dir/src/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Game.dir/src/main.cpp.o -MF CMakeFiles/Game.dir/src/main.cpp.o.d -o CMakeFiles/Game.dir/src/main.cpp.o -c /Users/jannis/Desktop/Game/src/main.cpp

CMakeFiles/Game.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Game.dir/src/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jannis/Desktop/Game/src/main.cpp > CMakeFiles/Game.dir/src/main.cpp.i

CMakeFiles/Game.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Game.dir/src/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jannis/Desktop/Game/src/main.cpp -o CMakeFiles/Game.dir/src/main.cpp.s

CMakeFiles/Game.dir/src/Character.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/src/Character.cpp.o: /Users/jannis/Desktop/Game/src/Character.cpp
CMakeFiles/Game.dir/src/Character.cpp.o: CMakeFiles/Game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jannis/Desktop/Game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Game.dir/src/Character.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Game.dir/src/Character.cpp.o -MF CMakeFiles/Game.dir/src/Character.cpp.o.d -o CMakeFiles/Game.dir/src/Character.cpp.o -c /Users/jannis/Desktop/Game/src/Character.cpp

CMakeFiles/Game.dir/src/Character.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Game.dir/src/Character.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jannis/Desktop/Game/src/Character.cpp > CMakeFiles/Game.dir/src/Character.cpp.i

CMakeFiles/Game.dir/src/Character.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Game.dir/src/Character.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jannis/Desktop/Game/src/Character.cpp -o CMakeFiles/Game.dir/src/Character.cpp.s

CMakeFiles/Game.dir/src/CharacterManager.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/src/CharacterManager.cpp.o: /Users/jannis/Desktop/Game/src/CharacterManager.cpp
CMakeFiles/Game.dir/src/CharacterManager.cpp.o: CMakeFiles/Game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jannis/Desktop/Game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Game.dir/src/CharacterManager.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Game.dir/src/CharacterManager.cpp.o -MF CMakeFiles/Game.dir/src/CharacterManager.cpp.o.d -o CMakeFiles/Game.dir/src/CharacterManager.cpp.o -c /Users/jannis/Desktop/Game/src/CharacterManager.cpp

CMakeFiles/Game.dir/src/CharacterManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Game.dir/src/CharacterManager.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jannis/Desktop/Game/src/CharacterManager.cpp > CMakeFiles/Game.dir/src/CharacterManager.cpp.i

CMakeFiles/Game.dir/src/CharacterManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Game.dir/src/CharacterManager.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jannis/Desktop/Game/src/CharacterManager.cpp -o CMakeFiles/Game.dir/src/CharacterManager.cpp.s

CMakeFiles/Game.dir/src/Stats.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/src/Stats.cpp.o: /Users/jannis/Desktop/Game/src/Stats.cpp
CMakeFiles/Game.dir/src/Stats.cpp.o: CMakeFiles/Game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jannis/Desktop/Game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Game.dir/src/Stats.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Game.dir/src/Stats.cpp.o -MF CMakeFiles/Game.dir/src/Stats.cpp.o.d -o CMakeFiles/Game.dir/src/Stats.cpp.o -c /Users/jannis/Desktop/Game/src/Stats.cpp

CMakeFiles/Game.dir/src/Stats.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Game.dir/src/Stats.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jannis/Desktop/Game/src/Stats.cpp > CMakeFiles/Game.dir/src/Stats.cpp.i

CMakeFiles/Game.dir/src/Stats.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Game.dir/src/Stats.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jannis/Desktop/Game/src/Stats.cpp -o CMakeFiles/Game.dir/src/Stats.cpp.s

# Object files for target Game
Game_OBJECTS = \
"CMakeFiles/Game.dir/src/main.cpp.o" \
"CMakeFiles/Game.dir/src/Character.cpp.o" \
"CMakeFiles/Game.dir/src/CharacterManager.cpp.o" \
"CMakeFiles/Game.dir/src/Stats.cpp.o"

# External object files for target Game
Game_EXTERNAL_OBJECTS =

Game: CMakeFiles/Game.dir/src/main.cpp.o
Game: CMakeFiles/Game.dir/src/Character.cpp.o
Game: CMakeFiles/Game.dir/src/CharacterManager.cpp.o
Game: CMakeFiles/Game.dir/src/Stats.cpp.o
Game: CMakeFiles/Game.dir/build.make
Game: CMakeFiles/Game.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/jannis/Desktop/Game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable Game"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Game.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Game.dir/build: Game
.PHONY : CMakeFiles/Game.dir/build

CMakeFiles/Game.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Game.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Game.dir/clean

CMakeFiles/Game.dir/depend:
	cd /Users/jannis/Desktop/Game/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jannis/Desktop/Game /Users/jannis/Desktop/Game /Users/jannis/Desktop/Game/build /Users/jannis/Desktop/Game/build /Users/jannis/Desktop/Game/build/CMakeFiles/Game.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Game.dir/depend

