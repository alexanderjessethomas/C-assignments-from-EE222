#include <stdio.h>
 
int main()
{
   char string[100];
   char blanks[100];
   int a = 0;
   int b = 0;
 
   printf("Enter some text\n");
   gets(string);
 
   while (string[a] != '\0')
   {
      if (!(string[a] == ' ' && string[a+1] == ' ')) {
        blanks[b] = string[a];
        b++;
      }
      a++;
   }
 
   blanks[b] = '\0';
 
   printf("Text after removing blanks\n%s\n", blanks);
 
   return 0;
}
