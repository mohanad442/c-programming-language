#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    if(n%2 == 0)
    {
        printf("the number is even");
    }
    else
    {
        printf("the number is odd");
    }
    */


    /*
    int n1,n2,n3;
    printf("Enter three different numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 >= n2 && n1 >= n3)
        printf("%d is the largest number.", n1);

    else if (n2 >= n1 && n2 >= n3)
        printf("%d is the largest number.", n2);

    else
        printf("%d is the largest number.", n3);
*/


    /*
    char grade;
    printf("Enter your grade : ");
    scanf("%c", &grade);
    switch(grade)
    {
        case 'A':
            printf("Your grade is excellent");
            break;

        case 'B':
            printf("Your grade is Very Good");
            break;

        case 'C':
            printf("Your grade is Good");
            break;

        case 'D':
            printf("Your grade is Fair");
            break;

        case 'E':
            printf("Your grade is Failed");
            break;
        default:
            printf("Try to enter it again");
    }
    */


    /*
    int n;
    int sum = 0;
    while (sum<=100)
    {
        printf("Enter the number to be added : ");
        scanf("%d", &n);
        sum += n;
    }
    printf("the summation of the numbers is : %d", sum);
    */



    /*
    int n;
    do
    {
        printf(" 1 : Linear Equation\n 2: Quadratic Equation\n 3: Cubic Equation\n enter 0 to exit\n");
        printf("Enter the number of equation you want : ");
        scanf("%d", &n);
        system ("CLS");
        switch(n)
        {
            case 1:
                printf("The Linear Equation is : AX + B = 0\n\n");
                break;

            case 2:
                printf("The Quadratic Equation is : AX^2 + BX + C = 0\n\n");
                break;

            case 3:
                printf("The Cubic Equation is : AX^3 + BX^2 + CX + D\n\n");
                break;
            default:
                printf("Wrong number");
        }
    } while(n != 0);
    */


    /*
    int n;
    int counter;
    printf("Enter the number you want to get the multiplication table : ");
    scanf("%d", &n);
    for (counter = 1; counter <= 10 ; counter++)
    {
        printf("%d * %d = %d \n", n, counter, counter*n);
    }

    */



    /*
    char c;
    printf("Enter a character : ");
    scanf("%c", &c);
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        printf("The character is an alphabet");
    }
    else
    {
        printf("The character is not an alphabet");
    }

    */


    /*
    char text[100];
    printf("Enter a sentence : ");
    gets(text);
    int alp = 0;
    int i = 0;
    int words = 0;

    while (text[i] != '\0')
    {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
        {
            alp++;
        }
        if (text[i] == ' ' && text[i+1] != ' ')
        {
            words++;
        }
        i++;
    }
    printf("the number of alphabets is : %d \n", alp);
    printf("the number of words is : %d", words+1);
    */

    return 0;

}
