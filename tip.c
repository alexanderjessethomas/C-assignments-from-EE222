#include <stdio.h>

int main()	
{
	float bill;
	float tip;
	float percent;

	printf("Please enter the bill amount: ");
	scanf("%f", &bill);
	printf("Please enter the percentage you want to tip (10-100): ");
	scanf("%f", &percent);
	
	if(percent < 10.00){
		printf("Percentage for the tip is less than 10 percent.\nPlease enter a percentage between 10 and 100. \n");
		main();
	}
	else if(percent >100){
		printf("Percentage for the tip is greater than 100 percent.\nPlease enter a percentage between 10 and 100. \n");
		main();
	}
	else{
		float percent2 = percent / 100.00;
		tip = bill * percent2;
		printf("The bill is %f.\n The tip at %f percent is %f.", bill, percent, tip);
	}
		
return 0;
}