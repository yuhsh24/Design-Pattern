# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_SOURCE_DIR = /home/yuhsh/Design-Pattern/CPlusPlus/Composite

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yuhsh/Design-Pattern/CPlusPlus/Composite

# Include any dependencies generated for this target.
include src/CMakeFiles/Composite.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/Composite.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/Composite.dir/flags.make

src/CMakeFiles/Composite.dir/HRDepartment.cpp.o: src/CMakeFiles/Composite.dir/flags.make
src/CMakeFiles/Composite.dir/HRDepartment.cpp.o: src/HRDepartment.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/yuhsh/Design-Pattern/CPlusPlus/Composite/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/Composite.dir/HRDepartment.cpp.o"
	cd /home/yuhsh/Design-Pattern/CPlusPlus/Composite/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Composite.dir/HRDepartment.cpp.o -c /home/yuhsh/Design-Pattern/CPlusPlus/Composite/src/HRDepartment.cpp

src/CMakeFiles/Composite.dir/HRDepartment.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Composite.dir/HRDepartment.cpp.i"
	cd /home/yuhsh/Design-Pattern/CPlusPlus/Composite/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/yuhsh/Design-Pattern/CPlusPlus/Composite/src/HRDepartment.cpp > CMakeFiles/Composite.dir/HRDepartment.cpp.i

src/CMakeFiles/Composite.dir/HRDepartment.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Composite.dir/HRDepartment.cpp.s"
	cd /home/yuhsh/Design-Pattern/CPlusPlus/Composite/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/yuhsh/Design-Pattern/CPlusPlus/Composite/src/HRDepartment.cpp -o CMakeFiles/Composite.dir/HRDepartment.cpp.s

src/CMakeFiles/Composite.dir/HRDepartment.cpp.o.requires:
.PHONY : src/CMakeFiles/Composite.dir/HRDepartment.cpp.o.requires

src/CMakeFiles/Composite.dir/HRDepartment.cpp.o.provides: src/CMakeFiles/Composite.dir/HRDepartment.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/Composite.dir/build.make src/CMakeFiles/Composite.dir/HRDepartment.cpp.o.provides.build
.PHONY : src/CMakeFiles/Composite.dir/HRDepartment.cpp.o.provides

src/CMakeFiles/Composite.dir/HRDepartment.cpp.o.provides.build: src/CMakeFiles/Composite.dir/HRDepartment.cpp.o

src/CMakeFiles/Composite.dir/ConcreteCompany.cpp.o: src/CMakeFiles/Composite.dir/flags.make
src/CMakeFiles/Composite.dir/ConcreteCompany.cpp.o: src/ConcreteCompany.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/yuhsh/Design-Pattern/CPlusPlus/Composite/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/Composite.dir/ConcreteCompany.cpp.o"
	cd /home/yuhsh/Design-Pattern/CPlusPlus/Composite/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Composite.dir/ConcreteCompany.cpp.o -c /home/yuhsh/Design-Pattern/CPlusPlus/Composite/src/ConcreteCompany.cpp

src/CMakeFiles/Composite.dir/ConcreteCompany.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Composite.dir/ConcreteCompany.cpp.i"
	cd /home/yuhsh/Design-Pattern/CPlusPlus/Composite/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/yuhsh/Design-Pattern/CPlusPlus/Composite/src/ConcreteCompany.cpp > CMakeFiles/Composite.dir/ConcreteCompany.cpp.i

src/CMakeFiles/Composite.dir/ConcreteCompany.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Composite.dir/ConcreteCompany.cpp.s"
	cd /home/yuhsh/Design-Pattern/CPlusPlus/Composite/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/yuhsh/Design-Pattern/CPlusPlus/Composite/src/ConcreteCompany.cpp -o CMakeFiles/Composite.dir/ConcreteCompany.cpp.s

src/CMakeFiles/Composite.dir/ConcreteCompany.cpp.o.requires:
.PHONY : src/CMakeFiles/Composite.dir/ConcreteCompany.cpp.o.requires

src/CMakeFiles/Composite.dir/ConcreteCompany.cpp.o.provides: src/CMakeFiles/Composite.dir/ConcreteCompany.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/Composite.dir/build.make src/CMakeFiles/Composite.dir/ConcreteCompany.cpp.o.provides.build
.PHONY : src/CMakeFiles/Composite.dir/ConcreteCompany.cpp.o.provides

