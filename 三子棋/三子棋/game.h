#define _CRT_SECURE_NO_WARNINGS 1
#define sidelength 10 //控制棋盘边长,正方形棋盘
#define piece 10 //控制棋子数量

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu(); //菜单
void game(); //游戏执行
void Initboard(char board[sidelength][sidelength]); //初始化棋盘
void printboard(char board[sidelength][sidelength]); //打印棋盘
void player(char board[sidelength][sidelength]); //玩家下棋
void computer(char board[sidelength][sidelength]); //电脑下棋
int is_win(char board[sidelength][sidelength]); //判断输赢