# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/Kainoa/ClionProjects/ClosestPoint

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Kainoa/ClionProjects/ClosestPoint/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ClosestPoint.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ClosestPoint.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ClosestPoint.dir/flags.make

CMakeFiles/ClosestPoint.dir/main.cpp.o: CMakeFiles/ClosestPoint.dir/flags.make
CMakeFiles/ClosestPoint.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Kainoa/ClionProjects/ClosestPoint/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ClosestPoint.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ClosestPoint.dir/main.cpp.o -c /Users/Kainoa/ClionProjects/ClosestPoint/main.cpp

CMakeFiles/ClosestPoint.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ClosestPoint.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Kainoa/ClionProjects/ClosestPoint/main.cpp > CMakeFiles/ClosestPoint.dir/main.cpp.i

CMakeFiles/ClosestPoint.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ClosestPoint.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Kainoa/ClionProjects/ClosestPoint/main.cpp -o CMakeFiles/ClosestPoint.dir/main.cpp.s

CMakeFiles/ClosestPoint.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/ClosestPoint.dir/main.cpp.o.requires

CMakeFiles/ClosestPoint.dir/main.cpp.o.provides: CMakeFiles/ClosestPoint.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/ClosestPoint.dir/build.make CMakeFiles/ClosestPoint.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/ClosestPoint.dir/main.cpp.o.provides

CMakeFiles/ClosestPoint.dir/main.cpp.o.provides.build: CMakeFiles/ClosestPoint.dir/main.cpp.o


CMakeFiles/ClosestPoint.dir/Algo/ClosestPointsAlgo.cpp.o: CMakeFiles/ClosestPoint.dir/flags.make
CMakeFiles/ClosestPoint.dir/Algo/ClosestPointsAlgo.cpp.o: ../Algo/ClosestPointsAlgo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Kainoa/ClionProjects/ClosestPoint/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ClosestPoint.dir/Algo/ClosestPointsAlgo.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ClosestPoint.dir/Algo/ClosestPointsAlgo.cpp.o -c /Users/Kainoa/ClionProjects/ClosestPoint/Algo/ClosestPointsAlgo.cpp

CMakeFiles/ClosestPoint.dir/Algo/ClosestPointsAlgo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ClosestPoint.dir/Algo/ClosestPointsAlgo.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Kainoa/ClionProjects/ClosestPoint/Algo/ClosestPointsAlgo.cpp > CMakeFiles/ClosestPoint.dir/Algo/ClosestPointsAlgo.cpp.i

CMakeFiles/ClosestPoint.dir/Algo/ClosestPointsAlgo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ClosestPoint.dir/Algo/ClosestPointsAlgo.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Kainoa/ClionProjects/ClosestPoint/Algo/ClosestPointsAlgo.cpp -o CMakeFiles/ClosestPoint.dir/Algo/ClosestPointsAlgo.cpp.s

CMakeFiles/ClosestPoint.dir/Algo/ClosestPointsAlgo.cpp.o.requires:

.PHONY : CMakeFiles/ClosestPoint.dir/Algo/ClosestPointsAlgo.cpp.o.requires

CMakeFiles/ClosestPoint.dir/Algo/ClosestPointsAlgo.cpp.o.provides: CMakeFiles/ClosestPoint.dir/Algo/ClosestPointsAlgo.cpp.o.requires
	$(MAKE) -f CMakeFiles/ClosestPoint.dir/build.make CMakeFiles/ClosestPoint.dir/Algo/ClosestPointsAlgo.cpp.o.provides.build
.PHONY : CMakeFiles/ClosestPoint.dir/Algo/ClosestPointsAlgo.cpp.o.provides

CMakeFiles/ClosestPoint.dir/Algo/ClosestPointsAlgo.cpp.o.provides.build: CMakeFiles/ClosestPoint.dir/Algo/ClosestPointsAlgo.cpp.o


CMakeFiles/ClosestPoint.dir/Algo/DivideAndConquer.cpp.o: CMakeFiles/ClosestPoint.dir/flags.make
CMakeFiles/ClosestPoint.dir/Algo/DivideAndConquer.cpp.o: ../Algo/DivideAndConquer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Kainoa/ClionProjects/ClosestPoint/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ClosestPoint.dir/Algo/DivideAndConquer.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ClosestPoint.dir/Algo/DivideAndConquer.cpp.o -c /Users/Kainoa/ClionProjects/ClosestPoint/Algo/DivideAndConquer.cpp

CMakeFiles/ClosestPoint.dir/Algo/DivideAndConquer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ClosestPoint.dir/Algo/DivideAndConquer.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Kainoa/ClionProjects/ClosestPoint/Algo/DivideAndConquer.cpp > CMakeFiles/ClosestPoint.dir/Algo/DivideAndConquer.cpp.i

CMakeFiles/ClosestPoint.dir/Algo/DivideAndConquer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ClosestPoint.dir/Algo/DivideAndConquer.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Kainoa/ClionProjects/ClosestPoint/Algo/DivideAndConquer.cpp -o CMakeFiles/ClosestPoint.dir/Algo/DivideAndConquer.cpp.s

CMakeFiles/ClosestPoint.dir/Algo/DivideAndConquer.cpp.o.requires:

.PHONY : CMakeFiles/ClosestPoint.dir/Algo/DivideAndConquer.cpp.o.requires

