# ODE METHODS

## Formula derevation

### IVP ( Initial value problem ) , two groups of methods

#### Single step

Estimate y prime from initial conditions

approx y1 of y(x1) at x1=x0+h;

repeat 

new value = old method + slop

##### Eulers Method

yi+1 = yi +hf(xi,yo)

Explicit method. Uses slope at x0 to predict value of y1 at x1.

Generates error if exact solution is not linear. 

Two types of error: (Truncation error caused by the tecnique) or (roundoff error caused by limited number of sig figs)
[B
Local truncatin error is applying a method over a single step.
OB
Propagated truncation error is due to the appoximation produced on prior step.
OB
Global reuncation error for Eulers method is O(h). Ergo, first order method. 

##### Second order Runge-Kutta method

yi+1 = yi+ (h/2)(k1+k2) where k1 = f(xi,yi) and k2 = f(xi+1,yi+h*k1)

Accuracy proportional to h^2

There are third order, but not popular. 

##### Forth order Runge-Kutta method (RK4)

yi+1 = yi+(h/6)[k1+2k2+2k3+k4]

k1 = f(xi,yi)

k2 = f(xi+h/2,yi+(h/2)*k1)

k3 = k2 but with k2

k4 = f(xi+h,yi+h*k3)

##### Adaptrive Runge-Kutta method

Either reduce step size h, or choose a more accurate scheme. 

We are attempting to solve with the largest h that still allows for the answer to be within the error specified. 

Algorythm : Reduce h as needed to meet error, or increase h until it meets error. 

Take each step twice, once as a full step and independently as two half steps. 

delta = y2(1/2h) - y1(h)

if delta is small, no advantage in decreasing h, if significant, assume solution obtained with large h is inaccurate. 

##### RK45 - Runge-Kutta-Fehlberg method

Simultaneously advance the soultion with two differenct order schemes using the same h and same estimates of slopes in the intermediate points.

if Y is the less accurate scheme, and y is the more accurate scheme, and delta = Y-y < error, no need to decrease h, but if delta << error, safely increase h. 

6 different slopes to use. Look up formula on google. 

In matlab, ode45() is the comperable function. 

# Solver

Input range of x, initial value of y, step size and epsilon.

See Lab 14 demo .c
