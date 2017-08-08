#include <stdio.h>
#include <math.h>
#define Pi 3.1415926

 
double factorial (double number){
	double comp = number;
	double i;
	double temp = 1.00;
	for(i = 1.00; i <= comp; i++){
		temp = temp*i;	
	}
		
	
	
return temp ;
}

void stirlings(double temp){
	double negative = -1 * comp;
	double exponential = exp(negative);
	
	double sComp = pow(comp, comp);
	double squareRoot = sqrt((2.0 * Pi * comp));
	double stirlings = sComp * exponential * squareRoot;
	
	
	double percentage = ((temp - stirlings)/temp);
	
	double percentage2 = (percentage * 100.00);
	

	printf("Number			Factorial			Percentage \n\n");
	printf("%.2lf			%.2lf		%lf %           ", comp, temp, percentage2);
	
}

int main(){
	double number;
	printf("Please enter a number: ");
	scanf("%lf", &number);

	if(numeber < 1.00){
		printf("Error. Please enter a number between 1 and 31. \n");
		main();
	}
	else if(number > 31.00){
		printf("Error. Please enter a number between 1 and 31.\n");
		main();
	}
	else{

		factorial(number);
		stirlings();
	}

	
}