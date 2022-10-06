#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int a = 10;  // a占4个字节
//	int *pa = &a; // 拿到的是a的4个字节中第一个字节的地址
//	*pa = 20;
//
//	return 0;
//}


//int main()
//{
//	int *pa;
//	char *pc;
//	float *pf;
//	printf("%d\n", sizeof(pa)); // 4
//	printf("%d\n", sizeof(pc)); // 4
//	printf("%d\n", sizeof(pf)); // 4
//	return 0;
//}

// 指针类型的意义
// 1、指针类型决定了：指针解引用的权限有多大
// 2、指针类型决定了：指针走一步走多远（步长）

//int main()
//{
//
//	int arr[10] = {0};
//	int *p = arr;
//	char *pc = arr;
//	printf("%p\n", p);
//	printf("%p\n", p + 1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//
//
//	/*int a = 0x11223344;
//	char *pc = &a;
//	*pc = 0;*/
//	//int *pa = &a;
//	//*pa = 0;
//
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = {0};
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	return 0;
//}