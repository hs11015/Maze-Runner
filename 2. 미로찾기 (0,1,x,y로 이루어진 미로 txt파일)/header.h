/*2. 미로 찾기*/

#ifndef HEADER
#define HEADER     //header파일 정의

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>    // 윈도우 함수 헤더파일
#define SIZE 19         // 매크로를 사용해 미로의 크기 정해두기 위함

void LoadMaze(char num);
void GotoXY(int x, int y);
char maze[SIZE][SIZE];

#endif
