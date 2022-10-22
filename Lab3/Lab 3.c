#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int array[5];
    printf("Enter an array of 5 numbers \n");
    scanf("%d %d %d %d %d", &array[0], &array[1], &array[2], &array[3], &array[4]);
    printf("%d %d %d %d %d", array[0], array[1], array[2], array[3], array[4]);
    */



/*
    int array[5];
    int i;
    int max = 0;
    printf("Enter an array of 5 numbers \n");
    scanf("%d %d %d %d %d", &array[0], &array[1], &array[2], &array[3], &array[4]);
    for (i = 0; i<5 ; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }

    printf("maximum value of array elements is : %d", max);

*/

    /*
    #define rows 3
    #define cols 4

    int mat1[rows][cols] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int mat2[rows][cols] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int mat3[rows][cols];

    int row, col;
    for (row = 0; row < rows; row++)
    {
        for (col = 0; col < cols; col++)
        {
            mat3[row][col] = mat1[row][col] + mat2[row][col];
        }
        printf("%d %d %d %d \n", mat3[row][0], mat3[row][1], mat3[row][2], mat3[row][3]);
    }
    */


    /*
    #define rows 3
    #define cols 4

    float mat1[rows][cols] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int row, col;
    float sum = 0;
    for (row = 0; row < rows; row++)
    {
        for (col = 0; col < cols; col++)
        {
            sum += mat1[row][col];
        }

    }
    printf("Sum of 2D Array is : %f \n", sum);
    printf("Average of 2D Array is : %f \n", sum/(rows*cols));
    */
}
