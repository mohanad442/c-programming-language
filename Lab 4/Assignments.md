# Day 4:
=====

Answer the following questions:
--------------------------------

## 1- C Program to take firstName and lastName from user, then displays fullName.

## 2- C Program to Find the Frequency of Characters in a String

## 3- C Program to take char and displays if it is "Normal or Extended key" along with its Ascii value.
 
## 4- New Colored Menu "with Arrows"



# Answer "as much as you can" from the following:
------------------------------------------------

## 5- C Program to Copy String Without Using strcpy()

## 6- C Program to Find the Length of a String without Using strlen()

## 7- C Program to Remove all Characters in a String Except Alphabet


------------------------------------------------------------------------------

#include<windows.h>

COORD coord={0,0};                   // this is global variable
                                    //center of axis is set to the top left cornor of the screen
 void gotoxy(int x,int y)
 {
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }


void SetColor(int ForgC)
 {
    WORD wColor;

    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
    return;
}