# Week 2 notes here

## Thursday

### Eviromental variables

Stored in dot files. 

#### Path variable

Make sure command is in path directory.

Put "." at end of path. 

"~" is a variable for home directory.

Anything you do in the command line, you can do in  a script. 

Anytime you do something more than once, write a script. 

### Permissions and scripts

To add ability to execute a file, use "chmod" 
"./" stands for local file

"#!/usr/bin/bash" is the first line of a script to run in bash. Run "which bash" first to id directory.

"env | grep bash" will find which shell is being used. Must search from env file.

### filesystem paths

in ".bashrc" alias rm ='rm -i' 

"mkdir" command to make directory.

"ls *" shows all files and tiers in directory

"touch" changes file timestamps. No options, it will update file timestamp to current time. 

"rmdir" remove directory. 

"*/*" view all two layers down. Add more to see further down. Use as option on "ls".

"/" is for root directory.

"rm -r" to remove non empty directory. 

### Important directory

"~/public_html" this is live to the internet. 

### Other ch

"chown" change owner.
" chgrp" change group.

### Other

"|" output to another program, often grep

