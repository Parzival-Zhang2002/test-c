#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//
//
//int main()
//{
//	printf("请输入数字(一到十）\n");
//	int key = 0;
//	scanf("%d", &key);
//	int a = 1;
//	char arr1[] = {"                                     "};
//	char arr2[] = {"0 9 8 7 6 5 4 3 2 1 2 3 4 5 6 7 8 9 0"};
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	int mid = (left + right-1) / 2;
//	static int middle = 18;
//	left = middle;
//	right = middle;
//	arr1[18] = arr2[18];
//	while (a <= key)
//	{
//		printf("%s\n", arr1);
//
//		left = left - 2;
//		right = right +2;
//		arr1[mid] = arr2[mid];
//		arr1[left] = arr2[left];
//		arr1[right] = arr2[right];
//
//		if (a == key)
//		{
//			break;
//		}
//		a++;
//
//	}
//	return 0;
//}


#include <stdio.h>

//int Fac(x)
//{
//	int i = 1;
//	int j = 1;
//	while (i < x)
//	{
//		j = j*(i + 1);
//		i++;
//	}
//	return j;
//}
//int Fac2(int x)
//{
//
//	if (x > 1)
//	{
//		return x*Fac2(x - 1);
//	}
//	else if (x<=1)
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Fac2(n);
//	int a = Fac2;
//	printf("%d", a);
//	return 0;
//}

//斐波那契数列算法
//int fib(x)
//{
//	int m = 1;
//	int n = 1;
//	int z = 2;
//	int count = 3;
//	while (count <= x)
//	{
//		z = m + n;
//		m = n;
//		n = z;
//		count++;
//	}
//	return z;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int k = fib(a);
//	printf("%d\n", k);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < len; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//		return 0;
//}

//int main()
//{
//	int arr[][5] = { { 1, 2, 3 ,4}, { 5,6 } };
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("%d", arr[i][j]);
//
//		}
//		printf("\n");
//	}
//	return 0;
//}

//bubble_sort(int arr[], int sz)
//{
//	for (int i = 0; i < sz - 1; i++)//表示进行一趟冒泡排序
//	{
//		int flag = 1;
//		for (int j = 0; j <sz-1-i ; j++)//表示每一趟冒泡进行的步骤
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//}
//
//
//
//int main()
//{
//	int arr[] = { 3, 5, 8, 2, 1, 9, 0, 4, 7, 6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (int i = 0; i <= sz - 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

int main()
{
	int arr[40] = { 0 };
	int m;
	int n;
	int p = 0;
	scanf("%d", &n);
	m = n;
	for (int i = 0; i < n; i++)
	{
		arr[i] = 1;

	}
	for (int i = 0;; i++)
	{
		if (i == n)
		{
			i = 0;
		}
		if (arr[i] == 1)
		{
			p++;
		}
		else
			continue;
		if (p % 3 == 0)
		{
			arr[i] = 0;
			m--;
		}
		if (m == 1)
			break;
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == 1)
			printf("%d\n", i + 1);
	}
	return 0;

}