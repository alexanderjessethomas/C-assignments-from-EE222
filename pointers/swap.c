//Header file section
#include <stdio.h>

//Function prototype using pointers
void swap(int*, int*);

//main method
int main()
{
//Declare variables
   int num1, num2;

//Prompt and read input from the user
printf("Enter the value of number1: ");
scanf("%d",&num1);
  printf("Enter the value of number2: ");

scanf("%d",&num2);
  printf("\nBefore Swapping\n number1 = %d\n number2 = %d\n", num1,num2);
  
//Call the function
swap(&num1, &num2);
printf("\nAfter Swapping\n number1 = %d\n number2 = %d\n", num1,num2);
  return 0;
}
//Function defintion of swap pointer method
void swap(int *n1, int *n2)
{
   int temp;
   temp = *n2;
   *n2   = *n1;
   *n1   = temp;  
}