src/CMakeFiles/Composite.dir/ConcreteCompany.cpp.o.provides.build: src/CMakeFiles/Composite.dir/ConcreteCompany.cpp.o

src/CMakeFiles/Composite.dir/FinanceDepartment.cpp.o: src/CMakeFiles/Composite.dir/flags.make
src/CMakeFiles/Composite.dir/FinanceDepartment.cpp.o: src/FinanceDepartment.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/yuhsh/Design-Pattern/CPlusPlus/Composite/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/Composite.dir/FinanceDepartment.cpp.o"
	cd /home/yuhsh/Design-Pattern/CPlusPlus/Composite/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Composite.dir/FinanceDepartment.cpp.o -c /home/yuhsh/Design-Pattern/CPlusPlus/Composite/src/FinanceDepartment.cpp

src/CMakeFiles/Composite.dir/FinanceDepartment.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Composite.dir/FinanceDepartment.cpp.i"
	cd /home/yuhsh/Design-Pattern/CPlusPlus/Composite/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/yuhsh/Design-Pattern/CPlusPlus/Composite/src/FinanceDepartment.cpp > CMakeFiles/Composite.dir/FinanceDepartment.cpp.i

src/CMakeFiles/Composite.dir/FinanceDepartment.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Composite.dir/FinanceDepartment.cpp.s"
	cd /home/yuhsh/Design-Pattern/CPlusPlus/Composite/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/yuhsh/Design-Pattern/CPlusPlus/Composite/src/FinanceDepartment.cpp -o CMakeFiles/Composite.dir/FinanceDepartment.cpp.s

src/CMakeFiles/Composite.dir/FinanceDepartment.cpp.o.requires:
.PHONY : src/CMakeFiles/Composite.dir/FinanceDepartment.cpp.o.requires

src/CMakeFiles/Composite.dir/FinanceDepartment.cpp.o.provides: src/CMakeFiles/Composite.dir/FinanceDepartment.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/Composite.dir/build.make src/CMakeFiles/Composite.dir/FinanceDepartment.cpp.o.provides.build
.PHONY : src/CMakeFiles/Composite.dir/FinanceDepartment.cpp.o.provides

src/CMakeFiles/Composite.dir/FinanceDepartment.cpp.o.provides.build: src/CMakeFiles/Composite.dir/FinanceDepartment.cpp.o

src/CMakeFiles/Composite.dir/Company.cpp.o: src/CMakeFiles/Composite.dir/flags.make
src/CMakeFiles/Composite.dir/Company.cpp.o: src/Company.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/yuhsh/Design-Pattern/CPlusPlus/Composite/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/Composite.dir/Company.cpp.o"
	cd /home/yuhsh/Design-Pattern/CPlusPlus/Composite/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Composite.dir/Company.cpp.o -c /home/yuhsh/Design-Pattern/CPlusPlus/Composite/src/Company.cpp

src/CMakeFiles/Composite.dir/Company.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Composite.dir/Company.cpp.i"
	cd /home/yuhsh/Design-Pattern/CPlusPlus/Composite/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/yuhsh/Design-Pattern/CPlusPlus/Composite/src/Company.cpp > CMakeFiles/Composite.dir/Company.cpp.i

src/CMakeFiles/Composite.dir/Company.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Composite.dir/Company.cpp.s"
	cd /home/yuhsh/Design-Pattern/CPlusPlus/Composite/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/yuhsh/Design-Pattern/CPlusPlus/Composite/src/Company.cpp -o CMakeFiles/Composite.dir/Company.cpp.s

src/CMakeFiles/Composite.dir/Company.cpp.o.requires:
.PHONY : src/CMakeFiles/Composite.dir/Company.cpp.o.requires

src/CMakeFiles/Composite.dir/Company.cpp.o.provides: src/CMakeFiles/Composite.dir/Company.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/Composite.dir/build.make src/CMakeFiles/Composite.dir/Company.cpp.o.provides.build
.PHONY : src/CMakeFiles/Composite.dir/Company.cpp.o.provides

src/CMakeFiles/Composite.dir/Company.cpp.o.provides.build: src/CMakeFiles/Composite.dir/Company.cpp.o

