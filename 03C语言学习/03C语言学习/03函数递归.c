#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main()
//{
//	printf("hello\n");
//
//	// �Լ������Լ�
//	main();
//	return 0;
//}



//void print(unsigned int num)
//{
//	if (num > 9)
//	{
//		print(num / 10);
//	}
//	printf("%d ", num % 10);
//}
//
//
//// ����һ���޷�������ֵ������˳���ӡ����ÿһλ��1234 ��ӡ 1 2 3 4
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//
//	print(num);
//
//	return 0;
//}


// ��д������������ʱ���������ַ�������

// ��ʽһʵ�� -- ��������ĿҪ��
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

int my_strlen(char *str)
{
	if (*str)
	{
		return 1 + my_strlen(str + 1);
	}
	else
	{
		return 0;
	}
}
int main()
{
	char ch[] = "hello";
	printf("%d\n", my_strlen(ch));
	return 0;
}