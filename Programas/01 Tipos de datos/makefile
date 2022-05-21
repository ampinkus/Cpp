# General makefile for C or C++ compiler. 
# Use:  > make <Enter>
# Compiler flags:
#  -g provides debugging feature for your program. You will need this when you want to use gdb or valgrind.
# -Wall show all warnings. It turns on all standard C++ warnings about code that might cause unexpected or undefined behavior
# -pedantic issues all warnings demanded by strict ISO C++ rules if you want to be extra safe
# -Wextra enables some extra warnings not turned on by -Wall. These include warnings for bad pointer to integer zero comparisons, 
#      base class not initialized in copy constructor of derived class, etc.
# -Wshadow warns whenever a local variable or type declaration shadows another variable, parameter, class member, etc.
# -Wsign-conversion or -Wconversion warn if making unsafe, implicit conversions between signed and unsigned types (i.e. unsigned int + (constant expression) )
# -std=c++17  C++ version 17 

# Put the SOURCE file/files ( if they are more than one file) and the EXECUTABLE name after the = sign, line 15 and 16 
SOURCE = NumericalLimits.cpp 
EXECUTABLE = NumericalLimits 

# Select all the flags you will use at compilation time at line 19.
CFLAGS =  -Wall -pedantic -Wextra -Wshadow -Wconversion -std=c++17 

# Start the compiling process, dont put any other compiling line after TARGET: !
# Line 24: Use g++ for C++ source files OR gcc for C source files.
TARGET:
	g++  $(CFLAGS) $(SOURCE) -o $(EXECUTABLE)
