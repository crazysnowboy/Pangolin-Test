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
CMAKE_SOURCE_DIR = /home/snowboy/Documents/MyProject/AAAAAA/3D-face-Reconstruction-based-on-3DMM-ulsTracker-simple

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/snowboy/Documents/MyProject/AAAAAA/3D-face-Reconstruction-based-on-3DMM-ulsTracker-simple/build

# Include any dependencies generated for this target.
include main/CMakeFiles/opengl-test.bin.dir/depend.make

# Include the progress variables for this target.
include main/CMakeFiles/opengl-test.bin.dir/progress.make

# Include the compile flags for this target's objects.
include main/CMakeFiles/opengl-test.bin.dir/flags.make

main/CMakeFiles/opengl-test.bin.dir/opengl-test.cpp.o: main/CMakeFiles/opengl-test.bin.dir/flags.make
main/CMakeFiles/opengl-test.bin.dir/opengl-test.cpp.o: ../main/opengl-test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/snowboy/Documents/MyProject/AAAAAA/3D-face-Reconstruction-based-on-3DMM-ulsTracker-simple/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object main/CMakeFiles/opengl-test.bin.dir/opengl-test.cpp.o"
	cd /home/snowboy/Documents/MyProject/AAAAAA/3D-face-Reconstruction-based-on-3DMM-ulsTracker-simple/build/main && /usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/opengl-test.bin.dir/opengl-test.cpp.o -c /home/snowboy/Documents/MyProject/AAAAAA/3D-face-Reconstruction-based-on-3DMM-ulsTracker-simple/main/opengl-test.cpp

main/CMakeFiles/opengl-test.bin.dir/opengl-test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opengl-test.bin.dir/opengl-test.cpp.i"
	cd /home/snowboy/Documents/MyProject/AAAAAA/3D-face-Reconstruction-based-on-3DMM-ulsTracker-simple/build/main && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/snowboy/Documents/MyProject/AAAAAA/3D-face-Reconstruction-based-on-3DMM-ulsTracker-simple/main/opengl-test.cpp > CMakeFiles/opengl-test.bin.dir/opengl-test.cpp.i

main/CMakeFiles/opengl-test.bin.dir/opengl-test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opengl-test.bin.dir/opengl-test.cpp.s"
	cd /home/snowboy/Documents/MyProject/AAAAAA/3D-face-Reconstruction-based-on-3DMM-ulsTracker-simple/build/main && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/snowboy/Documents/MyProject/AAAAAA/3D-face-Reconstruction-based-on-3DMM-ulsTracker-simple/main/opengl-test.cpp -o CMakeFiles/opengl-test.bin.dir/opengl-test.cpp.s

main/CMakeFiles/opengl-test.bin.dir/opengl-test.cpp.o.requires:

.PHONY : main/CMakeFiles/opengl-test.bin.dir/opengl-test.cpp.o.requires

main/CMakeFiles/opengl-test.bin.dir/opengl-test.cpp.o.provides: main/CMakeFiles/opengl-test.bin.dir/opengl-test.cpp.o.requires
	$(MAKE) -f main/CMakeFiles/opengl-test.bin.dir/build.make main/CMakeFiles/opengl-test.bin.dir/opengl-test.cpp.o.provides.build
.PHONY : main/CMakeFiles/opengl-test.bin.dir/opengl-test.cpp.o.provides

main/CMakeFiles/opengl-test.bin.dir/opengl-test.cpp.o.provides.build: main/CMakeFiles/opengl-test.bin.dir/opengl-test.cpp.o


# Object files for target opengl-test.bin
opengl__test_bin_OBJECTS = \
"CMakeFiles/opengl-test.bin.dir/opengl-test.cpp.o"

# External object files for target opengl-test.bin
opengl__test_bin_EXTERNAL_OBJECTS =

