#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <string.h>


int main()
{
	int num1;
	int num2;
	int sum;
	scanf("%d%d", &num1, &num2);
	sum = num1 + num2;
	printf("sum=%d\n", sum);
	return 0;
}