#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 计算n的阶乘
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//
//	printf("ret = %d\n", ret);
//
//
//	return 0;
//}


// 计算n的阶乘
//int getFac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	return ret;
//}
//
//// 计算1!+2!+3!+....+10!
//int main()
//{
//	int sum = 0;
//	int i = 0;
//	for (i = 1; i <= 4; i++)
//	{
//		sum += getFac(i);
//	}
//
//	printf("sum = %d\n", sum);
//
//	return 0;
//}


// 计算1!+2!+3!+....+10!
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	/*for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}*/
//
//	// 改进
//	for (n = 1; n <= 3; n++)
//	{
//		
//		ret *= n;
//		sum += ret;
//	}
//	
//	printf("sum = %d\n", sum);
//
//
//	return 0;
//}



// 二分查找
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;  // 要查找的数字
//	int sz = sizeof(arr) / sizeof(arr[0]); // 数字的元素个数
//	int left = 0;	// 左下标
//	int right = sz - 1;	// 右下标
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了：%d\n", mid);
//			break;
//		}
//	}
//
//	if (left > right)
//	{
//		printf("未找到！\n");
//	}
//
//	return 0;
//}


// 编写代码，演示多个字符从两端移动，向中间汇聚
//welcome to world!!!!!!
//######################
//#include <string.h>
//#include <windows.h>
//int main()
//{
//	char arr1[] = "welcome to world!!!!!!!";
//	char arr2[] = "#######################";
//
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		system("cls");
//		printf("%s\n", arr2);
//		Sleep(500);
//		left++;
//		right--;
//	}
//	return 0;
//}


//#include <string.h>
//int main()
//{
//	int i = 0;
//	char pwd[20] = { 0 };
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：>");
//		scanf("%s", pwd);
//		if (strcmp(pwd, "123456") == 0)
//		{
//			printf("登录成功！\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误！\n");
//		}
//		
//	}
//
//	if (i == 3)
//		printf("三次密码均错误！退出程序！\n");
//
//	return 0;
//}
