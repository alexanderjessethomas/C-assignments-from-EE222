#include<stdio.h>
#include<conio.h>

void main()

{

int i=0;

char *s1,*s2,*s3;

clrscr();

printf("\nEnter string1");

scanf("%s",s1);

printf("\nEnter string2");

scanf("%s",s2);

printf("\nBefore concatenation:\n");

printf("%s\n",s1);

printf("%s\n",s2);

while(*s1){

      s3[i++]=*s1++;

}

while(*s2){

      s3[i++]=*s2++;

}

s3[i]='\0';

printf("After concatenation:\n");

printf(s3);

getch();

}