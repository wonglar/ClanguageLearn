#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
/*
whileѭ��

*/
// ����Ļ�ϴ�ӡ1-10
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


// ��ѭ��
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)   // ctrl+z��ȡ����
//	{
//		putchar(ch);
//	}
//	return 0;
//}


//int main()
//{
//	char pwd[20] = { 0 };
//	printf("���������룺>");
//	scanf("%s", pwd);
//	printf("��ȷ�����루Y/N��:>");
//
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	char pwd[20] = { 0 };
//	printf("���������룺>");
//	scanf("%s", pwd);
//	printf("��ȷ�����루Y/N��:>");
//	// ��������
//	getchar(); // ����\n
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	char pwd[20] = { 0 };
//	printf("���������룺>");
//	scanf("%s", pwd);
//	printf("��ȷ�����루Y/N��:>");
//	// ��������
//	//getchar(); // ����\n
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')  // ���������еĶ���ַ�
//	{
//		;
//	}
//
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//
//	return 0;
//}


// forѭ��

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}

// break
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//	}
//
//	return 0;
//}

// continue
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;	// ��������ѭ��continue����Ĵ���
//		printf("%d ", i);
//	}
//
//	return 0;
//}


// һЩforѭ���ı��� 
// ����1
//int main()
//{
//	// ��ѭ�� - �жϲ���ʡ�ԣ���Ϊ��
//	for (;;)
//		printf("hello\n");
//
//	return 0;
//
//}


// ����2
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hello\n");
//	}
//	return 0;
//}


// do whileѭ��
/*
do
{
	ѭ����;
}while(���ʽ);

*/
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//		{
//			break;
//		}
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}


// 1 2 3 4 ��ѭ��
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}

