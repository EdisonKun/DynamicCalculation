# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kun/catkin_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kun/catkin_ws/debug

# Include any dependencies generated for this target.
include single_leg_test/CMakeFiles/testa.dir/depend.make

# Include the progress variables for this target.
include single_leg_test/CMakeFiles/testa.dir/progress.make

# Include the compile flags for this target's objects.
include single_leg_test/CMakeFiles/testa.dir/flags.make

single_leg_test/CMakeFiles/testa.dir/test/test.cpp.o: single_leg_test/CMakeFiles/testa.dir/flags.make
single_leg_test/CMakeFiles/testa.dir/test/test.cpp.o: /home/kun/catkin_ws/src/single_leg_test/test/test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kun/catkin_ws/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object single_leg_test/CMakeFiles/testa.dir/test/test.cpp.o"
	cd /home/kun/catkin_ws/debug/single_leg_test && /usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/testa.dir/test/test.cpp.o -c /home/kun/catkin_ws/src/single_leg_test/test/test.cpp

single_leg_test/CMakeFiles/testa.dir/test/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testa.dir/test/test.cpp.i"
	cd /home/kun/catkin_ws/debug/single_leg_test && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kun/catkin_ws/src/single_leg_test/test/test.cpp > CMakeFiles/testa.dir/test/test.cpp.i

single_leg_test/CMakeFiles/testa.dir/test/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testa.dir/test/test.cpp.s"
	cd /home/kun/catkin_ws/debug/single_leg_test && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kun/catkin_ws/src/single_leg_test/test/test.cpp -o CMakeFiles/testa.dir/test/test.cpp.s

single_leg_test/CMakeFiles/testa.dir/test/test.cpp.o.requires:

.PHONY : single_leg_test/CMakeFiles/testa.dir/test/test.cpp.o.requires

single_leg_test/CMakeFiles/testa.dir/test/test.cpp.o.provides: single_leg_test/CMakeFiles/testa.dir/test/test.cpp.o.requires
	$(MAKE) -f single_leg_test/CMakeFiles/testa.dir/build.make single_leg_test/CMakeFiles/testa.dir/test/test.cpp.o.provides.build
.PHONY : single_leg_test/CMakeFiles/testa.dir/test/test.cpp.o.provides

single_leg_test/CMakeFiles/testa.dir/test/test.cpp.o.provides.build: single_leg_test/CMakeFiles/testa.dir/test/test.cpp.o


# Object files for target testa
testa_OBJECTS = \
"CMakeFiles/testa.dir/test/test.cpp.o"

# External object files for target testa
testa_EXTERNAL_OBJECTS =

devel/lib/single_leg_test/testa: single_leg_test/CMakeFiles/testa.dir/test/test.cpp.o
devel/lib/single_leg_test/testa: single_leg_test/CMakeFiles/testa.dir/build.make
devel/lib/single_leg_test/testa: /opt/ros/kinetic/lib/libroscpp.so
devel/lib/single_leg_test/testa: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
devel/lib/single_leg_test/testa: /usr/lib/x86_64-linux-gnu/libboost_signals.so
devel/lib/single_leg_test/testa: /opt/ros/kinetic/lib/librosconsole.so
devel/lib/single_leg_test/testa: /opt/ros/kinetic/lib/librosconsole_log4cxx.so
devel/lib/single_leg_test/testa: /opt/ros/kinetic/lib/librosconsole_backend_interface.so
devel/lib/single_leg_test/testa: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
devel/lib/single_leg_test/testa: /usr/lib/x86_64-linux-gnu/libboost_regex.so
devel/lib/single_leg_test/testa: /opt/ros/kinetic/lib/libxmlrpcpp.so
devel/lib/single_leg_test/testa: /opt/ros/kinetic/lib/libroscpp_serialization.so
devel/lib/single_leg_test/testa: /opt/ros/kinetic/lib/librostime.so
devel/lib/single_leg_test/testa: /opt/ros/kinetic/lib/libcpp_common.so
devel/lib/single_leg_test/testa: /usr/lib/x86_64-linux-gnu/libboost_system.so
devel/lib/single_leg_test/testa: /usr/lib/x86_64-linux-gnu/libboost_thread.so
devel/lib/single_leg_test/testa: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
devel/lib/single_leg_test/testa: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
devel/lib/single_leg_test/testa: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
devel/lib/single_leg_test/testa: /usr/lib/x86_64-linux-gnu/libpthread.so
devel/lib/single_leg_test/testa: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so
devel/lib/single_leg_test/testa: /usr/local/lib/librbdl.so
devel/lib/single_leg_test/testa: single_leg_test/CMakeFiles/testa.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kun/catkin_ws/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../devel/lib/single_leg_test/testa"
	cd /home/kun/catkin_ws/debug/single_leg_test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/testa.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
single_leg_test/CMakeFiles/testa.dir/build: devel/lib/single_leg_test/testa

.PHONY : single_leg_test/CMakeFiles/testa.dir/build

single_leg_test/CMakeFiles/testa.dir/requires: single_leg_test/CMakeFiles/testa.dir/test/test.cpp.o.requires

.PHONY : single_leg_test/CMakeFiles/testa.dir/requires

single_leg_test/CMakeFiles/testa.dir/clean:
	cd /home/kun/catkin_ws/debug/single_leg_test && $(CMAKE_COMMAND) -P CMakeFiles/testa.dir/cmake_clean.cmake
.PHONY : single_leg_test/CMakeFiles/testa.dir/clean

single_leg_test/CMakeFiles/testa.dir/depend:
	cd /home/kun/catkin_ws/debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kun/catkin_ws/src /home/kun/catkin_ws/src/single_leg_test /home/kun/catkin_ws/debug /home/kun/catkin_ws/debug/single_leg_test /home/kun/catkin_ws/debug/single_leg_test/CMakeFiles/testa.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : single_leg_test/CMakeFiles/testa.dir/depend

