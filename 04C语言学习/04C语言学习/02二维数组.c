#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	// 不完全初始化
//	int arr[3][4] = { 1,2,3,4,5,6,7 };
//	
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));  // 行
//	printf("%d\n", sizeof(arr[0]) / sizeof(arr[0][0])); // 列
//
//	return 0;
//}

//int main()
//{
//	//int arr[3][4] = { {1,2}, {3, 4}, {5, 6} };
//
//	// 行可以省略，列不可以省略
//	int arr[3][4] = { 1, 2, 3, 4};
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


// 数组在内存中是连续存放的