#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// ��������
// �����з�������˵����λ������λ
// �����޷�������˵����λ��0
//int main()
//{
//	char c = 1;
//	printf("%d\n", sizeof(c));    // 1
//	printf("%d\n", sizeof(+c));   // 4
//	printf("%d\n", sizeof(-c));   // 4
//
//	return 0;
//}

int main()
{
	int c = 3;
	printf("%d\n", c + --c);
	return 0;
}