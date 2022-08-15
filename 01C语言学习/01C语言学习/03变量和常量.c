#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	变量：在程序运行过程中可以改变的量
	常量：在程序运行过程中不可以改变的量

	变量的分类：
		局部变量
		全局变量
*/
//int main()
//{
//	// 创建一个变量
//	// 数据类型 变量名称;
//	int age = 20;
//	double weight = 60.0;
//	age = age + 1;
//	weight = weight + 5;
//
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//
//	return 0;
//}


// 全局变量
//int a = 100;
//int main()
//{
//	// 局部变量
//	// 当局部变量和全局变量名字冲突的时候，局部变量优先被使用
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//}

// 写一个代码求两个整数的和
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &b);
//	sum = a + b;
//	printf("sum = %d\n", sum);
//	return 0;
//}


// 变量的作用于和声明周期
// 全局变量的作用域是整个工程
//int g_val = 2022; // 全局变量
//
//int main()
//{
//	printf("%d\n", g_val);
//	{
//		int a = 10;
//		printf("%d\n", g_val);
//	}
//
//	//printf("a = %d\n", a);  // 无法使用变量a
//
//	printf("%d\n", g_val);
//	return 0;
//}

// 声明一个变量
//extern int g_val;
//
//int main()
//{
//
//	printf("%d\n", g_val);
//	return 0;
//}