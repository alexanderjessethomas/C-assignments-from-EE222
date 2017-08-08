#include<stdio.h>
#include<math.h>

#define Pi 3.1415926
 
double factorial(double n){
  if (n == 0.00)
    return 1.00;
  else
    return(n * factorial(n-1.00));
}

double stirlings(double n){
  double comp = n;
  double i;
  double temp = 1.00;
  for(i = 1.00; i <= comp; i++){
    temp = temp*i;
  }

  double negative = -1 * comp;
  double exponential = exp(negative);
	
  double sComp = pow(comp, comp);
  double squareRoot = sqrt((2.0 * Pi * comp));
  double stirlings = sComp * exponential * squareRoot;
	
	
  double percentage = ((temp - stirlings)/temp);
	
  double percentage2 = (percentage * 100.00);
  return percentage2;
}

int main(){
  double n;
  double f;
  double s;
 
  printf("Enter an integer to find factorial: ");
  scanf("%lf", &n); 
 
  if (n < 0)
    printf("Negative integers are not allowed.\n");
  else
  {
    f = factorial(n);
    s = stirlings(n);
    
    printf("Number			Factorial			Percentage \n\n");
    printf("%.2lf			%.2lf			%lf %           ", n, f, s);
    
  }
 
  return 0;
}
 
