# Day2:
=====

## Answer the following questions:
--------------------------------

1- C Program to Check Whether a Number is Even or Odd

2- C Program to Find the Largest Number Among Three Numbers

3- C Program that takes the degree from user, and switch on it to print the corresponding Grade:
A => Excellent
B => Very Good
C => Good
D => fair
E => failed

4- C Program to print total of numbers when it gets to 100. (sum)

5- C Program to display simple menu. (menu)


## Answer "as much as you can" from the following:
------------------------------------------------

6- C Program to Generate Multiplication Table "1*3=3, 2*3=6, ..."
7- C Program to Check Whether a Character is an Alphabet or not
8- C Program to count number of Alphabets & number of words in a sentence. (word count) (required)
9- C Program to display "MagicBox"

function of x and y
-------------------
#include<windows.h>

COORD coord={0,0};                   // this is global variable
                                    //center of axis is set to the top left cornor of the screen
 void gotoxy(int x,int y)
 {
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }



