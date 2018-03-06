# Week 9

## Verification tools ( Beyond scope of class )

Installing tool called Spot, Nasa program to analyse requirements and the like.

Several hundered files to install. Use `./configure;make;make install` to eaily do this.

## Math

Is addition assoicative? Yes, in math. On a computer, NO. 

## NEVER EVER EVER TEST FOR A QUALITY IN FLOATING POINT

Float always uses scientific notation.

Saved as (Sign)(exponent)(mantica{significant})

Sign - the sign of the number - 1 bit

Exponent - 10^x - 15 bits

Mantica - Actual bits of precission. - 63 bits 

Add/subtrat:

1. Make sure that the magnitude of the order of differance is less than the number of bits stored in the number.
2. Add or subtract the mantica

Multiply:

1. Sum exponents.
2. Multiply mantissa, which may suffer from exessive bits after multiplication which are lost due to max size of float. 

Float will always be somewhat impresice. 

## Normalize and optimize

Keep as much precission as possible. 

Do as much math as possible around the -1 to 1 range. 

Rules:

1. Use simplest data type possible.

2. Do not represent floats as strings. ALWAYS use scientific notation.

3. Rescale towards zero.

4. NEVER TEST FOR EQUALITY OF FLOATING POINTS

5. Subtracting two near equal numbers is a bad idea.

Machine epislon: Smallest number that the machine can recognize.

## How does this all relate to loop invariants?

`assert.h`

Allows you to assert that things are true. Expected results checking.


