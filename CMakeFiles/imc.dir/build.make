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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/nikolai/lststools/ho5_imc

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/nikolai/lststools/ho5_imc

# Include any dependencies generated for this target.
include CMakeFiles/imc.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/imc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/imc.dir/flags.make

CMakeFiles/imc.dir/IMC/Base/Factory.cpp.o: CMakeFiles/imc.dir/flags.make
CMakeFiles/imc.dir/IMC/Base/Factory.cpp.o: IMC/Base/Factory.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nikolai/lststools/ho5_imc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/imc.dir/IMC/Base/Factory.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/imc.dir/IMC/Base/Factory.cpp.o -c /home/nikolai/lststools/ho5_imc/IMC/Base/Factory.cpp

CMakeFiles/imc.dir/IMC/Base/Factory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/imc.dir/IMC/Base/Factory.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nikolai/lststools/ho5_imc/IMC/Base/Factory.cpp > CMakeFiles/imc.dir/IMC/Base/Factory.cpp.i

CMakeFiles/imc.dir/IMC/Base/Factory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/imc.dir/IMC/Base/Factory.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nikolai/lststools/ho5_imc/IMC/Base/Factory.cpp -o CMakeFiles/imc.dir/IMC/Base/Factory.cpp.s

# Object files for target imc
imc_OBJECTS = \
"CMakeFiles/imc.dir/IMC/Base/Factory.cpp.o"

# External object files for target imc
imc_EXTERNAL_OBJECTS =

libimc.a: CMakeFiles/imc.dir/IMC/Base/Factory.cpp.o
libimc.a: CMakeFiles/imc.dir/build.make
libimc.a: CMakeFiles/imc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/nikolai/lststools/ho5_imc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libimc.a"
	$(CMAKE_COMMAND) -P CMakeFiles/imc.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/imc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/imc.dir/build: libimc.a

.PHONY : CMakeFiles/imc.dir/build

CMakeFiles/imc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/imc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/imc.dir/clean

CMakeFiles/imc.dir/depend:
	cd /home/nikolai/lststools/ho5_imc && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nikolai/lststools/ho5_imc /home/nikolai/lststools/ho5_imc /home/nikolai/lststools/ho5_imc /home/nikolai/lststools/ho5_imc /home/nikolai/lststools/ho5_imc/CMakeFiles/imc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/imc.dir/depend