CMakeFiles/ClosestPoint.dir/Algo/DivideAndConquer.cpp.o.provides: CMakeFiles/ClosestPoint.dir/Algo/DivideAndConquer.cpp.o.requires
	$(MAKE) -f CMakeFiles/ClosestPoint.dir/build.make CMakeFiles/ClosestPoint.dir/Algo/DivideAndConquer.cpp.o.provides.build
.PHONY : CMakeFiles/ClosestPoint.dir/Algo/DivideAndConquer.cpp.o.provides

CMakeFiles/ClosestPoint.dir/Algo/DivideAndConquer.cpp.o.provides.build: CMakeFiles/ClosestPoint.dir/Algo/DivideAndConquer.cpp.o


CMakeFiles/ClosestPoint.dir/Algo/BruteForce.cpp.o: CMakeFiles/ClosestPoint.dir/flags.make
CMakeFiles/ClosestPoint.dir/Algo/BruteForce.cpp.o: ../Algo/BruteForce.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Kainoa/ClionProjects/ClosestPoint/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ClosestPoint.dir/Algo/BruteForce.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ClosestPoint.dir/Algo/BruteForce.cpp.o -c /Users/Kainoa/ClionProjects/ClosestPoint/Algo/BruteForce.cpp

CMakeFiles/ClosestPoint.dir/Algo/BruteForce.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ClosestPoint.dir/Algo/BruteForce.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Kainoa/ClionProjects/ClosestPoint/Algo/BruteForce.cpp > CMakeFiles/ClosestPoint.dir/Algo/BruteForce.cpp.i

CMakeFiles/ClosestPoint.dir/Algo/BruteForce.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ClosestPoint.dir/Algo/BruteForce.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Kainoa/ClionProjects/ClosestPoint/Algo/BruteForce.cpp -o CMakeFiles/ClosestPoint.dir/Algo/BruteForce.cpp.s

CMakeFiles/ClosestPoint.dir/Algo/BruteForce.cpp.o.requires:

.PHONY : CMakeFiles/ClosestPoint.dir/Algo/BruteForce.cpp.o.requires

CMakeFiles/ClosestPoint.dir/Algo/BruteForce.cpp.o.provides: CMakeFiles/ClosestPoint.dir/Algo/BruteForce.cpp.o.requires
	$(MAKE) -f CMakeFiles/ClosestPoint.dir/build.make CMakeFiles/ClosestPoint.dir/Algo/BruteForce.cpp.o.provides.build
.PHONY : CMakeFiles/ClosestPoint.dir/Algo/BruteForce.cpp.o.provides

CMakeFiles/ClosestPoint.dir/Algo/BruteForce.cpp.o.provides.build: CMakeFiles/ClosestPoint.dir/Algo/BruteForce.cpp.o


# Object files for target ClosestPoint
ClosestPoint_OBJECTS = \
"CMakeFiles/ClosestPoint.dir/main.cpp.o" \
"CMakeFiles/ClosestPoint.dir/Algo/ClosestPointsAlgo.cpp.o" \
"CMakeFiles/ClosestPoint.dir/Algo/DivideAndConquer.cpp.o" \
"CMakeFiles/ClosestPoint.dir/Algo/BruteForce.cpp.o"

# External object files for target ClosestPoint
ClosestPoint_EXTERNAL_OBJECTS =

ClosestPoint: CMakeFiles/ClosestPoint.dir/main.cpp.o
ClosestPoint: CMakeFiles/ClosestPoint.dir/Algo/ClosestPointsAlgo.cpp.o
ClosestPoint: CMakeFiles/ClosestPoint.dir/Algo/DivideAndConquer.cpp.o
ClosestPoint: CMakeFiles/ClosestPoint.dir/Algo/BruteForce.cpp.o
ClosestPoint: CMakeFiles/ClosestPoint.dir/build.make
ClosestPoint: CMakeFiles/ClosestPoint.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Kainoa/ClionProjects/ClosestPoint/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable ClosestPoint"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ClosestPoint.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ClosestPoint.dir/build: ClosestPoint

.PHONY : CMakeFiles/ClosestPoint.dir/build

CMakeFiles/ClosestPoint.dir/requires: CMakeFiles/ClosestPoint.dir/main.cpp.o.requires
CMakeFiles/ClosestPoint.dir/requires: CMakeFiles/ClosestPoint.dir/Algo/ClosestPointsAlgo.cpp.o.requires
CMakeFiles/ClosestPoint.dir/requires: CMakeFiles/ClosestPoint.dir/Algo/DivideAndConquer.cpp.o.requires
CMakeFiles/ClosestPoint.dir/requires: CMakeFiles/ClosestPoint.dir/Algo/BruteForce.cpp.o.requires

.PHONY : CMakeFiles/ClosestPoint.dir/requires

CMakeFiles/ClosestPoint.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ClosestPoint.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ClosestPoint.dir/clean

CMakeFiles/ClosestPoint.dir/depend:
	cd /Users/Kainoa/ClionProjects/ClosestPoint/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Kainoa/ClionProjects/ClosestPoint /Users/Kainoa/ClionProjects/ClosestPoint /Users/Kainoa/ClionProjects/ClosestPoint/cmake-build-debug /Users/Kainoa/ClionProjects/ClosestPoint/cmake-build-debug /Users/Kainoa/ClionProjects/ClosestPoint/cmake-build-debug/CMakeFiles/ClosestPoint.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ClosestPoint.dir/depend

