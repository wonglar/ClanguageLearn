#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main()
//{
//	printf("hello\n");
//
//	// 自己调用自己
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
//// 接收一个无符号整型值，按照顺序打印它的每一位如1234 打印 1 2 3 4
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//
//	print(num);
//
//	return 0;
//}


// 编写函数不创建临时变量，求字符串长度

// 方式一实现 -- 不符合题目要求
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