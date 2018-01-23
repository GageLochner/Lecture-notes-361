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
> {then action}

`ls -la > temp.txt` `awk '/root/ {print $1,$9}' temp.txt`



