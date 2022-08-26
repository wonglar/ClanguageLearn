#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
// 求字符串的长度（使用递归方式）

int my_strlen(char *str)
{
	if (*str)
	{
		return 1 + my_strlen(str + 1);
	}
	return 0;
}

int main()
{
	char arr[] = "hello";

	int len = my_strlen(arr);

	printf("len = %d\n", len);

	return 0;
}