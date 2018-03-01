# Week 8

## Structs

Attempt to streamline main. 

Have input validation in one place to use in each lab. 

Taking in a pair of points. Dash or flag, then string which may be converted to something else. 

`struct namedstruct`
`char[10] flag buffer`
`char[10] input`

# Library creation

Save as .h to be able to use in any code as a library. 
Include needed libraries in your custom library, then make sure to include them in the main script. 

Only define the library if i's not already defined. 

`#ifndef _Input_h_`
`#define _Input_h_`
`main`
`#endif`

To include the library, the library name is in quotetation marks.

To define functions: Create a .c file of same name of .h file. This referances the .c file for the actual function. 

Include .h in .c file. All others needed are to be included in .h file.

## Makefile
### Make all make files in EMACS

`cc = /use/bin/gcc`
`ccflags= $(INCLUDES: %=I%) - Wall`
`modules = \
	Inputvalidatio\
	parsemyflags`
`objs = $(MODULES:%=%.o)`
`input:
	$(cc) -c $(CCflags) Input.cc Parse.cc
	$(CC) #(ccflags) ${objs} -o parse
all: input`
`clean:
	rm./*.o`

\ represents a line to be continued.

Space and tab are different and will cause issues with make. 

make all will run all code.

Anything after the colon is a dependancy. 

`-c` compile into object files. 

# Thursday

Remember the compiler process. 

>SPACES V TAB IN MAKE FILES

Just type make.

make is case sensitive.

## Binary (calculation v computation)

Math in binary works very differenty from decimal math. 

1 byte = 8 bits

## Binary demo

Be careful of positive negative bit flips.

32767 is max value of a signed short before it flips.

Fractions in binary are silly. Just use a decimal point, and find the approxamtion just like normal binary. 

Some things are not reporesentable accuractly beyound a certain point. 

Floats are stored differently. Decimal places move around. 

Addition is associative in binary. Sometimes. More likely with smaller numbers. It matters how you store numbers and how you access them. 
