# Week 4

## C

Run `gcc file.here` to compile

Run `a.out` to see output if not otherwise named.

End lines in semicolons. 

## Writing C 101

1. Comment everything
2. Plan first, code second
	* Constants to declare, variables to be used, ect.
	* Operations per input is how to measure compelxity 
3. Write test case first
	* What is the expected outcome?
4. Write code one line at a time and TEST
	* Best way to prevent loss of sleep
5. Write test cases and expected outcomes, then try them

Make sure code terminates. 

## Hellow world expanded

`%d\n` sets up for decimal number on new line in printf.

`scanf` is the read function in C.

`&` is the pointer to the variable. `&i` sends the input to variable i. 

Print inputs back out to verify input. Refered to as diagnostic printf.

Bad form can lead to errors later. 

`==` comparison instead of assignment. 

emacs will highlight bracket pairs, and will auto indent correctly. 

Floating point is the real numbers for C. 

Make sure floating points don't get rounded inproperly. 

## Different kind of class

Order of numbers matters. Check for zero first. 
Time matters when dealing with big data. 

Clarify requirments and data formats. 

Scan and insert is the fastest way to organize data by a single data point.

Should be able to recognize the equivelent difficulty between problems. 

## Insertion sort example

1. Load data and number of data points to sort
2. Set up for loop
3. Set up nexted while loop to move data ahead if data points are not in right order

For loop would run through the whole array once. 

`O(n)` is worst case inversion. Insert sort is O(n^2).  

`const` declares constant value.

Initialize everything that is used in the script. 

Do not copy paste code. If it's used more than once, make it a function. 
