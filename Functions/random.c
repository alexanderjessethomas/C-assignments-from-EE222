#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int x;
	
	srand(time(NUll));

	for(x = 1; x<=10; x++){
		printf(" %d\n", rand() % 100 + 1);
	}

	return 0; 

}