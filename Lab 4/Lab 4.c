#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define home 71
#define up 72
#define down 80
#define enter 13
#define extended -32
#define red 4
#define white 15

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


int main()
{
    // 1- C Program to take firstName and lastName from user, then displays fullName.
    /*
    char first_name[20];
    char last_name[20];
    printf("enter your first name : ");
    gets(first_name);
    printf("enter your last name : ");
    gets(last_name);
    char full_name[40];
    strcpy(full_name, first_name);
    strcat(full_name, " ");
    strcat(full_name, last_name);
    printf(full_name);
    */
    /*
    char first_name[20];
    char last_name[20];
    printf("enter your first name : ");
    gets(first_name);
    printf("enter your last name : ");
    gets(last_name);
    printf("The full name is %s %s", first_name, last_name);
    */


    // 2- C Program to Find the Frequency of Characters in a String
    /*
    char s[1000];
    int  i,j,k,count=0,n;

    printf("Enter  the string : ");
    gets(s);

    for(j=0;s[j];j++);
    n=j;
	printf(" frequency count character in string:\n");

    for(i=0;i<n;i++)
    {
     	count=1;
    	if(s[i])
    	{

 		  for(j=i+1;j<n;j++)
	      {

	        if(s[i]==s[j])
    	    {
                 count++;
                 s[j]='\0';
	     	}
	      }
	      printf(" '%c' = %d \n",s[i],count);



       }


 	}
    */




    // 3- C Program to take char and displays if it is "Normal or Extended key" along with its Ascii value.

    /*
    printf("Enter a character : ");
    char ch = getch();
    if (ch == extended)
    {
        ch = getch();
        printf("Extended key and its ascii code is %d", ch);
    }
    printf("Normal and its ascii code is %d", ch);
    */



    // 4- New Colored Menu "with Arrows"
/*
    int line = 1;
    int q = 0;

    do{

        switch(line)
        {
            case 1:
                system ("CLS");
                SetColor(red);
                printf("new \n");
                SetColor(white);
                printf("display \n");
                printf("exit\n");
                break;

            case 2:
                system ("CLS");
                printf("new \n");
                SetColor(red);
                printf("display \n");
                SetColor(white);
                printf("exit\n");
                break;

            case 3:
                system ("CLS");
                printf("new \n");
                printf("display \n");
                SetColor(red);
                printf("exit\n");
                SetColor(white);
                break;
        }

        char ch = getch();
        if (ch == extended)
        {
            ch = getch();
            switch(ch)
            {
                case up:
                    if (line == 1)
                    {
                        line = 3;
                    }
                    else
                    {
                        line--;
                    }
                    break;

                case down:
                    if (line == 3)
                    {
                        line = 1;
                    }
                    else
                    {
                        line++;
                    }
                    break;

                case home:
                    line = 1;
                    break;

                default:
                    printf("Press (Enter - Up - Down - Home)");
                    break;
            }

        }

        if (ch == enter)
        {
            if (line == 1)
            {
                line = 0;
                system ("CLS");
                printf("Create a new file\n");
            }
            else if(line == 2)
            {
                line = 0;
                system ("CLS");
                printf("Display the data \n");
            }
            else
            {
                system ("CLS");
                q = 1;
            }
        }
    }while(q != 1);

*/


    // 5- C Program to Copy String Without Using strcpy()

    /*
    char s1[] = "iti", s2[100], i;


    printf("string s1 : %s\n", s1);


    for (i = 0; s1[i] != '\0'; ++i) {

        s2[i] = s1[i];
    }

    s2[i] = '\0';


    printf("String s2 : %s", s2);

    return 0;
    */


    // 6- C Program to Find the Length of a String without Using strlen()
    /*
    {

    char text[100];
    int i,length=0;
    printf("Enter your text: ");
    scanf("%s",text);
    for(i=0; text[i]!='\0'; i++)
    {
        length++;
    }

    printf("Length of input string: %d",length);

     return 0;
}*/


}
