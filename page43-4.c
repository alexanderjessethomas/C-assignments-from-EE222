#include <stdio.h>

int main(void)
{
	int x = 2;
	printf("The value for x is %d.", x);

	int y = 4;
	printf("The value for y is %d.", y);
	y %= x;

	printf("The value for x is %d, The value for y is %d.", x,y);

return (0);
}