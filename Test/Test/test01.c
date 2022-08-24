#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 二分查找
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 100; // 要查找的内容
	int sz = sizeof(arr) / sizeof(arr[0]); // 数组元素个数
	int left = 0;
	int right = sz - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("要找的内容不存在！\n");
	}

	return 0;
}