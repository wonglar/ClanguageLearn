#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�����������Ľϴ�ֵ
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


// дһ�������ж�һ�����ǲ�������
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
//		// �ж�i�Ƿ�Ϊ����
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


// дһ���������ж�һ���ǲ�������
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
//// дһ��������ʵ��������������Ķ��ֲ���
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 11; // Ҫ���ҵ�����
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binarySearch(arr, k, sz); // �ҵ��ˣ������±꣬δ�ҵ�����-1
//	printf("ret = %d\n", ret);  
//
//	return 0;
//}



// дһ��������ÿ����һ������������ͻὫnum����1

//void add(int *p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	// ���ú���
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



// ��������ʽ����
//int main()
//{
//
//	printf("%d", printf("%d", printf("%d", 43)));  // 4321   printf�����ķ���ֵ�Ǵ�ӡ����Ļ���ַ��ĸ���
//	return 0;
//}


// ���뾲̬��
// #pragma comment(lib,"��̬������")