#include <stdio.h>
#include <stdlib.h>
typedef struct Employee Employee;

// 1. C Program to swap 2 integer values. (Swap function, calling by address)

/*
struct Employee
{
    int id;
    int salary;
};
*/



int main()
{
/*
    // 1. C Program that has Array of pointers to struct Employee. (Array of pointers to struct) Array size is 3

    int number_of_emp = 3;
    Employee *emp[number_of_emp];
    for (int i = 0; i < number_of_emp; i++)
    {
       emp[i] = (Employee *) malloc(1 * sizeof(Employee));
       printf("Enter the id of the employee : ");
       scanf("%d", &emp[i]->id);
       printf("Enter the salary of the employee : ");
       scanf("%d", &emp[i]->salary);
    }
    printf("The employee id is %d \n", emp[0]->id);
    printf("The employee salary is %d \n", emp[0]->salary);
    printf("ÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜ\ì\n");
    printf("The employee id is %d \n", emp[1]->id);
    printf("The employee salary is %d \n", emp[1]->salary);
    printf("ÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜ\ì\n");
    printf("The employee id is %d \n", emp[2]->id);
    printf("The employee salary is %d \n", emp[2]->salary);

*/

// 2. C Program to calculate sum of student degrees, and average of each subject, asks the user for students and subject numbers. (Dynamic Allocation of 2D Array - Pointer to Pointer)
/*
    int students, subjects;
    int sum, avg;
    printf("Enter the number of students : ");
    scanf("%d", &students);
    printf("Enter the number of subjects : ");
    scanf("%d", &subjects);

    int **arr = (int **) malloc(students * sizeof(int *));
    for (int i = 0; i < students; i++)
    {
        arr[i] = (int *) malloc(subjects * sizeof(int));
        sum = 0;

        for (int j = 0; j < subjects; j++)
        {

            printf("Enter the degree of subject %d for student number %d : ",j+1, i+1);
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }

        avg = sum / subjects;
        printf("The student number %d total degrees is %d and the average is %d \n", i+1, sum, avg);
        printf("ÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜ \n");

    }
*/


// Try to implement --jagged array-- on Assinment No.2 , which means: each student may have number of subjects different than the other.
//  and asks the user for each pointer size.


    int students, subjects,sum;
    float avg;
    printf("Enter the number of students : ");
    scanf("%d", &students);


    int **arr = (int **) malloc(students * sizeof(int *));
    for (int i = 0; i < students; i++)
    {
        printf("Enter the number of subjects for student number %d : ", i+1);
        scanf("%d", &subjects);

        arr[i] = (int *) malloc(subjects * sizeof(int));
        sum = 0;

        for (int j = 0; j < subjects; j++)
        {


            printf("Enter the degree of subject %d for student number %d : ",j+1, i+1);
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }

        avg = sum / subjects;
        printf("The student number %d total degrees is %d and the average is %f \n", i+1, sum, avg);
        printf("ÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜ \n");

    }


}
