// ���� ���̵� C 3������ �ڵ��ѽñ�
// header.h

#pragma once  // ����� ������ �� ���� �ε��Ѵٴ� �ǹ� (�׷� ifndef�� �� ���� ������ �𸣰���)
#ifndef HEADER
#define HEADER

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <conio.h>

#define SIZE 19
#define XP 40
#define YP 5
#define LEFT 75    // ����Ű��
#define RIGHT 77   // Ȯ��Ű(2����Ʈ)
#define UP 72      // �̰� ������
#define DOWN 80    // ������
#define ARROW 224  // �̰� ����Ű ��

void LoadMaze(char num);
void GotoXY(int x, int y);
void PrintMazeGame();
void CursorView(char show);
void MoveMaze(int* row, int* col);
int IsBlock(int i, int j);
int IsFinish(int i, int j);

char maze[SIZE][SIZE];

#endif