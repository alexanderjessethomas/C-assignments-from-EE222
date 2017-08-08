#include <stdio.h>
#include <stdbool.h>

bool check_puzzle(int sPuzzle[][9]){
	int i;
	int j;
	int k;
	bool outcome = false;

	// checks rows and columns 
	for(i = 0; i < 9; i++){
		if(sPuzzle[i][0]+sPuzzle[i][1]+sPuzzle[i][2]+sPuzzle[i][3]+sPuzzle[i][4]+sPuzzle[i][5]+sPuzzle[i][6]+sPuzzle[i][7]+sPuzzle[i][8]==45 && sPuzzle[0][i]+sPuzzle[1][i]+sPuzzle[2][i]+sPuzzle[3][i]+sPuzzle[4][i]+sPuzzle[5][i]+sPuzzle[6][i]+sPuzzle[7][i]+sPuzzle[8][i]==45){
			outcome = true;
		}
		else{
			outcome = false;
		}
	}
	
	// checks submatrices
	if(sPuzzle[0][0]+sPuzzle[0][1]+sPuzzle[0][2]+sPuzzle[1][0]+sPuzzle[1][1]+sPuzzle[1][2]+sPuzzle[2][0]+sPuzzle[2][1]+sPuzzle[2][2] == 45){
		if(sPuzzle[3][0]+sPuzzle[3][1]+sPuzzle[3][2]+sPuzzle[4][0]+sPuzzle[4][1]+sPuzzle[4][2]+sPuzzle[5][0]+sPuzzle[5][1]+sPuzzle[5][2] == 45){
			if(sPuzzle[6][0]+sPuzzle[6][1]+sPuzzle[6][2]+sPuzzle[7][0]+sPuzzle[7][1]+sPuzzle[7][2]+sPuzzle[8][0]+sPuzzle[8][1]+sPuzzle[8][2] == 45){
				if(sPuzzle[0][3]+sPuzzle[0][4]+sPuzzle[0][5]+sPuzzle[1][3]+sPuzzle[1][4]+sPuzzle[1][5]+sPuzzle[2][3]+sPuzzle[2][4]+sPuzzle[2][5] == 45){
					if(sPuzzle[3][3]+sPuzzle[3][4]+sPuzzle[3][5]+sPuzzle[4][3]+sPuzzle[4][4]+sPuzzle[4][5]+sPuzzle[5][3]+sPuzzle[5][4]+sPuzzle[5][5] == 45){
						if(sPuzzle[6][3]+sPuzzle[6][4]+sPuzzle[6][5]+sPuzzle[7][3]+sPuzzle[7][4]+sPuzzle[7][5]+sPuzzle[8][3]+sPuzzle[8][4]+sPuzzle[8][5] == 45){
							if(sPuzzle[0][6]+sPuzzle[0][7]+sPuzzle[0][8]+sPuzzle[1][6]+sPuzzle[1][7]+sPuzzle[1][8]+sPuzzle[2][6]+sPuzzle[2][7]+sPuzzle[2][8] == 45){
								if(sPuzzle[3][6]+sPuzzle[3][7]+sPuzzle[3][8]+sPuzzle[4][6]+sPuzzle[4][7]+sPuzzle[4][8]+sPuzzle[5][6]+sPuzzle[5][7]+sPuzzle[5][8] == 45){
									if(sPuzzle[6][6]+sPuzzle[6][7]+sPuzzle[6][8]+sPuzzle[7][6]+sPuzzle[7][7]+sPuzzle[7][8]+sPuzzle[8][6]+sPuzzle[8][7]+sPuzzle[8][8] == 45){
										outcome = true;
									}else{
										outcome = false;
									}
								}else{
									outcome = false;
								}
							}else{
								outcome = false;
							}	
						}else{
							outcome = false;
						}
					}else{
						outcome = false;
					}
				}else{
					outcome = false;
				}
			}else{
				outcome = false;
			}
		}else{
			outcome = false;
		}
	}else{
		outcome = false;
	}


	

	return outcome;  

	

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

		
		
		if(check_puzzle(sPuzzle) == true){
			printf("The solution for the sudoku puzzle is valid.");		
		}
		else{
			printf("The solution for the sudoku puzzle is invalid.");
		}
	
	}// end else
return 0;
}


