# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.28

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Users\zheni\AppData\Local\Programs\CLion Nova\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Users\zheni\AppData\Local\Programs\CLion Nova\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\zheni\CLionProjects\Algosi_dek

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\zheni\CLionProjects\Algosi_dek\cmake-build-release-visual-studio

# Include any dependencies generated for this target.
include CMakeFiles\Algosi_Deque.dir\depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles\Algosi_Deque.dir\compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles\Algosi_Deque.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\Algosi_Deque.dir\flags.make

CMakeFiles\Algosi_Deque.dir\main.cpp.obj: CMakeFiles\Algosi_Deque.dir\flags.make
CMakeFiles\Algosi_Deque.dir\main.cpp.obj: C:\Users\zheni\CLionProjects\Algosi_dek\main.cpp
CMakeFiles\Algosi_Deque.dir\main.cpp.obj: CMakeFiles\Algosi_Deque.dir\compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\zheni\CLionProjects\Algosi_dek\cmake-build-release-visual-studio\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Algosi_Deque.dir/main.cpp.obj"
	$(CMAKE_COMMAND) -E cmake_cl_compile_depends --dep-file=CMakeFiles\Algosi_Deque.dir\main.cpp.obj.d --working-dir=C:\Users\zheni\CLionProjects\Algosi_dek\cmake-build-release-visual-studio --filter-prefix="����������: ��������� �����:  " -- C:\PROGRA~1\MIB055~1\2022\COMMUN~1\VC\Tools\MSVC\1436~1.325\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /showIncludes /FoCMakeFiles\Algosi_Deque.dir\main.cpp.obj /FdCMakeFiles\Algosi_Deque.dir\ /FS -c C:\Users\zheni\CLionProjects\Algosi_dek\main.cpp
<<

CMakeFiles\Algosi_Deque.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Algosi_Deque.dir/main.cpp.i"
	C:\PROGRA~1\MIB055~1\2022\COMMUN~1\VC\Tools\MSVC\1436~1.325\bin\Hostx64\x64\cl.exe > CMakeFiles\Algosi_Deque.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\zheni\CLionProjects\Algosi_dek\main.cpp
<<

CMakeFiles\Algosi_Deque.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Algosi_Deque.dir/main.cpp.s"
	C:\PROGRA~1\MIB055~1\2022\COMMUN~1\VC\Tools\MSVC\1436~1.325\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Algosi_Deque.dir\main.cpp.s /c C:\Users\zheni\CLionProjects\Algosi_dek\main.cpp
<<

CMakeFiles\Algosi_Deque.dir\Deque.cpp.obj: CMakeFiles\Algosi_Deque.dir\flags.make
CMakeFiles\Algosi_Deque.dir\Deque.cpp.obj: C:\Users\zheni\CLionProjects\Algosi_dek\Deque.cpp
CMakeFiles\Algosi_Deque.dir\Deque.cpp.obj: CMakeFiles\Algosi_Deque.dir\compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\zheni\CLionProjects\Algosi_dek\cmake-build-release-visual-studio\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Algosi_Deque.dir/Deque.cpp.obj"
	$(CMAKE_COMMAND) -E cmake_cl_compile_depends --dep-file=CMakeFiles\Algosi_Deque.dir\Deque.cpp.obj.d --working-dir=C:\Users\zheni\CLionProjects\Algosi_dek\cmake-build-release-visual-studio --filter-prefix="����������: ��������� �����:  " -- C:\PROGRA~1\MIB055~1\2022\COMMUN~1\VC\Tools\MSVC\1436~1.325\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /showIncludes /FoCMakeFiles\Algosi_Deque.dir\Deque.cpp.obj /FdCMakeFiles\Algosi_Deque.dir\ /FS -c C:\Users\zheni\CLionProjects\Algosi_dek\Deque.cpp
<<

CMakeFiles\Algosi_Deque.dir\Deque.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Algosi_Deque.dir/Deque.cpp.i"
	C:\PROGRA~1\MIB055~1\2022\COMMUN~1\VC\Tools\MSVC\1436~1.325\bin\Hostx64\x64\cl.exe > CMakeFiles\Algosi_Deque.dir\Deque.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\zheni\CLionProjects\Algosi_dek\Deque.cpp
<<

CMakeFiles\Algosi_Deque.dir\Deque.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Algosi_Deque.dir/Deque.cpp.s"
	C:\PROGRA~1\MIB055~1\2022\COMMUN~1\VC\Tools\MSVC\1436~1.325\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Algosi_Deque.dir\Deque.cpp.s /c C:\Users\zheni\CLionProjects\Algosi_dek\Deque.cpp
<<

