#include <stdio.h>
int main()
{
	int num1;
	int num2;

	printf("Please enter the first number that you wish to compair: ");
	scanf("%i", &num1);
	printf("Please enter the second number that you wish to compair: ");
	scanf("%i", &num2);
	
	if (num1 == num2){
		printf("The first number entered (%i) and the second number entered(%i)\nare equal.", num1,num2);
	}
	else if (num1 > num2){
		printf(" The first number entered (%i) is the bigger number.", num1);
	}
	else{
		printf(" The second number entered (%i) is the bigger number.", num2);	
	}
return 0; 
}