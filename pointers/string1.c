#include <stdio.h>
#include <string.h>
 
int main()
{
   char a[100];
   int length;
 
   printf("Enter a string to calculate it's length\n");
   gets(a);
 
   length = string_length(a);
 
   printf("Length of entered string is = %d\n",length);
 
   return 0;
}
int string_length(char *s)
{
   int c = 0;
 
   while(*(s+c))
      c++;
 
   return c;
}