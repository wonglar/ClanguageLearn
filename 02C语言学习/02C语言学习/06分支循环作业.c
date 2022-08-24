#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 写代码将三个整数按从大到小输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//
//	if (a < c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//
//	if (b < c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//
//	printf("%d %d %d", a, b, c);
//
//	return 0;
//}

// 写代码打印1-100之间3的倍数的数字
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



//	给定两个数，求这两个数的最大公约数
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	
//	// 假设最大公约数就是m和n的较小值
//	int max = m > n ? n : m;
//
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("最大公约数是：%d\n", max);
//			break;
//		}
//		max--;
//	}
//
//
//	return 0;
//}


// 辗转相除法求最大公约数

//int main()
//{
//	int m = 0;
//	int n = 0;
//	int t = 0;
//	scanf("%d %d", &m, &n);
//	while (t = m % n)
//	{
//		m = n;
//		n = t;
//	}
//
//	printf("最大公约数是：%d\n", n);
//
//	// 最小公倍数 = m * n / 最大公约数
//
//	return 0;
//}



// 打印1000-2000之间的闰年
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//
//	printf("\n个数：%d\n", count);
//	return 0;
//}


// 打印100-200之间的素数
// 素数就是质数，只能被1和本身整除
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//
//		if (i == j)
//		{
//			count++;
//			printf("%d ", i);
//		}	
//	}
//
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}

// 打印100-200之间的素数
// 素数就是质数，只能被1和本身整除
// 优化1
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{ 
//				break;
//			}
//		}
//
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}



// 打印100-200之间的素数
// 素数就是质数，只能被1和本身整除
// 优化2
#include <math.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i+=2)
	{
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}

		if (j > sqrt(i))
		{
			count++;
			printf("%d ", i);
		}
	}

	printf("\ncount = %d\n", count);

	return 0;
}