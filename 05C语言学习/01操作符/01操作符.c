#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//
//	// int a = 6 / 5;   // 1
//	//float a = 6 / 5; // a = 1.000000
//
//	float a = 6.0f / 5;	// a = 1.200000
//	printf("a = %f\n", a);
//
//	return 0;
//}


//int main()
//{
//	//int a = 7 % 3;
//	//printf("a = %d\n", a);  // 1
//
//
//	//int a = 7 % -3;
//	//printf("a = %d\n", a);  // 1
//
//	//int a = -7 % 3;
//	//printf("a = %d\n", a);  // -1
//
//
//
//	return 0;
//}

/*
	���Ʋ�����
	1����������
		�ұ߶�������߲�ԭ����λ
	2���߼�����
		�ұ߶�������߲�0
*/

// ��λ������
//int main()
//{
//	//int a = 3;
//	//int b = a << 3; // ��a�Ķ�����λ��������λ��
//
//	int a = 16;
//	int b = a >> 3;
//
//	printf("b = %d\n", b);
//
//	return 0; 
//}


// ��ǰ�����Ʋ�����ʹ�õ����������ƣ����λ������λ��
//int main()
//{
//	int a = -1;
//	printf("%d\n", a >> 1);
//	return 0;
//}

// ��
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	printf("c = %d\n", c);
//
//	return 0;
//}

// ��
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a | b;
//	printf("%d\n", c);
//	return 0;
//}


// ���:��ͬΪ0������Ϊ1
// ������ͬ��������0
// 0���κ�����򻹵������
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	printf("c = %d\n", c);
//	return 0;
//}




// ��������int������ֵ������ʹ�õ���������
//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	printf("a = %d, b= %d\n", a, b);
//
//
//}



// ��һ�������洢���ڴ��еĶ������е�1�ĸ���
//int main()
//{
//
//	return 0;
//}


//int main()
//{
//	int a = 13;
//	//00000000 00000000 00000000 00001101 ��13�Ķ�����λ�����������ĵ���λ���1
//	a = a | (1 << 4);
//	printf("a = %d\n", a);
//
//	// ��a�Ķ������еĵ���λ��Ϊ0
//	a = a & ~(1 << 4);
//	printf("a = %d\n", a);
//
//	return 0;
//}


// ��ֵ�����
//int main()
//{
//	// ������ֵ
//	int a = 10;
//	int x = 0;
//	int y = 20;
//	a = x = y + 1;
//
//	printf("a = %d, x = %d\n", a, x);
//	return 0;
//}


//int main()
//{
//	short s = 5;
//	int a = 10;
//
//	printf("%d\n", sizeof(s = a + 2));  // 2  sizeof�����зŵı��ʽ�ǲ���������ģ�
//	printf("%d\n", s); // 5
//
//	return 0;
//}



// ��һ�����Ķ�����λ����ȡ�� ~
//int main()
//{
//	int a = -1;  // 11111111 11111111 11111111 11111111
//
//	int b = ~a;
//
//	printf("%d\n", b);
//
//	return 0;
//}



// &ȡ��ַ������
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//
//	int* pa = &a;
//	printf("%p\n", pa);
//
//	*pa = 20;
//	printf("%d\n", a);
//
//	return 0;
//}



// (����) ǿ������ת��
//int main()
//{
//	int a = (int)3.14;
//
//	return 0;
//}




