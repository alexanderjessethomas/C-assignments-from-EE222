/*
 *Created by:
 *Alex Arbogast and Alex Thomas
 *group 17
 */
#include <stdio.h>

int main()
{
	char response;
	char status;
	int numTrys = 10;
	int max = 1000;
	int min = 1;
	int number = 512;
	int i;

	printf("Please think of a number between 1 and 1000. \n");

	for(i = 0; i <= numTrys; i++){
		if (i == 0 ){
			printf("The initial starting number is %i \n", number);
			printf("Please type y if that number is lower.\nPlease type n if that number is higher. \nPlease type c if that number is correct.\n");
		}
		else{
			printf("This is guess number %i, is you number %i?\n", i, number);
			printf("Please type y if that number is lower.\nPlease type n if that number is higher. \nPlease type c if that number is correct.\n");
		}
		printf("Please enter your answer: ");
		scanf("%c", &status);
		scanf("%c", &response);	
		

		if (status == 'y' || response == 'y'){
			max = number;
			number = ((max - min)/2) + min;
			if (number <= min){
				number = number - 1;
			}
			if ((max - min) == 2){
				number = min + 1;
			} 
		}
		else if (status == 'n' || response == 'n'){
			min = number;
			number = ((max - min)/2) + min; 
			if (number <= min){
				number = number + 1;
			}
			if ((max - min) == 2){
				number = min + 1;
			} 
		}
		else if (status == 'c' || response == 'c'){
			printf("I got your number. \n");
			printf("Goodbye");
			break;
		}
		else if (i == 11){
			break;
		}
	}
	

	return 0;
}	
