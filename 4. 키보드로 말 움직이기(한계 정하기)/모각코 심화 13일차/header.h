// ���� ���̵� C 3������ �ڵ��ѽñ�

// header.h

#ifndef HEADER
#define HEADER

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>

#define LEFT 75    // ����Ű��
#define RIGHT 77   // Ȯ��Ű(2����Ʈ)
#define UP 72      // �̰� ������
#define DOWN 80    // ������
#define ARROW 224  // �̰� ����Ű ��

void GotoXY(int x, int y);
void CursorView(char show);
void move_pointer();

#endif