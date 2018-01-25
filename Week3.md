# Week 3 lecture notes

## Make sure emails are professional 

### Emails regarding issues with class 

List the exact error and command line prompts.

How do you reproduce this error. Use history as needed.

What did you do to try to fix it. 

# Bach Scripting

## `#!/bin/bash`

Read the flipping manual.  

`$$` This is the process ID of the sript itself.

Many times variables in bash scripting start with `$` with some other character.

## sed

`echo "It's a trap" | sed s/ra/ar/` 

What will this do? 

`sed` command is a find and replace type command.

Output of command is "It's a tarp"

`>` is used to send info to a file. 

Modifiers look like this `sed s/ow/aagh/g` G is the modifier for global. 

Or `-ie` to save the changes to the file.

Entire book on sed & awk, free on isu online. 

## awk

Something of a mini programming language.

By default: a line is a record.

awk creates condition-action pairs.

> if (record matches condition) 
>
> {then action}

`ls -la > temp.txt`

`awk '/root/ {print $1,$9}' temp.txt`

Can do very complicated things.

Files over certain size, ect ect. 

Using `ls -la` record 5 would indicate file size, and can be sorted in awk.

$ denotes variable to awk.

awk does not always need an action. 

Use `&` as end condition within script to allow script to run to completion. 

`ps aux | grep xeyes | awk '{ print $2 }'` This prints the PID for xeyes, and the PID for grep. Use pattern matching in awk to only pull the PID for xeyes.

Pattern matched looks like `| awk '$11 !- /grep/ { print $2 }'`
This will pull out all PIDs where the 11th field is not grep. 


Make sure to put comments at the end of each line. Print things out before doing anything dangerous or related to kill command. 

`{ print "kill -9 " $2 }'` Will print out PIDs to be killed. 

awk has implied loop within pattern matching. 

`ps aux | grep | awk | xargs kill` Will kill the PIDs that get passed through awk.

Use print to output things via `|` as a standard output. Example `print $2 | xargs kill`

Or use `kill $` which stands for kill variable with the variable being the ps aux grep awk chain.

Can also define a variable, which has to be declared, and then use `kill -9` on that variable. 

`pgrep` will find PID.

`pkill` has internal grep and xarg kill commands. 

> More than one way to do any one task.

`kill` must have a PID or Job ID as input. 

awk can be used to reformat data to import to C.

## Common commands

`sleep 2s` - sleeps for 2 seconds.

# C and complexity

* Machine Language ie Binary
* Assembly Language
* High Level Language
	* Where C is at
	* Must be compiled to be executed
* Scripting Language
	* Bash, python 
	* Interpreted, not complied

myfile.c -> preprocessor -> compiler -> assembler -> Pull in object files and libraries -> Linker -> a.out

_*COMMENT EVERYTHING*_

This is done in C iwht `/* insert comment */`

The simplist C code is listed below.

` int main (void) {`

`} /*end main*/`

then use `gcc test.cc` to complile, then run `a.out` to run the program. 

Void stands for no inputs. 

All C code must start and end with curly brackets. 

`printf("Hello World");` 

`#include<stdio.h>` is the standard In Out library include. 
