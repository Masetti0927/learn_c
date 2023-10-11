#include<stdio.h>
void max(int x, int y)
{
	if (x > y)
		printf("%d", x);
	else
		printf("%d", y);
}
void main()
{
	max(3, 5);
}