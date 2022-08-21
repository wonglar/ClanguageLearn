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


int main()
{
	char pwd[20] = { 0 };
	printf("请输入密码：>");
	scanf("%s", pwd);
	printf("请确认密码（Y/N）:>");
	// 清理缓冲区
	//getchar(); // 处理\n
	int tmp = 0;
	while ((tmp = getchar()) != '\n')  // 清理缓冲区中的多个字符
	{
		;
	}

	int ch = getchar();
	if (ch == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("确认失败\n");
	}

	return 0;
}