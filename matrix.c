#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<conio.h>

void matrix_addition(int** matrix1, int** matrix2, int** matrix3, int rows, int cols){
	int i,j;
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
	}
		}
}

int main(){
	int rows,cols,i,j;
	printf("Please enter the rows and columns of the matrix : ");
	scanf("%d %d",&rows,&cols);
	int** matrix1,**matrix2,**matrix3;
  
	//Allocate memory to the matrices
	matrix1 = (int**)malloc(sizeof(int*)*rows);
	matrix2 = (int**)malloc(sizeof(int*)*rows);
	matrix3 = (int**)malloc(sizeof(int*)*rows);
	for(i=0;i<rows;i++){
		matrix1[i] = (int*)malloc(sizeof(int)*cols);
		matrix2[i] = (int*)malloc(sizeof(int)*cols);
		matrix3[i] = (int*)malloc(sizeof(int)*cols);
	}

	printf("\nPlease enter the elements of the matrix 1 \n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("%d ",matrix1[i][j]);
		}
	printf("\n");
	}
  
	printf("\nPlease enter the elements of the matrix 2 \n");
		for(i=0;i<rows;i++){
			for(j=0;j<cols;j++){
				scanf("%d",&matrix2[i][j]);
			}
			printf("\n");
		}
  
	matrix_addition(matrix1,matrix2,matrix3,rows,cols);
  
	printf("Addition of the matrices gives the following matrix\n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("%d ",matrix3[i][j]);
		}
		printf("\n");
	}
  
return 0;
}