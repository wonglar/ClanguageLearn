#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// ����n�Ľ׳�
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


// ����n�Ľ׳�
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
//// ����1!+2!+3!+....+10!
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


// ����1!+2!+3!+....+10!
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
//	// �Ľ�
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



// ���ֲ���
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;  // Ҫ���ҵ�����
//	int sz = sizeof(arr) / sizeof(arr[0]); // ���ֵ�Ԫ�ظ���
//	int left = 0;	// ���±�
//	int right = sz - 1;	// ���±�
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
//			printf("�ҵ��ˣ�%d\n", mid);
//			break;
//		}
//	}
//
//	if (left > right)
//	{
//		printf("δ�ҵ���\n");
//	}
//
//	return 0;
//}


// ��д���룬��ʾ����ַ��������ƶ������м���
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
//		printf("���������룺>");
//		scanf("%s", pwd);
//		if (strcmp(pwd, "123456") == 0)
//		{
//			printf("��¼�ɹ���\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//		
//	}
//
//	if (i == 3)
//		printf("��������������˳�����\n");
//
//	return 0;
//}
