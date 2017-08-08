#include <stdio.h>
#include <conio.h>

int void main(){

    int *mat1=0,*mat2=0,*ma3,b,c;
    int rows,cols;
    int * add(int *mat1,int *mat2,int rows,int cols);
    rows=cols=3;
    clrscr();
    printf("\nENTER VALUE FOR MATRIX 1:->");
    mat1=(int*) malloc(sizeof(int)*rows*cols);

    for(b=0;b<rows;b++){
	for(c=0;c<cols;c++){
            scanf("%d",mat1+b*cols+c);
        }
    }

    printf("\nENTER VALUE FOR MATRIX 2:->");
    mat2=(int*) malloc(sizeof(int)*rows*cols);
    for(b=0;b<rows;b++){
        for(c=0;c<cols;c++){
            scanf("%d",mat2+b*cols+c);
        }

    }

    ma3=(int*) malloc(sizeof(int)*rows*cols);
    ma3=add(mat1,mat2,rows,cols);
    printf("MATRIX ADDITION :->");
    for(b=0;b<rows;b++){
        for(c=0;c<cols;c++){
            printf("%d ",*(ma3+b*cols+c));
        }
    }

getch();

}

int * add(int *mat1,int *mat2,int rows,int cols)
{

    int *ma3=(int*) malloc(sizeof(int)*rows*cols);
    int b,c,k,a1;
    for(b=0;b<rows;b++){
        for(c=0;c<cols;c++){
            a1=*(mat1+b*cols+c)+*(mat2+b*cols+c);
            *(ma3+b*cols+c)=a1;
        }
    }

    return ma3;

}