#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// 指针+-整数
// 指针-指针
// 指针的关系运算


//int main()
//{
//	int arr[10] = {0};
//
//	int* p = arr;
//	int* pend = arr + 9;
//	while (p <= pend)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//
//	return 0;
//}

//
//// 指针-指针
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	printf("%d\n", &arr[9] - &arr[0]);   // 指针-指针=两指针之间元素的个数
//	return 0;
//}

// 计数器方式
//int my_strlen(char* p)
//{
//	int count = 0;
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}

// 指针-指针方式
int my_strlen(char *p)
{
	char* start = p;
	while (*p != '\0')
	{
		p++;
	}
	return p - start;
}

int main()
{
	int len = my_strlen("abc");
	printf("len = %d\n", len);

	return 0;
}