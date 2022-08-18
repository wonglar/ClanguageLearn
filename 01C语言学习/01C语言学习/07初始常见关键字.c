#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*
 C语言提供的关键字
 1、C语言提供的，不能自己创建关键字
 2、变量名不能是关键字
	
	关键字auto，是自动的，默认的局部变量都是auto的，基本都是省略掉；每个局部变量都是auto修饰的

	register 寄存器关键字，用它来创建变量是建议放到寄存器中，如 register int num = 10;
*/


// typedef 类型定义（类型重定义）

//typedef unsigned int u_int;
//int main()
//{
//	//unsigned int num1 = 100;  // 此代码等价于下一行代码
//	u_int num2 = 100;
//
//
//
//	return 0;
//}


// 关键字static
// 1、static修饰局部变量	static 修饰局部变量，改变了局部变量的生命周期（本质上是改变了变量的存储类型）
// 2、static修饰全局变量
// 3、static修饰函数
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


// 声明
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}


// 声明函数
//extern int add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}