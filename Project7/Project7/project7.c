#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int sum(int x,int y)
//{
//	int a = x + y;
//	return a;
//}
//int main()
//{
//	int m;
//	int n;
//	scanf("%d\n,%d\n", &m, &n);
//	int a = sum(m, n);
//	int* pb = a;
//	if (a > 100)
//
//		printf("%s\n", pb);
//	else
//		printf("a=%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a > 1 && a < 100)//此函数有问题！！！！！！！！！！
//	{
//		if (a % 2 == 1)
//			printf("%d\n", a);
//	}
//	else
//		printf("非奇数");
//	return 0;
//}
//
//int main()
//{
//	int a;
//	scanf("%d\n", &a);
//	if (a == 1)
//		printf("星期1\n");
//	else if (a == 2)
//		printf("2");
//	return 0;
//}
int main()
{
	int day;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("1\n");
		break;
	case 2:
		printf("2\n");
		break;
	case 3:
		printf("3\n");
		break;
	case 4:
		printf("4\n");
		break;
	case 5:
		printf("5\n");
		break;
	case 6:
		printf("6\n");
		break;
	case 7:
		printf("7\n");
		break;
	}
	return 0;
}