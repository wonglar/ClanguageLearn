#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// 打印乘法表
//void print(n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %d\t", j, i, j * i);
//		}
//		printf("\n");
//	}
//}
//int main()
//{	
//	int n = 0;
//	scanf("%d", &n);
//
//	print(n);
//}

//int my_strlen(char *str)
//{
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//// 字符串逆序(不能使用库函数)
//#include <string.h>
//void reverse_string(char *str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//
//	while (left < right)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//	
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}




//int my_strlen(char *str)
//{
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

// 字符串逆序(使用递归方式实现)
//void reverse_string(char *str)
//{
//	char tmp = *str;
//	int len = my_strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str + 1) >= 2)
//	{
//		reverse_string(str + 1);
//	}
//	*(str + len - 1) = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}




// 计算一个数的每位之和（递归实现）
//int DigitSum(int num)
//{
//	if (num > 9)
//	{
//		return DigitSum(num / 10) + num % 10;
//	}
//	return num;
//
//}
//int main()
//{
//	int num = 10215;
//	int sum = DigitSum(num);
//	printf("sum = %d\n", sum);
//	return 0;
//}



// 递归实现n的k次方
double Pow(int n, int k)
{
	if (k > 0)
	{
		return n * Pow(n, k - 1);
	}
	else if (k < 0)
	{
		return 1.0 / (Pow(n, -k));
	}
	else
	{
		return 1;
	}
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	double ret = Pow(n, k);

	printf("ret = %lf\n", ret);
	return 0;
}