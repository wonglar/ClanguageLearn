#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
// 猜数字游戏
// 自动产生1-100之间的随机数
// 猜对了，恭喜你，游戏结束
// 猜错了，会告诉你猜大了还是猜小了，继续猜，直到猜对！
//#include <stdlib.h>
//#include <time.h>
//void game()
//{
//	// 生成随机数
//	int ret = rand() % 100 + 1;  //生成1-100的随机数
//
//	// 猜数字
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字：>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜您，猜对了\n");
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
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，请重新选择！\n");
//			break;
//		}
//
//	} while (input);
//
//	return 0;
//}