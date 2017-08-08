#include <stdio.h>
 
int main()
{
  int a;
  int b;
  int c;
  int d;
  int e;
  int q; 
  int k;
  int sum = 0;

  int first[10][10];
  int second[10][10];
  int multiply[10][10];
 
  printf("Please enter the number of rows and columns of first matrix: \n");
  scanf("%d%d", &a, &b);
  printf("Please enter the elements of first matrix:\n");
 
  for (c=0; c<a; c++)
    for (d=0; d<b; d++)
      scanf("%d", &first[c][d]);
 
  printf("Please enter the number of rows and columns of second matrix\n");
  scanf("%d%d", &e, &q);
 
  if (b != e)
    printf("Matrices with entered dimensions can't be multiplied with each other.\n");
  else
  {
    printf("Please enter the elements of second matrix\n");
 
    for (c=0; c<e; c++)
      for (d=0; d<q; d++)
        scanf("%d", &second[c][d]);
 
    for (c=0; c<a; c++){
      for (d=0; d<q; d++){
        for (k=0; k<e; k++){
          sum = sum + first[c][k]*second[k][d];
        }
 
        multiply[c][d] = sum;
        sum = 0;
      }
    }
 
    printf("Product of entered matrices:-\n");
 
    for (c=0; c<a; c++){
      for (d=0; d<q; d++)
        printf("%d\t", multiply[c][d]);
 
      printf("\n");
    }
  }
 
  return 0;
}