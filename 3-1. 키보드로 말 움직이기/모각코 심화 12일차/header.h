/* ���� ���̵�C 3�� ���� �̷�ã�� �ǽ� 1 �ڵ��ѽñ� */

// header.h

#ifndef HEADER
#define HEADER     //header���� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>    // ������ �Լ� �������

#define SIZE 19         // ��ũ�θ� ����� �̷��� ũ�� ���صα� ����
#define XP 40
#define YP 5

void LoadMaze(char num);
void GotoXY(int x, int y);
void PrintMazeGame();
void CursorView(char show);

char maze[SIZE][SIZE];

#endif