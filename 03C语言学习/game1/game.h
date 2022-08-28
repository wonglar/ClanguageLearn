#pragma once
#include <stdio.h>

// 定义符号
#define ROW 3
#define COL 3

// 函数声明

// 初始化棋盘
void Initboard(char board[ROW][COL], int row, int col);

// 打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);