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


int main()
{
	char pwd[20] = { 0 };
	printf("���������룺>");
	scanf("%s", pwd);
	printf("��ȷ�����루Y/N��:>");
	// ��������
	//getchar(); // ����\n
	int tmp = 0;
	while ((tmp = getchar()) != '\n')  // ���������еĶ���ַ�
	{
		;
	}

	int ch = getchar();
	if (ch == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("ȷ��ʧ��\n");
	}

	return 0;
}