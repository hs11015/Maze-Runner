/*���� ���̵�C 3�� ���� �̷�ã�� �ǽ� 1 �ڵ��ѽñ�*/

#ifndef HEADER
#define HEADER     //header���� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>    // ������ �Լ� �������
#define SIZE 19         // ��ũ�θ� ����� �̷��� ũ�� ���صα� ����

void LoadMaze(char num);
void GotoXY(int x, int y);
char maze[SIZE][SIZE];

#endif