src/CMakeFiles/Composite.dir/main.cpp.o: src/CMakeFiles/Composite.dir/flags.make
src/CMakeFiles/Composite.dir/main.cpp.o: src/main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/yuhsh/Design-Pattern/CPlusPlus/Composite/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/Composite.dir/main.cpp.o"
	cd /home/yuhsh/Design-Pattern/CPlusPlus/Composite/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Composite.dir/main.cpp.o -c /home/yuhsh/Design-Pattern/CPlusPlus/Composite/src/main.cpp

src/CMakeFiles/Composite.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Composite.dir/main.cpp.i"
	cd /home/yuhsh/Design-Pattern/CPlusPlus/Composite/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/yuhsh/Design-Pattern/CPlusPlus/Composite/src/main.cpp > CMakeFiles/Composite.dir/main.cpp.i

src/CMakeFiles/Composite.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Composite.dir/main.cpp.s"
	cd /home/yuhsh/Design-Pattern/CPlusPlus/Composite/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/yuhsh/Design-Pattern/CPlusPlus/Composite/src/main.cpp -o CMakeFiles/Composite.dir/main.cpp.s

src/CMakeFiles/Composite.dir/main.cpp.o.requires:
.PHONY : src/CMakeFiles/Composite.dir/main.cpp.o.requires

src/CMakeFiles/Composite.dir/main.cpp.o.provides: src/CMakeFiles/Composite.dir/main.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/Composite.dir/build.make src/CMakeFiles/Composite.dir/main.cpp.o.provides.build
.PHONY : src/CMakeFiles/Composite.dir/main.cpp.o.provides

src/CMakeFiles/Composite.dir/main.cpp.o.provides.build: src/CMakeFiles/Composite.dir/main.cpp.o

# Object files for target Composite
Composite_OBJECTS = \
"CMakeFiles/Composite.dir/HRDepartment.cpp.o" \
"CMakeFiles/Composite.dir/ConcreteCompany.cpp.o" \
"CMakeFiles/Composite.dir/FinanceDepartment.cpp.o" \
"CMakeFiles/Composite.dir/Company.cpp.o" \
"CMakeFiles/Composite.dir/main.cpp.o"

# External object files for target Composite
Composite_EXTERNAL_OBJECTS =

bin/Composite: src/CMakeFiles/Composite.dir/HRDepartment.cpp.o
bin/Composite: src/CMakeFiles/Composite.dir/ConcreteCompany.cpp.o
bin/Composite: src/CMakeFiles/Composite.dir/FinanceDepartment.cpp.o
bin/Composite: src/CMakeFiles/Composite.dir/Company.cpp.o
bin/Composite: src/CMakeFiles/Composite.dir/main.cpp.o
bin/Composite: src/CMakeFiles/Composite.dir/build.make
bin/Composite: src/CMakeFiles/Composite.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../bin/Composite"
	cd /home/yuhsh/Design-Pattern/CPlusPlus/Composite/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Composite.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/Composite.dir/build: bin/Composite
.PHONY : src/CMakeFiles/Composite.dir/build

src/CMakeFiles/Composite.dir/requires: src/CMakeFiles/Composite.dir/HRDepartment.cpp.o.requires
src/CMakeFiles/Composite.dir/requires: src/CMakeFiles/Composite.dir/ConcreteCompany.cpp.o.requires
src/CMakeFiles/Composite.dir/requires: src/CMakeFiles/Composite.dir/FinanceDepartment.cpp.o.requires
src/CMakeFiles/Composite.dir/requires: src/CMakeFiles/Composite.dir/Company.cpp.o.requires
src/CMakeFiles/Composite.dir/requires: src/CMakeFiles/Composite.dir/main.cpp.o.requires
.PHONY : src/CMakeFiles/Composite.dir/requires

src/CMakeFiles/Composite.dir/clean:
	cd /home/yuhsh/Design-Pattern/CPlusPlus/Composite/src && $(CMAKE_COMMAND) -P CMakeFiles/Composite.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/Composite.dir/clean

src/CMakeFiles/Composite.dir/depend:
	cd /home/yuhsh/Design-Pattern/CPlusPlus/Composite && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yuhsh/Design-Pattern/CPlusPlus/Composite /home/yuhsh/Design-Pattern/CPlusPlus/Composite/src /home/yuhsh/Design-Pattern/CPlusPlus/Composite /home/yuhsh/Design-Pattern/CPlusPlus/Composite/src /home/yuhsh/Design-Pattern/CPlusPlus/Composite/src/CMakeFiles/Composite.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/Composite.dir/depend

