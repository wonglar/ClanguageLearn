#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// ָ��+-����
// ָ��-ָ��
// ָ��Ĺ�ϵ����


//int main()
//{
//	int arr[10] = {0};
//
//	int* p = arr;
//	int* pend = arr + 9;
//	while (p <= pend)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//
//	return 0;
//}

//
//// ָ��-ָ��
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	printf("%d\n", &arr[9] - &arr[0]);   // ָ��-ָ��=��ָ��֮��Ԫ�صĸ���
//	return 0;
//}

// ��������ʽ
//int my_strlen(char* p)
//{
//	int count = 0;
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}

// ָ��-ָ�뷽ʽ
int my_strlen(char *p)
{
	char* start = p;
	while (*p != '\0')
	{
		p++;
	}
	return p - start;
}

int main()
{
	int len = my_strlen("abc");
	printf("len = %d\n", len);

	return 0;
}