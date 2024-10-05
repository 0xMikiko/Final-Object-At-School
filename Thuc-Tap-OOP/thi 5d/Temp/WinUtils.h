#pragma once
#include<iostream>
#include<conio.h>
#include <windows.h>
#define normalColor  7  			
#define focusColor	 112

void Highlight(int line, int focus, int mcolor, int hcolor);
void TextColor (int color);
void gotoxy(int x, int y);
void hidecursor(bool appear);
void fullscreen();
void TextColor (int color)
{
	
//    static int __BACKGROUND;

    HANDLE h = GetStdHandle ( STD_OUTPUT_HANDLE );
    FlushConsoleInputBuffer(h);
    SetConsoleTextAttribute (h,color);
//    CONSOLE_SCREEN_BUFFER_INFO csbiInfo;
//
//
//    GetConsoleScreenBufferInfo(h, &csbiInfo);
//
//    SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),
//                             color + (__BACKGROUND << 4));
}

void gotoxy(int x, int y)
{
  static HANDLE h = NULL;  
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c ;
  c.X = x; c.Y = y; 
  SetConsoleCursorPosition(h,c);
}

void hidecursor(bool appear)
{
   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 100;
   info.bVisible = !appear;
   SetConsoleCursorInfo(consoleHandle, &info);
}

void Highlight(int line, int focus, int mcolor, int hcolor){
	if((line+1) == focus)
		TextColor(hcolor);
	else
		TextColor(mcolor);
}



void fullscreen(){
	ShowWindow(GetConsoleWindow(),SW_MAXIMIZE);
	SendMessage(GetConsoleWindow(),WM_SYSKEYDOWN,VK_RETURN,0x20000000);
}

string StringNormalize(string name)
{
	

	string ans = " "; // Them dau  ' ' o dau 
	for(int i = 0 ;i <name.length(); i++)
	{
		if (ans[ans.length()-1] != ' ')  ans = ans + (char)tolower(name[i]); // Viet  thuong 
		else {
			if (name[i] == ' ') continue;
			ans =ans + (char)toupper(name[i]); // Viet hoa 
		}
	}
	if (ans[ans.length()-1] == ' ') ans.erase(ans.length()-1, 1);
	ans.erase(0,1); // Xoa ki tu ' ' o dau
	return ans;
}

