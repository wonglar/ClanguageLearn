#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
1、字面常量	3.14	10	'a'	 "abcd"
2、const修饰的常变量
3、#define 定义的标识符常量
4、枚举常量-可以一一列举的常量
*/

//#define MAX 100
//int main()
//{
//	const int num = 10;  // num就是常变量--具有常属性，本质还是个变量，只是无法修改其值
//	// num = 20;  // 报错
//
//	int arr1[10] = {0};
//
//	// int arr2[num] = {0};  // 报错
//
//	#define MIN 1	// 也可以定义在函数里
//
//	//MAX = 1000; // 错误
//	//int arr2[MAX] = { 0 };  // 可以
//	int n = MAX;
//	printf("n = %d\n", n);
//
//	return 0;
//}


// 性别
//enum Sex
//{
//	// 枚举类型的变量未来的可能取值
//	// 枚举常量
//	MALE,  // 这里可以进行赋初值 MALE = 3, 
//	FEMALE,
//	SECRET
//};
//int main()
//{
//
//	enum Sex s = MALE;
//	//MALE = 4;  // error
//	printf("%d\n", s);		// 0
//	printf("%d\n", FEMALE);		// 1
//	printf("%d\n", SECRET);		// 2
//
//	return 0;
//}
