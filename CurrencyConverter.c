#include <stdio.h>

int main()
{
	double dollars = 0.00;
	double euros;
	int i;

	printf("Dollars  		-  	 Euros  \n\n");
	
	//prints table and does conversion
	for(i = 1; i <= 26; i++){
		euros = dollars * 0.893245;  //conversion rate as of 10/1/2015 at 4:14pm

		printf("Dollars($): %.2lf	to       Euros(€): %.2lf \n", dollars, euros);
		dollars += 1.50;
	}	

	return 0;
}