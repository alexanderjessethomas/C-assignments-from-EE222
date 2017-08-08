#include <stdio.h>
int main()
{
    int n;
    int range;
    int i;

    printf("Enter an integer to find multiplication table: ");
    scanf("%d",&n);
    printf("Enter range of multiplication table: ");
    scanf("%d",&range);
    for(i=1;i<=range;++i)
    {
        printf("%d * %d = %d\n", n, i, n*i);
    }
    return 0;
}