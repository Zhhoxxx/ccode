#define _CRT_SECURE_NO_WARNINGS 1
#define sidelength 10 //�������̱߳�,����������
#define piece 10 //������������

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu(); //�˵�
void game(); //��Ϸִ��
void Initboard(char board[sidelength][sidelength]); //��ʼ������
void printboard(char board[sidelength][sidelength]); //��ӡ����
void player(char board[sidelength][sidelength]); //�������
void computer(char board[sidelength][sidelength]); //��������
int is_win(char board[sidelength][sidelength]); //�ж���Ӯ