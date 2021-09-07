#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y, z;
	x = 10;
	y = 20;
	printf("%d %d", x, y);
	z = x;
	x = y;
	y = z; 
	printf("%d %d", y, x);
}