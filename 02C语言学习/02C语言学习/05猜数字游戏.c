#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
// ��������Ϸ
// �Զ�����1-100֮��������
// �¶��ˣ���ϲ�㣬��Ϸ����
// �´��ˣ��������´��˻��ǲ�С�ˣ������£�ֱ���¶ԣ�
//#include <stdlib.h>
//#include <time.h>
//void game()
//{
//	// ���������
//	int ret = rand() % 100 + 1;  //����1-100�������
//
//	// ������
//	int guess = 0;
//	while (1)
//	{
//		printf("������֣�>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�����¶���\n");
//			break;
//		}
//	}
//
//}
//
//
//void menu()
//{
//	printf("*******************************\n");
//	printf("*********    1.play     *******\n");
//	printf("*********    0.exit     *******\n");
//	printf("*******************************\n");
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//			break;
//		}
//
//	} while (input);
//
//	return 0;
//}