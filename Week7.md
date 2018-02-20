# Week 7 lecture notes

## Grading

Lab 1 grades in. 

Commit time is what is graded, not pull time.

## Pointers from different angles

### Array pointers

Single pointer case is pretty clear.

2d array is just a list of pointers. Malloc just pulls each array, the loop pulls for each line in array.

*** used to pull in a matrix. It's a pointer to the 2 pointers for each location. 

Just pointer - just address of memory. Usually the value that it holds.

* pointer - derefferance operator, goes to memory address that it's pointing to and read that.

& pointer - address of the pointer. 

Pointers are the same size, regardless of size of info saved. 

## Example

int i;

i = 10;

*int p+r;

p+r = &i;

This puts the value of 10 at the memory location, and puts the address of i in another location. 

seg fault - access memory that isn't yours or pointer is null.

&p+r = 0xAB

p+r = 0x42 ( Memory location of value of I)

*p+r = 10

**p+r = seg fault

%i = 0x42 ( Memory location of value of I )

## In class example

Write code on board in class. Attempt to solve it ourselfs first. 

Write code to manage farm. Has a river through the middle of the farm. 4 members of farm; the farmer, a wolf, a goat, and a cabbage.

Rules that opperate farm:
	All currently located at start of program, passed through argv into main.
	Assumed to start on left bank of river. Must all cross river. 
	The catch: One rowboat. Boat only has two seats. Only farmer may opperate boat. 
	Wolf and goat have not been fed. They will eat each other. River crossing must be a function. 

#include <stdio.h>

Rivercross funct
	Farmer == boat
	else fail
if farmer = boat = 0
	farmer = boat = 1
else if farmer = boat = 1
	farmer = boat = 0	

int main ( argv argc )

int Farmer;
int Goat;
int Wolf;
int Cabbage;
int Boat;

Farmer = 0;
Goat = 0;
Wolf = 0;
Cabbage = 0;
Boat = 0;

*int ptr;
ptr = &Farmer;

*int par;
par = &Goat;

*int pbr;
pbr = &Wolf;

*int bcr;
pcr = &Cabbage;

*int boatl;
boatl = &Boat; 

// Left side of bank is value 0
// Right side of bank is value 1

goat =! cabbage unless farmer = goat = cabbage

wolf =! goat unless farmer = goat = wolf



