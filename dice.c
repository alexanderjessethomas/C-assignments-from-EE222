#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define diceSides 6

 int main(void){ 
	srand(time(NULL));
 	int diceSide[diceSides]={1};

	
 	int i;
	int rolls;   
   
	
	printf("Enter number of times you wish to roll the dice: ");
	scanf("%d",&rolls);

	
	for (i = 0; i < rolls; i++) {
   		diceSide[rand() % diceSides]++;
	}

	
	printf("Sides\tNo of times\tPercentage\n");
	for (i = 1; i <= diceSides ; i++){
		int times=diceSide[i];
		printf("%d\t %d \t \t%d \n", i,times ,times*100/rolls);
 	}

	return 0;
	}
