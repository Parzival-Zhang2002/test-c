#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <time.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "####";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '***', 2);
//	printf("%s\n", arr);
//	return 0;
//	printf("%d\n", main);
//}



//void swap(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d" " b=%d\n", a, b);
//	swap(a, b);
//	printf("a=%d" " b=%d\n", a, b);
//
//	return 0;
//}

#include <stdio.h>


//void swap(int* pa, int* pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(&a ,&b);
//	printf("a=%d   b=%d\n", a,b);
//	return 0;
//}



//int max(x, y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 1;
//	int b = 1;
//	scanf("%d %d", &a, &b);
//	int findmax = max(a, b);
//	printf("%d", findmax);
//	return 0;
//}



//int isprime(int m)
//{
//	int a = 1;
//	for (a = 1; a < m; a++)
//	{
//		if (m%a == 0)
//		{
//			return 0;
//		}
//	}
//	if (a == m)
//		return 1;
//}
//int main()
//{
//	int i = 1;
//	scanf("%d", &i);
//	if (isprime(i) == 1)
//	{
//		printf("该数%d是素数", i);
//	}
//	else
//	{
//		printf("该数%d不是素数", i);
//	}
//
//	return 0;
//}




//int run(int x)
//{
//	if ((x%4==0&&x%100!=0)||x%400==0)//注意逻辑运算符&&和||不要弄混
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int year = 1;
//	for (year = 1; year <= 2000; year++)
//	{
//		if (run(year))
//		{
//			printf("%d为闰年\n",year);
//		}
//		else
//		{
//			printf("%d不是闰年\n",year);
//		}
//	}
//	return 0;
//}


//void middle(int arr[],int a)
//{
//	int left = 0;
//	int sz = sizeof (arr) / sizeof (arr[ 0 ]);
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < a)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>a)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid]==a)
//		{
//			printf("找到了，其下角标为%d", mid);
//			break;
//		}
//	}
//		if (left > right)
//		{
//			printf("未找到，数列中不存在%d\n", a);
//		}
//
//
//}
//int main()
//{
//	int arr1[] = { 1, 3, 5, 6, 8, 12, 15, 24, 46, 59, 80 };
//	int k = 1;
//	printf("请输入数字\n");
//	scanf("%d", &k);
//	middle(arr1,k);
//	return 0;
//}


//void binary_search(int x, int y,int arr[])
//{
//	int left = 0;
//	int right = x - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < y)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > y)
//		{
//			right = mid - 1;
//
//		}
//		else
//		{
//			printf("找到了，其下标为%d\n", mid);
//			break;
//
//		}
//	}
//	if (left > right)
//	{
//		printf("数列中没有%d\n", y);
//	}
//}
//
//
//int main()
//{
//	int arr[] = { 1, 3, 5, 7, 8, 54, 78, 90, 94, 96, 99 };
//	int sz = sizeof(arr) / arr[0];
//	int k = 1;
//	printf("请输入数字\n");
//	scanf("%d", &k);
//	binary_search(sz, k ,arr);
//	return 0;
//}


//void add(int* a)
//{
//	(*a)++;
//}
//int main()
//{
//	int num = 0;
//	while (1)
//	{
//		add(&num);
//		printf("num=%d", num);
//	}
//	return 0;
//}


//int main()
//{
//	printf("%d",printf("%d", 43));
//	return 0;
//}

//int main()
//{
//	printf("hehe\n");
//	main();//函数的递归
//	return 0;
//}



//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}




//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d\n", n % 10);
//}
//
//
//int main()
//{
//	int a = 1;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}
int main()
{
	char arr[] = "hello bit";

	return 0;

}