#define _CRT_SECURE_NO_WARNINGS 1



#include <stdio.h>
#include <string.h>

int main()
{
	int line =0;
	printf("��������\n");

	while (line < 20000)
	{
		printf("��������� %d\n", line);
		line++;
	}
	if (line >= 20000)
		printf("лл\n");
	return 0;
}