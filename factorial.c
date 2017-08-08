#include <stdio.h>
#include <math.h>
#define Pi 3.1415926
int main()
{
	double comp;
	double i;
	double temp = 1.00;
	

	printf("Please enter a number: ");
	scanf("%lf", &comp);

	if(comp < 1.00){
		printf("Error. Please enter a number between 1 and 31. \n");
		main();
	}
	else if(comp > 31.00){
		printf("Error. Please enter a number between 1 and 31.\n");
		main();
	}
	else{
		for(i = 1.00; i <= comp; i++){
			temp = temp*i;	
		}
		printf("The number entered is %lf. \n", comp);
		printf("The factorial of number %lf is %lf \n", comp,temp);
	}
	
	// Sterling's Formula
	double negative = -1 * comp;
	double exponential = exp(negative);
	double sComp = pow(comp, comp);
	double squareRoot = sqrt((2.0 * Pi * comp));
	double stirlings = sComp * exponential * squareRoot * (1.00 + (1.00/ (12.00 * comp)));
	
	printf("This is the estimate from Sterling's forumla %lf \n", stirlings);
	double one = 100.00;
	double percentage = 1.00 - (stirlings/temp);
	double percentage2 = percentage * one;
	printf("This is the percent difference between Stirling's forumla and the factorial %lf.", percentage2);
	

return 0;
}