# Week 5 lecture notes

## Subtleties

Do not copy paste from stack overflow.

A joke...
> Coffee making

> Engineers compute; Mathematicians calculate

> A somputer is a tool for calculation, not a math savant

Right answer does not matter if it doesn't finish in reasonable time. 

## Classes of hardness

Based on complexity. 

* constant = O(c)
* logarithmic = O(log(n))
* NP - Complete = Interesting
* exponential = O(2^n)

## NP complete

If p!=np, we have proved is it harder to devise a solution than to check correctness. 

in NP: reduces to another problem in NP.
NP-hard: at least as hard as the hardest problem in NP.

## SAT

For every problem, you can convert it into another problem that already has a solution.

## Array demo

Matrix in C is just an array of arrays. 

Remember that matrix starts at (0,0).

`sizeof` returns size of values of memory used. 

> C is powerful enough to not complain while you shoot yourself in the foot. 

## Input sanitation and validation demo

Put notes, name, date, in comments just under script name.

List inputs and outputs.

C pre processor goes though code once, and replaces parts with things you define. 

Can use `#ifdefine` and `#ifndefine`.

Use `printusage` to list inputs, outputs, and objective of function code. Make it descriptive.

`return 0;` just before end main.

Code usually gets run by other code.

*Had to leave class due to 361 lab*


