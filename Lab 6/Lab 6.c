#include <stdio.h>
#include <stdlib.h>
typedef struct line line;

// 1. C Program to swap 2 integer values. (Swap function, calling by address)

/*
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

*/


// 2. C Program that takes an array of integers and pass that array to a function to print array values after multiplying them to 10.
//    (try to use "Array Notation" and "Pointer notation")

/*
void multarray(int *arr)
{
    for (int i = 0; i < 6 ; i++)
    {
        // Array Notation

        // arr[i] = arr[i] * 10;
       // printf("%d , ", arr[i]);

        // Pointer notation

       *(arr + i) = *(arr + i) * 10;
        printf("%d , ", *(arr + i));

    }
}
*/

/*
struct line
{
    int x1;
    int x2;
    int y1;
    int y2;
};

void change_Position(struct line *L, int newX, int newY)
{
    L->x1 = newX;
    L->y1 = newY;
}
*/


//  4. C Program that asks the user for number of Lines he want "line is a struct, each line have 2 points",
//	then displays length of each one.(Dynamic Allocation of 1D Array of objects)

/*
struct line
{
    int x1;
    int x2;
    int y1;
    int y2;
};
*/



int main()
{
    // 1. C Program to swap 2 integer values. (Swap function, calling by address)
/*
    int num1, num2;
    printf("Enter your first number : ");
    scanf("%d", &num1);
    printf("Enter your second number : ");
    scanf("%d", &num2);
    printf("num1 = %d, num2 = %d \n\n", num1, num2);
    swap(&num1, &num2);
    printf("After swapping \n");
    printf("num1 = %d, num2 = %d", num1, num2);

*/



// 2. C Program that takes an array of integers and pass that array to a function to print array values after multiplying them to 10.
//    (try to use "Array Notation" and "Pointer notation")


/*
    int array[6] = {1,2,3,4,5,6};
    multarray(array);

*/

// 3. C Program have a function changes the position of the first point of a given line struct "each line have 2 points",
//    then inside main displays the new coordinates along with line Length. (Pointer to struct)
//  	function prototype should be like:

/*
    line L;
    printf("Enter x1 : ");
    scanf("%d", &L.x1);
    printf("Enter y1 : ");
    scanf("%d", &L.y1);
    printf("Enter x2 : ");
    scanf("%d", &L.x2);
    printf("Enter y2 : ");
    scanf("%d", &L.y2);

    int Line_lenght;
    Line_lenght = sqrt(pow((L.x2 - L.x1),2) + pow((L.y2 - L.y1), 2));


    printf("The coordinates of the line is : x1 = %d, y1 = %d, x2 = %d, y2 = %d \n", L.x1, L.y1, L.x2, L.y2);
    printf("The length of the line is : %d\n", Line_lenght);

    int Xnew, Ynew;
    printf("Enter new x1 : ");
    scanf("%d", &Xnew);
    printf("Enter new y1 : ");
    scanf("%d", &Ynew);

    change_Position(&L, Xnew, Ynew);

    Line_lenght = sqrt(pow((L.x2 - L.x1),2) + pow((L.y2 - L.y1), 2));


    printf("The new coordinates of the line is : x1 = %d, y1 = %d, x2 = %d, y2 = %d \n", L.x1, L.y1, L.x2, L.y2);
    printf("The new length of the line is : %d\n", Line_lenght);

*/


/*
//  4. C Program that asks the user for number of Lines he want "line is a struct, each line have 2 points",
//	then displays length of each one.(Dynamic Allocation of 1D Array of objects)

    int num_of_lines;
    printf("Enter the number of lines : ");
    scanf("%d", &num_of_lines);

    line *p = (line *) malloc(num_of_lines * sizeof(line));

    for (int i = 0; i < num_of_lines; i++)
    {
        printf("Enter x1 : ");
        scanf("%d", &p[i].x1);
        printf("Enter y1 : ");
        scanf("%d", &p[i].y1);
        printf("Enter x2 : ");
        scanf("%d", &p[i].x2);
        printf("Enter y2 : ");
        scanf("%d", &p[i].y2);

        int Line_lenght;
        Line_lenght = sqrt(pow((p[i].x2 - p[i].x1),2) + pow((p[i].y2 - p[i].y1), 2));


        printf("The coordinates of the line is : x1 = %d, y1 = %d, x2 = %d, y2 = %d \n", p[i].x1, p[i].y1, p[i].x2, p[i].y2);
        printf("The length of the line is : %d\n", Line_lenght);

    }

*/

}
