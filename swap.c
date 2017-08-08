
#include <stdio.h>


void swap1(int*, int*);
void naive(num1, num2);

int main()
{

  int num1, num2;


  printf("Enter the value of number1: ");
  scanf("%d",&num1);
  printf("Enter the value of number2: ");

  scanf("%d",&num2);
  printf("\nBefore Swapping\n number1 = %d\n number2 = %d\n", num1,num2);
  

  swap1(&num1, &num2);
  printf("\nAfter Swapping\n number1 = %d\n number2 = %d\n", num1,num2);

  printf("\nNaive Swap:");
  naive(num1, num2);
  printf("\nAfter Swapping\n number1 = %d\n number2 = %d\n", num1,num2);
  return 0;
}

void swap1(int *n1, int *n2)
{
   int temp;
   temp = *n2;
   *n2   = *n1;
   *n1   = temp;  
}

void naive(num1, num2){
	int a = num1;
	int b = num2;
	int temp = a;
	a = b;
	b = temp;
}