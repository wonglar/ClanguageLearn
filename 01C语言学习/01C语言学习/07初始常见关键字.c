#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*
 C�����ṩ�Ĺؼ���
 1��C�����ṩ�ģ������Լ������ؼ���
 2�������������ǹؼ���
	
	�ؼ���auto�����Զ��ģ�Ĭ�ϵľֲ���������auto�ģ���������ʡ�Ե���ÿ���ֲ���������auto���ε�

	register �Ĵ����ؼ��֣����������������ǽ���ŵ��Ĵ����У��� register int num = 10;
*/


// typedef ���Ͷ��壨�����ض��壩

//typedef unsigned int u_int;
//int main()
//{
//	//unsigned int num1 = 100;  // �˴���ȼ�����һ�д���
//	u_int num2 = 100;
//
//
//
//	return 0;
//}


// �ؼ���static
// 1��static���ξֲ�����	static ���ξֲ��������ı��˾ֲ��������������ڣ��������Ǹı��˱����Ĵ洢���ͣ�
// 2��static����ȫ�ֱ���
// 3��static���κ���
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}


// ����
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}


// ��������
//extern int add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}