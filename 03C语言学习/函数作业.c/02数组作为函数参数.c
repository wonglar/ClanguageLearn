#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// ��������ʲô��
// ��������������Ԫ�صĵ�ַ
// ����������
// 1��sizeof(������) ��ʾ������������-���������������Ĵ�С��λ���ֽ�
// 2��&������	ȡ��������������Ĵ�С
//int main()
//{
//	int arr[10] = {0};
//	printf("%p\n", &arr[0]);
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//	printf("===============================\n");
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr + 1);
//	return 0;
//}


//// ð������
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//
//
//	return 0;
//}



// ð������-�Ż�
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		// flag��ʶ����flag = 1����ʶ�����Ѿ�����
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag)
//			break;
//	}
//}
//int main()
//{
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//
//
//	return 0;
//}



