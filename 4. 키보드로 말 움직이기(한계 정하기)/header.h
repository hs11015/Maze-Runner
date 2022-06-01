
// header.h

#ifndef HEADER
#define HEADER

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>

#define LEFT 75    // 방향키는
#define RIGHT 77   // 확장키(2바이트)
#define UP 72      // 이게 각자의
#define DOWN 80    // 고유값
#define ARROW 224  // 이건 방향키 값

void GotoXY(int x, int y);
void CursorView(char show);
void move_pointer();

#endif
