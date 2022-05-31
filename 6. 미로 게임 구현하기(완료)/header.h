// ���� ���̵�C 15���� �ڵ��ѽñ�
//header.h

#pragma once
#ifndef HEADER
#define HEADER

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <conio.h>
#include <time.h>	// �ð� �Լ�

#define SIZE 19		// Maze�� ũ��
#define XP 40
#define YP 5
#define LEFT 75		// ���� ����Ű
#define RIGHT 77	// ������ ����Ű
#define UP 72		// �� ����Ű
#define DOWN 80		// �Ʒ� ����Ű
#define ARROW 224	// ����Ű ������

clock_t start, end;	// ����, ���� �ð�
float res;		// ��������?

void LoadMaze(char num);		// Maze �ҷ�����
void GotoXY(int x, int y);		// ������ ��ġ �ű��
void PrintMazeGame();			// Maze ����ϱ�
void CursorView(char show);		// Ŀ�� ���ֱ�
void MoveMaze(int* row, int* col);	// �÷��̾� �����̱�
int IsBlock(int i, int j);		// ���� �κ� ǥ���ϱ�
int IsFinish(int i, int j);		// ����Ǵ� �κ� ǥ���ϱ�
void Complete();				// ���� �� �޼��� ���

char maze[SIZE][SIZE];		// SIZExSIZE ũ���� Maze

#endif