CMakeFiles\Algosi_Deque.dir\Deque_with_sort.cpp.obj: CMakeFiles\Algosi_Deque.dir\flags.make
CMakeFiles\Algosi_Deque.dir\Deque_with_sort.cpp.obj: C:\Users\zheni\CLionProjects\Algosi_dek\Deque_with_sort.cpp
CMakeFiles\Algosi_Deque.dir\Deque_with_sort.cpp.obj: CMakeFiles\Algosi_Deque.dir\compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\zheni\CLionProjects\Algosi_dek\cmake-build-release-visual-studio\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Algosi_Deque.dir/Deque_with_sort.cpp.obj"
	$(CMAKE_COMMAND) -E cmake_cl_compile_depends --dep-file=CMakeFiles\Algosi_Deque.dir\Deque_with_sort.cpp.obj.d --working-dir=C:\Users\zheni\CLionProjects\Algosi_dek\cmake-build-release-visual-studio --filter-prefix="����������: ��������� �����:  " -- C:\PROGRA~1\MIB055~1\2022\COMMUN~1\VC\Tools\MSVC\1436~1.325\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /showIncludes /FoCMakeFiles\Algosi_Deque.dir\Deque_with_sort.cpp.obj /FdCMakeFiles\Algosi_Deque.dir\ /FS -c C:\Users\zheni\CLionProjects\Algosi_dek\Deque_with_sort.cpp
<<

CMakeFiles\Algosi_Deque.dir\Deque_with_sort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Algosi_Deque.dir/Deque_with_sort.cpp.i"
	C:\PROGRA~1\MIB055~1\2022\COMMUN~1\VC\Tools\MSVC\1436~1.325\bin\Hostx64\x64\cl.exe > CMakeFiles\Algosi_Deque.dir\Deque_with_sort.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\zheni\CLionProjects\Algosi_dek\Deque_with_sort.cpp
<<

CMakeFiles\Algosi_Deque.dir\Deque_with_sort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Algosi_Deque.dir/Deque_with_sort.cpp.s"
	C:\PROGRA~1\MIB055~1\2022\COMMUN~1\VC\Tools\MSVC\1436~1.325\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Algosi_Deque.dir\Deque_with_sort.cpp.s /c C:\Users\zheni\CLionProjects\Algosi_dek\Deque_with_sort.cpp
<<

# Object files for target Algosi_Deque
Algosi_Deque_OBJECTS = \
"CMakeFiles\Algosi_Deque.dir\main.cpp.obj" \
"CMakeFiles\Algosi_Deque.dir\Deque.cpp.obj" \
"CMakeFiles\Algosi_Deque.dir\Deque_with_sort.cpp.obj"

# External object files for target Algosi_Deque
Algosi_Deque_EXTERNAL_OBJECTS =

Algosi_Deque.exe: CMakeFiles\Algosi_Deque.dir\main.cpp.obj
Algosi_Deque.exe: CMakeFiles\Algosi_Deque.dir\Deque.cpp.obj
Algosi_Deque.exe: CMakeFiles\Algosi_Deque.dir\Deque_with_sort.cpp.obj
Algosi_Deque.exe: CMakeFiles\Algosi_Deque.dir\build.make
Algosi_Deque.exe: CMakeFiles\Algosi_Deque.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\zheni\CLionProjects\Algosi_dek\cmake-build-release-visual-studio\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable Algosi_Deque.exe"
	"C:\Users\zheni\AppData\Local\Programs\CLion Nova\bin\cmake\win\x64\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\Algosi_Deque.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100220~1.0\x64\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100220~1.0\x64\mt.exe --manifests -- C:\PROGRA~1\MIB055~1\2022\COMMUN~1\VC\Tools\MSVC\1436~1.325\bin\Hostx64\x64\link.exe /nologo @CMakeFiles\Algosi_Deque.dir\objects1.rsp @<<
 /out:Algosi_Deque.exe /implib:Algosi_Deque.lib /pdb:C:\Users\zheni\CLionProjects\Algosi_dek\cmake-build-release-visual-studio\Algosi_Deque.pdb /version:0.0 /machine:x64 /INCREMENTAL:NO /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\Algosi_Deque.dir\build: Algosi_Deque.exe
.PHONY : CMakeFiles\Algosi_Deque.dir\build

CMakeFiles\Algosi_Deque.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Algosi_Deque.dir\cmake_clean.cmake
.PHONY : CMakeFiles\Algosi_Deque.dir\clean

CMakeFiles\Algosi_Deque.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\zheni\CLionProjects\Algosi_dek C:\Users\zheni\CLionProjects\Algosi_dek C:\Users\zheni\CLionProjects\Algosi_dek\cmake-build-release-visual-studio C:\Users\zheni\CLionProjects\Algosi_dek\cmake-build-release-visual-studio C:\Users\zheni\CLionProjects\Algosi_dek\cmake-build-release-visual-studio\CMakeFiles\Algosi_Deque.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles\Algosi_Deque.dir\depend

