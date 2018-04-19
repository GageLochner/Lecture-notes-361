#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

/***** Print function *****/

void print_usage(){
  printf("./rk45 [-plot Xi Xe y step epsilo ]\n");
  printf("\t-plot:\t\tgenerate data of purpose of plotting\n");

/***** Other declarations *****/

double f( double x, double y);

/***** rk45 Function *****/

void rk45(double Xi, double Xe, double y, double h, double epsilon, double(*f)(double,double)){

  int i = 0;
  double x = Xi;
  double k1,k2,k3,k4,k5,k6, y1,y2,R,delta;

  printf("Step %d: x= %lf, y= %lf\n", step, x, y);
  
  while(x < Xe){
    h = (h < Xe - x) ? h : (Xe-x);
    // k1 through k6 functions of h, f, and k, from lab manual
    // y1, y2, R, and delta.
    // Use fabs instead of abs
    // pow
    // Avoid integer math. 
    
    if (R <= epsilon){
      x = x + h;
      y = y1;
      step++;
      printf("step,x,y");
      h = delta*h;
    } // End if
    
    else{
      h = delta*h;
    } // End else
    
  } // End while
} // End rk45 Function

/*************************/
/***** MAIN FUNCTION *****/
/*************************/

int main(int argc, char *argv[]){

  if(argc == 1)
  
    // Inputs of function to solve
    
    // Move line to begining of main  double Xi, Xe, y, h, epsilon; // Declare variables

  printf("Starting value of x: ");
  scanf("%lf", &Xi);

  // Repeat for Xe, y, h, and epsilon

  rk45(Xi, Xe, y, h, epsilon, f);

  // Must plot the values, using gnuplot

  else{
    assert (argc == 7);
    assert(strcmp(argv[1], "-plot") == 0);
    // sscanf to pull in cmd arguements, or hard code with argv[i] =...
  }
  return 0;
