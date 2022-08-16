#define _CRT_SECURE_NO_WARNINGS

//int g_val = 2023;  // 全局变量在整个工程中都可以使用

// 全局变量
//static int g_val = 2022;  // static修饰全局变量，使得这个全局变量只能在自己所在的源文件内部可以使用。

// static 修饰函数
// static修饰函数使得函数只能在自己算在源文件内部访问，不能再其他源文件内部使用
static int add(int x, int y)
{
	return x + y;
}