# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\HP\CLionProjects\POO\Nacho456

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\HP\CLionProjects\POO\Nacho456\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Nacho456.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Nacho456.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Nacho456.dir/flags.make

CMakeFiles/Nacho456.dir/main.cpp.obj: CMakeFiles/Nacho456.dir/flags.make
CMakeFiles/Nacho456.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\HP\CLionProjects\POO\Nacho456\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Nacho456.dir/main.cpp.obj"
	D:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Nacho456.dir\main.cpp.obj -c C:\Users\HP\CLionProjects\POO\Nacho456\main.cpp

CMakeFiles/Nacho456.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Nacho456.dir/main.cpp.i"
	D:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\HP\CLionProjects\POO\Nacho456\main.cpp > CMakeFiles\Nacho456.dir\main.cpp.i

CMakeFiles/Nacho456.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Nacho456.dir/main.cpp.s"
	D:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\HP\CLionProjects\POO\Nacho456\main.cpp -o CMakeFiles\Nacho456.dir\main.cpp.s

# Object files for target Nacho456
Nacho456_OBJECTS = \
"CMakeFiles/Nacho456.dir/main.cpp.obj"

# External object files for target Nacho456
Nacho456_EXTERNAL_OBJECTS =

Nacho456.exe: CMakeFiles/Nacho456.dir/main.cpp.obj
Nacho456.exe: CMakeFiles/Nacho456.dir/build.make
Nacho456.exe: CMakeFiles/Nacho456.dir/linklibs.rsp
Nacho456.exe: CMakeFiles/Nacho456.dir/objects1.rsp
Nacho456.exe: CMakeFiles/Nacho456.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\HP\CLionProjects\POO\Nacho456\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Nacho456.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Nacho456.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Nacho456.dir/build: Nacho456.exe

.PHONY : CMakeFiles/Nacho456.dir/build

CMakeFiles/Nacho456.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Nacho456.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Nacho456.dir/clean

CMakeFiles/Nacho456.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\HP\CLionProjects\POO\Nacho456 C:\Users\HP\CLionProjects\POO\Nacho456 C:\Users\HP\CLionProjects\POO\Nacho456\cmake-build-debug C:\Users\HP\CLionProjects\POO\Nacho456\cmake-build-debug C:\Users\HP\CLionProjects\POO\Nacho456\cmake-build-debug\CMakeFiles\Nacho456.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Nacho456.dir/depend

