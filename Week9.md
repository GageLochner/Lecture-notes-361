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

Using loop invariants to check that your results is within the bounds of what you expect. Double checking results.

Can stop bad numbers, sign flips, and infinite loops.

> Floating point errors don't happen all the time. They happen often enough that you have to be aware of them. 

## Pitfalls of floating points

Oct 19, 2016: ExoMars crashed. Parachute deployed correcly. Heat shield ejected correctly. IMU miscalculated by 1 second. Naviagiont calculated a negative altitdue.
Activated landing pocedures at 2 miles. Activated on ground systems at 2 miles altitude. Crashed at 185 mph.
Sanity checks such as negative altitude, rate of change, decent rate and the like would have saved the mission. 

Assert statements shouldn't execute, and therefore shouldn't use any resources. Not a noticable effect. Same goes for comments. 

Invariants that could have saved the mission:

1. Rates
2. Ranges
3. Relationships
4. Control Sequences
5. Consistency Checks

Patriot missile failure: Gulf war. Iraqi army employed Scud missles. US installed patriot anti missle batteries. Feb 25, 1991. Scud missles hit a barracks. 
Missle software failed to fire. Cause: roundoff error in floating point computation. Value of 1/10 was rounded off as a fixed point number. 24 bit storage.
0.0000000095 seconds of error every 1/10 of a second. After 8 hrs, causes 20% error in targeting computers. After 100 hrs, about .34 seconds. 
Enough time for the scud to travel 0.5km and out of range of the battery. 

Ariane 5 rocket maiden flight: Total loss. Software attempted to put a 64 bit float into a 16 bit signed int. 


