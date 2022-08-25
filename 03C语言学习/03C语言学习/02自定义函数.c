#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//求两个整数的较大值
//int get_max(int a, int b)
//{
//	return a > b ? a : b;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}


// 写一个函数判断一个数是不是素数
//#include <math.h>
//int isPrime(int num)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(num); i++)
//	{
//		if (num % i == 0)
//			return 0;
//	}
//
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		// 判断i是否为素数
//		if (isPrime(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//
//	printf("\ncount = %d", count);
//	return 0;
//}


// 写一个函数来判断一年是不是闰年
//int isLeapYear(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (isLeapYear(y) == 1)
//		{
//			count++;
//			printf("%d ", y);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


//int binarySearch(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//// 写一个函数，实现整型有序数组的二分查找
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 11; // 要查找的内容
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binarySearch(arr, k, sz); // 找到了，返回下标，未找到返回-1
//	printf("ret = %d\n", ret);  
//
//	return 0;
//}



// 写一个函数，每调用一个这个函数，就会将num增加1

//void add(int *p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	// 调用函数
//	add(&num);
//	printf("%d\n", num);
//
//	add(&num);
//	printf("%d\n", num);
//
//	add(&num);
//	printf("%d\n", num);
//	return 0;
//}



// 函数的链式访问
//int main()
//{
//
//	printf("%d", printf("%d", printf("%d", 43)));  // 4321   printf函数的返回值是打印在屏幕上字符的个数
//	return 0;
//}


// 导入静态库
// #pragma comment(lib,"静态库名称")