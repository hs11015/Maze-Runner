// header.h

#pragma once  // 선언된 파일을 한 번만 로딩한다는 의미 (그럼 ifndef랑 왜 같이 쓰는지 모르겠음)
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
#define LEFT 75    // 방향키는
#define RIGHT 77   // 확장키(2바이트)
#define UP 72      // 이게 각자의
#define DOWN 80    // 고유값
#define ARROW 224  // 이건 방향키 값

void LoadMaze(char num);
void GotoXY(int x, int y);
void PrintMazeGame();
void CursorView(char show);
void MoveMaze(int* row, int* col);
int IsBlock(int i, int j);
int IsFinish(int i, int j);

char maze[SIZE][SIZE];

#endif
