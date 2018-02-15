# Week 6 notes

## Misc.

Easy material will not be covered.

This class and lab is to be similar to a professional workflow.

Lecture is big concepts and ideas. Labs are for smaller details.

## Input sanitation demo

`#define` hard codes constants. 

Have a print useage function.

Lots of websites that list functions, also in back of C book.

Can list if statements in a row, no need for else ; line.

Strings always have set length, same index as matrix.

Last item is void. `\0` 

Can use to check length of string. Make sure that you include that space in user defined strings

## Loonwerks.com

Lots of cool vids, Minnesota branch of Rockwell.

Really fancy input checking to prevent hacking.

## Factorial.c demo for gdb

Int main void
Declare and intitialize variables
Simple loop to find factorial
PrintF answer

`-g` in gcc doesn't optimize anything, use gdb for debugging.

### in gdb command

set break at issue line, then run code within gdb. Will run until breakpoint.

`p i` will print value of I at break point.

use step to go through the next iteration of the loop.

Book has very nice example of accessing memory incorrectly with gdb. 

How to open core dumps in gdb.

Continue will run gdb until next break point or end of code

## Fancy stuff in GDB: Array demo

Use \t for alignment in printf

`*b` will output the what is stored. Without star, would output the location of what is stored

`*(b+1)` is correct way to call out b+1 variable 

`*b+1` will find what is stored next to b. `If var *b = H, *b+1 = I *b+2 = J, ect ect`

## bc

Infinite precission calculator. Useful for lab 6.

## strings

Printf will print a string until it sees `\0`.

## Prototyping

Do not prototype in matlab. Read chaper 10 of book for more info.

## PBJ demo

Write algorithum in sudo code before declarations, variables, ect. 

Then write the code as one piece. 

Revising variables again and again. Try to think of everything.

Set up code before you do any coding. 

> Is the knife removed from the bread


