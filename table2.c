#include<stdio.h>

int main(void){
	int number1;
	int number2;
	int result;
	int first;
	int second;
 
	printf("Please enter a positive value for number 1 ");
	scanf("%d", &number1);
	printf("Please enter a positive value for number 2 ");
	scanf("%d", &number2);
 
	for (first = 1 ; first <= number1 ; first++){
		for (second = 1 ; second <= number2 ; second++){
			result = first * second;
			printf ("%4d ",result);
		}
		printf("\n");
	}


return 0;
}