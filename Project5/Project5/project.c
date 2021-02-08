#include <stdio.h>

int main()
{
	int a = 20;
	int b = 30;
	int c;
	c = a;
	a = b;
	b = c;
	printf("%d\n   %d\n", a, b);
	return 0;

}