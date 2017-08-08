#include <stdio.h>

int main()
{
	char grade = '\0';

	printf("Please enter the letter grade that you recieved: ");
	scanf("%c", &grade);

	if (grade == 'A' || grade == 'a'){
		printf("Very good!");
	}
	else if (grade == 'B' || grade == 'b'){
		printf("Good!");
	}
	else if (grade == 'C' || grade =='c'){
		printf("Okay!");
	}
	else if (grade == 'D' || grade =='d' || grade == 'F' || grade =='f'){
		printf("Doomed!");
	}
	else{
		printf("Error: Please enter a valid grade (A, B, C, D, F).");
		main();
	}
	
	return 0;
}
