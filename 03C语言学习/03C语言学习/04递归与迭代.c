#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// ��n�Ľ׳�(ѭ���ķ�ʽ)
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


// ��n�Ľ׳ˣ��ݹ鷽ʽʵ�֣�
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



// ���n���Ʋ��������У������������  �ݹ鷽ʽʵ��  -- Ч�ʱȽϵ�
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


// ���n���Ʋ��������У������������  ѭ����ʽʵ��  -- Ч�ʱȵݹ�Ҫ�ߺܶ�

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
