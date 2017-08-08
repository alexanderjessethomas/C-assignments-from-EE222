#include <stdio.h>

int check_puzzle(int sPuzzle[][9]){
	int i;
	int j;
	int outcome;

	for(i = 0; i < 9; i++){
		if(sPuzzle[i][0]+sPuzzle[i][1]+sPuzzle[i][2]+sPuzzle[i][3]+sPuzzle[i][4]+sPuzzle[i][5]+sPuzzle[i][6]+sPuzzle[i][7]+sPuzzle[i][6]+sPuzzle[i][7]+

	}

}



int main(void){

	//reads in the puzzle  and prints it. 
	int i;
	int j;
	int sPuzzle[9][9];
	FILE *inp = fopen("sudoku.txt", "r");
	if (inp == NULL){
		printf("Unable to find file. \n");
	}else{
		for (i = 0; i < 9; i++){
			for(j = 0; j < 9; j++){
				fscanf(inp, "%d", &sPuzzle[i][j]);
			}// end nested for loop 
		}// end first for loop


		//printing the board 

		for (i = 0; i < 9; i++){
				printf("\n\n");
				for(j = 0; j < 9; j++){
					printf("%d ", sPuzzle[i][j]);
				}
		}
	
	}// end else


	

}