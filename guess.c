#include <stdio.h>

int main()
{
	
	int status;
	int numTrys = 10;
	int max = 1000;
	int min = 1;
	int number = 512;
	int i;


	for(i = 0; i <= numTrys; i++){
		printf("Please think of a number between 1 and 1000bre. \n");
		printf("The first guess is  %i \n", number);
		printf("Please type 1 if that number is lower.\nPlease type 2 if that number is higher. \nPlease type 3 if that number is correct.\n");
		printf("Please enter your answer: ");
		scanf("%i", &status);	

		if (status == 1){
			max = number;
			number = ((max - min)/2) + min;
			if (number <= min){
				number = number - 1;
			}
			if ((max - min) == 2){
				number = min + 1;
			} 
		}
		else if (status == 2){
			min = number;
			number = ((max - min)/2) + min; 
			if (number <= min){
				number = number + 1;
			}
			if ((max - min) == 2){
				number = min + 1;
			} 
		}
		else if (status == 3){
			printf("I got your number. \n");
			printf("Goodbye");
			break;
		}
	}
	

	return 0;
}	
