#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <iostream>
#include <string>
#include <io.h>
#include <conio.h>
#include <Windows.h>
#include <list> 
#include <iomanip>
#include <map>
#include <vector>
#include <string>
#include <string.h>
using namespace std;

enum class Keys
{
    NOSET,

    LEFT = 75,
    RIGHT = 77,
    TOP = 72,
    DOWN = 80,
    ESC = 27,
    SPACE = 32,
    ENTER = 13,

};
enum ConsoleColor
{
    Black, Blue, Green, Cyan, Red, Magenta, Brown, LightGray, DarkGray,
    LightBlue, LightGreen, LightCyan, LightRed, LightMagenta, Yellow, White
};
void show(map <string, vector<string>>& _capitals);
void GotoXY(int X, int Y);
void SetColor(int text);
void wait_enter();
void find_country(map <string, vector<string>>& _capitals);
void find_capital(map <string, vector<string>>& _capitals);
int menu(map <string, vector<string>>& _capitals);
