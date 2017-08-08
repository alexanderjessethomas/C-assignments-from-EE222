#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int x;
	int a;
	int b;
	
	printf("This is a random number generator. \n");
	printf("Please enter the minimum limit for this generator: ");
	scanf("%i", &b);
	printf("Please enter the maximum limit for this generator: ");
	scanf("%i", &a);
	
	if (a < b){
		printf("\n\nYour maximum limit must be greater than you minimum limit.\nPlease try again. \n\n");
		main();
	}
	else{
		srand(time(NULL));

		for(x = 1; x<=10; x++){
			printf(" %d\n", rand() %  ((a-b + 1) + b));
		}

		return 0; 
	}
	
}