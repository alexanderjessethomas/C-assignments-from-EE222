#include <stdio.h>
#include <math.h>
int main()
{
	float starting;
	float ending;
	float day;
	

	printf("Please enter starting debt for the month: ");
	scanf("%f", &starting);
	printf("Please enter ending debt for the month: ");
	scanf("%f", &ending);
	printf("Please enter the day during the month you are acquiring about: ");
	scanf("%f", &day);
	
	
	float difference = ending-starting;
	float percentPerDay = (difference/31.0);
	float daily = percentPerDay*day;

	
	float debtDaily = daily + starting;
	
	printf("The amount of debt as of day %f is %f.",day, debtDaily);
return 0;
}


	//float temp = starting;
	//for(i = 1.0; i <= day; i++){
	//	float daily = temp * percentPerDay;
	//	temp = temp + daily;
	//	printf(" Day: %f has %f \n",i, temp);
	//
	//}