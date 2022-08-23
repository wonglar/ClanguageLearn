#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
/*
while循环

*/
// 在屏幕上打印1-10
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


// 死循环
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)   // ctrl+z读取结束
//	{
//		putchar(ch);
//	}
//	return 0;
//}


//int main()
//{
//	char pwd[20] = { 0 };
//	printf("请输入密码：>");
//	scanf("%s", pwd);
//	printf("请确认密码（Y/N）:>");
//
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	char pwd[20] = { 0 };
//	printf("请输入密码：>");
//	scanf("%s", pwd);
//	printf("请确认密码（Y/N）:>");
//	// 清理缓冲区
//	getchar(); // 处理\n
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	char pwd[20] = { 0 };
//	printf("请输入密码：>");
//	scanf("%s", pwd);
//	printf("请确认密码（Y/N）:>");
//	// 清理缓冲区
//	//getchar(); // 处理\n
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')  // 清理缓冲区中的多个字符
//	{
//		;
//	}
//
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//
//	return 0;
//}


// for循环

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}

// break
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//	}
//
//	return 0;
//}

// continue
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;	// 跳过本次循环continue后面的代码
//		printf("%d ", i);
//	}
//
//	return 0;
//}


// 一些for循环的变种 
// 变种1
//int main()
//{
//	// 死循环 - 判断部分省略，恒为真
//	for (;;)
//		printf("hello\n");
//
//	return 0;
//
//}


// 变种2
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hello\n");
//	}
//	return 0;
//}


// do while循环
/*
do
{
	循环体;
}while(表达式);

*/
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//		{
//			break;
//		}
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}


// 1 2 3 4 死循环
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}

