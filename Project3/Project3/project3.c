#define _CRT_SECURE_NO_WARNINGS 1



#include <stdio.h>
#include <string.h>

int main()
{
	int line =0;
	printf("加入我们\n");

	while (line < 20000)
	{
		printf("请输入代码 %d\n", line);
		line++;
	}
	if (line >= 20000)
		printf("谢谢\n");
	return 0;
}