#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// д���뽫�����������Ӵ�С���
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

// д�����ӡ1-100֮��3�ı���������
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



//	���������������������������Լ��
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	
//	// �������Լ������m��n�Ľ�Сֵ
//	int max = m > n ? n : m;
//
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("���Լ���ǣ�%d\n", max);
//			break;
//		}
//		max--;
//	}
//
//
//	return 0;
//}


// շת����������Լ��

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
//	printf("���Լ���ǣ�%d\n", n);
//
//	// ��С������ = m * n / ���Լ��
//
//	return 0;
//}



// ��ӡ1000-2000֮�������
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
//	printf("\n������%d\n", count);
//	return 0;
//}


// ��ӡ100-200֮�������
// ��������������ֻ�ܱ�1�ͱ�������
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

// ��ӡ100-200֮�������
// ��������������ֻ�ܱ�1�ͱ�������
// �Ż�1
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



// ��ӡ100-200֮�������
// ��������������ֻ�ܱ�1�ͱ�������
// �Ż�2
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