bin/opengl-test.bin: main/CMakeFiles/opengl-test.bin.dir/opengl-test.cpp.o
bin/opengl-test.bin: main/CMakeFiles/opengl-test.bin.dir/build.make
bin/opengl-test.bin: ../lib/libmylib.so
bin/opengl-test.bin: /usr/local/lib/libopencv_calib3d.so
bin/opengl-test.bin: /usr/local/lib/libopencv_contrib.so
bin/opengl-test.bin: /usr/local/lib/libopencv_core.so
bin/opengl-test.bin: /usr/local/lib/libopencv_features2d.so
bin/opengl-test.bin: /usr/local/lib/libopencv_flann.so
bin/opengl-test.bin: /usr/local/lib/libopencv_gpu.so
bin/opengl-test.bin: /usr/local/lib/libopencv_highgui.so
bin/opengl-test.bin: /usr/local/lib/libopencv_imgproc.so
bin/opengl-test.bin: /usr/local/lib/libopencv_legacy.so
bin/opengl-test.bin: /usr/local/lib/libopencv_ml.so
bin/opengl-test.bin: /usr/local/lib/libopencv_nonfree.so
bin/opengl-test.bin: /usr/local/lib/libopencv_objdetect.so
bin/opengl-test.bin: /usr/local/lib/libopencv_ocl.so
bin/opengl-test.bin: /usr/local/lib/libopencv_photo.so
bin/opengl-test.bin: /usr/local/lib/libopencv_stitching.so
bin/opengl-test.bin: /usr/local/lib/libopencv_superres.so
bin/opengl-test.bin: /usr/local/lib/libopencv_ts.a
bin/opengl-test.bin: /usr/local/lib/libopencv_video.so
bin/opengl-test.bin: /usr/local/lib/libopencv_videostab.so
bin/opengl-test.bin: /usr/lib/x86_64-linux-gnu/libboost_system.so
bin/opengl-test.bin: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
bin/opengl-test.bin: /usr/lib/x86_64-linux-gnu/libboost_program_options.so
bin/opengl-test.bin: /usr/local/lib/libpangolin.so
bin/opengl-test.bin: /usr/lib/x86_64-linux-gnu/libglut.so
bin/opengl-test.bin: /usr/lib/x86_64-linux-gnu/libGLEW.so
bin/opengl-test.bin: /usr/lib/x86_64-linux-gnu/libGLU.so
bin/opengl-test.bin: /usr/lib/x86_64-linux-gnu/libGL.so
bin/opengl-test.bin: /usr/lib/x86_64-linux-gnu/libglfw.so
bin/opengl-test.bin: /usr/lib/x86_64-linux-gnu/libGLEW.so
bin/opengl-test.bin: /usr/lib/x86_64-linux-gnu/libGLU.so
bin/opengl-test.bin: /usr/lib/x86_64-linux-gnu/libGL.so
bin/opengl-test.bin: /usr/lib/x86_64-linux-gnu/libSM.so
bin/opengl-test.bin: /usr/lib/x86_64-linux-gnu/libICE.so
bin/opengl-test.bin: /usr/lib/x86_64-linux-gnu/libX11.so
bin/opengl-test.bin: /usr/lib/x86_64-linux-gnu/libXext.so
bin/opengl-test.bin: /usr/lib/x86_64-linux-gnu/libpython2.7.so
bin/opengl-test.bin: /usr/lib/x86_64-linux-gnu/libdc1394.so
bin/opengl-test.bin: /usr/lib/x86_64-linux-gnu/libavcodec.so
bin/opengl-test.bin: /usr/lib/x86_64-linux-gnu/libavformat.so
bin/opengl-test.bin: /usr/lib/x86_64-linux-gnu/libavutil.so
bin/opengl-test.bin: /usr/lib/x86_64-linux-gnu/libswscale.so
bin/opengl-test.bin: /usr/lib/libOpenNI.so
bin/opengl-test.bin: /usr/lib/x86_64-linux-gnu/libpng.so
bin/opengl-test.bin: /usr/lib/x86_64-linux-gnu/libz.so
bin/opengl-test.bin: /usr/lib/x86_64-linux-gnu/libjpeg.so
bin/opengl-test.bin: /usr/lib/x86_64-linux-gnu/libtiff.so
bin/opengl-test.bin: /usr/lib/x86_64-linux-gnu/libIlmImf.so
bin/opengl-test.bin: main/CMakeFiles/opengl-test.bin.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/snowboy/Documents/MyProject/AAAAAA/3D-face-Reconstruction-based-on-3DMM-ulsTracker-simple/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../bin/opengl-test.bin"
	cd /home/snowboy/Documents/MyProject/AAAAAA/3D-face-Reconstruction-based-on-3DMM-ulsTracker-simple/build/main && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/opengl-test.bin.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
main/CMakeFiles/opengl-test.bin.dir/build: bin/opengl-test.bin

.PHONY : main/CMakeFiles/opengl-test.bin.dir/build

main/CMakeFiles/opengl-test.bin.dir/requires: main/CMakeFiles/opengl-test.bin.dir/opengl-test.cpp.o.requires

.PHONY : main/CMakeFiles/opengl-test.bin.dir/requires

main/CMakeFiles/opengl-test.bin.dir/clean:
	cd /home/snowboy/Documents/MyProject/AAAAAA/3D-face-Reconstruction-based-on-3DMM-ulsTracker-simple/build/main && $(CMAKE_COMMAND) -P CMakeFiles/opengl-test.bin.dir/cmake_clean.cmake
.PHONY : main/CMakeFiles/opengl-test.bin.dir/clean

main/CMakeFiles/opengl-test.bin.dir/depend:
	cd /home/snowboy/Documents/MyProject/AAAAAA/3D-face-Reconstruction-based-on-3DMM-ulsTracker-simple/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/snowboy/Documents/MyProject/AAAAAA/3D-face-Reconstruction-based-on-3DMM-ulsTracker-simple /home/snowboy/Documents/MyProject/AAAAAA/3D-face-Reconstruction-based-on-3DMM-ulsTracker-simple/main /home/snowboy/Documents/MyProject/AAAAAA/3D-face-Reconstruction-based-on-3DMM-ulsTracker-simple/build /home/snowboy/Documents/MyProject/AAAAAA/3D-face-Reconstruction-based-on-3DMM-ulsTracker-simple/build/main /home/snowboy/Documents/MyProject/AAAAAA/3D-face-Reconstruction-based-on-3DMM-ulsTracker-simple/build/main/CMakeFiles/opengl-test.bin.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : main/CMakeFiles/opengl-test.bin.dir/depend
