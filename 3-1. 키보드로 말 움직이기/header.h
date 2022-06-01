/* 3-1 키보드로 말 움직이기 추가 */

// header.h

#ifndef HEADER
#define HEADER     //header파일 정의

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>    // 윈도우 함수 헤더파일

#define SIZE 19         // 매크로를 사용해 미로의 크기 정해두기 위함
#define XP 40
#define YP 5

void LoadMaze(char num);
void GotoXY(int x, int y);
void PrintMazeGame();
void CursorView(char show);

char maze[SIZE][SIZE];

#endif
