#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	int ch=0;
//	while((ch = getchar()) !=EOF);
//	putchar(ch);
//	return 0;
//}
//int main() 
//{ int ch = 0;
//while ((ch = getchar()) != EOF)
//putchar(ch);
//return 0;
//}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

//int main()
//{
//	int a = 1;
//	int ret = 1;
//	int b = 1;
//	scanf("%d", &b);
//	for (a = 1; a <= b; a++)
//	{
//		ret = ret * a;
//
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//


//int main()//求1到输入数字的阶乘之和
//{
//	int i = 1;
//	int a = 1;
//	int m = 1;
//	int sum = 0;
//	scanf("%d", &a);
//	for (m = 1; m <= a; m++)
//	{
//		int n = 1;
//		for (i = 1; i <= m; i++)
//		{
//			n = n * i;
//		}
//		sum = sum + n;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int a = 1;
//	int i = 1;
//	scanf("%d", &a);
//	for (i = 1; i < sz; i++)
//	{
//		if (a == arr[i])
//			printf("找到了，其下标为%d\n", i);
//		else if (a >= sz)
//			printf("未找到\n");
//		break;
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "weicome to bit!!!";
//	char arr2[] = "#################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		printf("%s", arr2);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		Sleep(1000);
//		system("cls");
//	}
//	printf("welcome to bit!!!");
//
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 3, 4, 5, 6, 8, 9, 11, 13, 18, 19, 20 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int a = 1;
//	scanf("%d",&a);
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (a > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (a < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，其下标为%d", mid);
//			break;
//		}
//	}
//	if (left>right)
//		printf("未找到");
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码\n");
//			scanf("%s", &password);
//			if (strcmp(password, "123456") == 0)
//			{
//				printf("登录成功");
//				break;
//			}
//			else if (strcmp(password, "123456") != 0)
//			{
//				printf("输入错误，请重试\n");
//			}
//	}
//	if (i == 3)
//	{
//
//		printf("登陆失败");
//	}
//	return 0;
//}



//int main()
//{
//	int a = 1;
//	int b = 1;
//	int x = 1;
//	scanf("%d %d", &a,&b);
//	if (a > b)
//	{
//		if (a%b != 0)
//		{
//			x = a%b;
//			a = b;
//			b = x;
//		}
//	else
//			printf("最大公因数为%d\n", x);
//
//	}
//	else if (b > a)
//	{
//		if (b&a != 0)
//		{
//			x = b&a;
//			b = a;
//			a = x;
//		}
//		else
//			printf("最大公因数为%d\n", x);
//	}
//	return 0;
//}


//int main()//打印闰年
//{
//	int year = 0;
//	int count = 1;
//	for (year = 1000; year < 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d  %d\n", year, count);
//			count++;
//		}
//
//		else if (year % 400 == 0)
//		{
//			printf("%d  %d\n", year, count);
//			count++;
//		}
//
//	}
//	return 0;
//}


//int main()//求最大公约数
//{
//	int m = 1;
//	int n = 1;
//	scanf("%d %d", &m,&n);
//	int r = 0;
//	while (r=m%n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("最大公约数为%d\n", n);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int i = 2;
//	scanf("%d", &a);
//	for (i = 2; i < a; i++)
//	{
//		if (a%i == 0)
//		{
//			printf("%d是素数",a);
//			break;
//		}
//	}
//	if (i == a)
//	printf("%d不是素数", a);
//
//	return 0;
//
//}


//int main()
//{
//	int i = 1;
//	int flag = 1;
//	float sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = flag * 1.0/i + sum;
//		flag = -flag;
//		printf("%lf\n ", sum);
//	}
//	return 0;
//}

//

//int main()
//{
//	int i = 1;
//	int j = 1;
//	for (i = 1; i <= 19; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%-2d*%-2d=%-4d", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}




//int main()//猜数字游戏
//{
//	int i = 57;
//	int a = 1;
//	printf("猜数字游戏正式开始!");
//	Sleep(3000);
//	system("cls");
//	printf("你将有三次机会");
//	Sleep(3000);
//	system("cls");
//	printf("请准备！！！");
//	Sleep(3000);
//	system("cls");
//	printf("请输入你认为的数字");
//	scanf("%d", &a);
//	int b = 1;
//	for (b = 1; b < 3; b++)
//	{
//
//		if (a > i)
//		{
//			printf("你输入的数字大了，请再输入一个数字");
//			Sleep(1000);
//			system("cls");
//			scanf("%d", &a);
//		}
//		else if (a < i)
//		{
//			printf("你输入的数字小了，请再输入一个数字");
//			Sleep(1000);
//			system("cls");
//			scanf("%d", &a);
//		}
//		else if (a = i)
//		{
//			printf("输入正确，赢得比赛！！！");
//			break;
//		}
//	}
//	if (b = 3)
//	{
//		printf("你输了");
//	}
//	return 0;
//}



void menu()
	{
		printf("########################################\n");
		printf("############ 1.play   0.exit############\n");
		printf("########################################\n");
	}
void game()
{
	int ret = 0;
	ret = rand();
	int guess = 0;
	while (1)
	{
		printf("请猜数字");
		scanf("%d", &guess);
		if (ret>guess)
		{
			printf("猜小了，请继续\n");
		}
		else if (guess>ret) 
		{
			printf("猜大了，请继续\n");
		}
		else
		{
			printf("猜对了，恭喜\n");
			break;
		}

	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL)); //空指针、、srand是设置起点
	do
	{
		menu();
		printf("请选择：》");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("#########开始游戏######################\n");
			game();
			break;
		case 0:
			printf("#########退出游戏######################\n");
			break;
		default:
			printf("#########请重新选择####################\n");
			break;
		}
	} 
	while (input);
	return 0;
}

//int main()
//{
//	again:
//	printf("hello bit\n");
//	goto again;             
//	return 0;
//}

#include <stdlib.h>

//int main()
//{
//	char input[20] = { 0 };
//	system(shutdown - s - t);
//	return 0;
//}
#include <stdio.h>
#include <string.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "####";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}