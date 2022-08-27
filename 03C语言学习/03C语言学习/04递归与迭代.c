#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// 求n的阶乘(循环的方式)
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("ret = %d\n", ret);
//	return 0;
//}


// 求n的阶乘（递归方式实现）
//int Fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Fac(n-1);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//
//	printf("ret = %d\n", ret);
//	return 0;
//}



// 求第n个菲波那切数列（不考虑溢出）  递归方式实现  -- 效率比较低
//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n-2);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}


// 求第n个菲波那切数列（不考虑溢出）  循环方式实现  -- 效率比递归要高很多

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--; 
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}
