#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
// ���ַ����ĳ��ȣ�ʹ�õݹ鷽ʽ��

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