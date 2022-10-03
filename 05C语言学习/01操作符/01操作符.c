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
	右移操作符
	1、算数右移
		右边丢弃，左边补原符号位
	2、逻辑右移
		右边丢弃，左边补0
*/

// 移位操作符
//int main()
//{
//	//int a = 3;
//	//int b = a << 3; // 把a的二进制位向左移三位。
//
//	int a = 16;
//	int b = a >> 3;
//
//	printf("b = %d\n", b);
//
//	return 0; 
//}


// 当前的右移操作符使用的是算数右移（最高位补符号位）
//int main()
//{
//	int a = -1;
//	printf("%d\n", a >> 1);
//	return 0;
//}

// 与
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	printf("c = %d\n", c);
//
//	return 0;
//}

// 或
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a | b;
//	printf("%d\n", c);
//	return 0;
//}


// 异或:相同为0，相异为1
// 两个相同的数异或得0
// 0和任何数异或还得这个数
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	printf("c = %d\n", c);
//	return 0;
//}




// 交换两个int变量的值，不能使用第三个变量
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



// 求一个整数存储在内存中的二进制中的1的个数
//int main()
//{
//
//	return 0;
//}


//int main()
//{
//	int a = 13;
//	//00000000 00000000 00000000 00001101 将13的二进制位从左往右数的第五位变成1
//	a = a | (1 << 4);
//	printf("a = %d\n", a);
//
//	// 把a的二进制中的第五位置为0
//	a = a & ~(1 << 4);
//	printf("a = %d\n", a);
//
//	return 0;
//}


// 赋值运算符
//int main()
//{
//	// 连续赋值
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
//	printf("%d\n", sizeof(s = a + 2));  // 2  sizeof括号中放的表达式是不参与运算的！
//	printf("%d\n", s); // 5
//
//	return 0;
//}



// 对一个数的二进制位进行取反 ~
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



// &取地址操作符
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



// (类型) 强制类型转换
//int main()
//{
//	int a = (int)3.14;
//
//	return 0;
//}




