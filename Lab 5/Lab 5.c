#include <stdio.h>
#include <stdlib.h>
typedef struct Employee Employee;
typedef struct date date;
typedef struct Department Department;

// 1. write a function takes 3 numbers as parameter, and returns the largest one among them... write a program to test it.
/*
max(int x, int y, int z)
{
    if (x >= y && x >= z)
    {
        return x;
    }
    else if (y >= z)
    {
        return y;
    }
    else
    {
        return z;
    }
}
*/

// 2- C Program to take single Employee's information, and display them. (Emp_Struct)
/*
struct date
{
    int day;
    int month;
    int year;
};
struct Employee
{
    int id;
    char Name[20];
    int Salary;
    date birth;
};
*/

// 3- C Program to take information of Array of Employees, then display them. (EmpArr_of_Struct)
/*
struct date
{
    int day;
    int month;
    int year;
};
struct Employee
{
    int id;
    char Name[20];
    int Salary;
    date birth;
};
*/

// 4- Struct inside struct (Dept has Multiple Employees)
/*
struct Employee
{
    int id;
    char Name[20];
    int Salary;
};

struct Department
{
    int dept_id;
    Employee emp[6];
};
*/


// 5- try to divide Ass#2 into 2 functions: struct Employee AddEmployee(); void DisplayEmployee(struct Employee);

/*
struct date
{
    int day;
    int month;
    int year;
};
struct Employee
{
    int id;
    char Name[20];
    int Salary;
    date birth;
};


Employee emp;
void AddEmployee(id, name, salary, birth_day, birth_month, birth_year)
{
    emp.id = id;
    strcpy(emp.Name, name);
    emp.Salary = salary;
    emp.birth.day = birth_day;
    emp.birth.month = birth_month;
    emp.birth.year = birth_year;
}

void Display_Employee()
{
    printf("The Employee name is : %s\n", emp.Name);
    printf("The Employee id is : %d\n", emp.id);
    printf("The Employee salary is : %d\n", emp.Salary);
    printf("The Employee birthday is : %d - %d - %d\n", emp.birth.day, emp.birth.month, emp.birth.year);
}
*/




int main()
{
    // 1. write a function takes 3 numbers as parameter, and returns the largest one among them... write a program to test it.

    /*
    int largest_number = max(2,3,4);
    printf("The largest number is %d", largest_number);
    */


    // 2- C Program to take single Employee's information, and display them. (Emp_Struct)
    /*
    Employee emp;
    emp.id = 1;
    strcpy(emp.Name, "Mohanad");
    emp.Salary = 5000;
    emp.birth.day = 1;
    emp.birth.month = 7;
    emp.birth.year = 1997;

    printf("The Employee name is : %s\n", emp.Name);
    printf("The Employee id is : %d\n", emp.id);
    printf("The Employee salary is : %d\n", emp.Salary);
    printf("The Employee birthday is : %d - %d - %d\n", emp.birth.day, emp.birth.month, emp.birth.year);
    */


    // 3- C Program to take information of Array of Employees, then display them. (EmpArr_of_Struct)
    /*
    Employee emp[6];
    int id[6] = {0,1,2,3,4,5};
    char name[6][20] = {"mohanad", "ahmed", "islam", "mohamed", "youssef", "Ayman"};
    int salary[6] = {5000, 6000, 7000, 7000, 3000, 5500};
    int day[6] = {1, 23, 22, 4, 14, 2};
    int month[6] = {7, 2, 3, 4, 5, 6};
    int year[6] = {1997, 1998, 1996, 1994, 1995, 1990};

    for (int i = 0; i < 6; i++)
    {
        emp[i].id = id[i];
        strcpy(emp[i].Name, name[i]);
        emp[i].Salary = salary[i];
        emp[i].birth.day = day[i];
        emp[i].birth.month = month[i];
        emp[i].birth.year = year[i];

        printf("The Employee name is : %s\n", emp[i].Name);
        printf("The Employee id is : %d\n", emp[i].id);
        printf("The Employee salary is : %d\n", emp[i].Salary);
        printf("The Employee birthday is : %d - %d - %d\n", emp[i].birth.day, emp[i].birth.month, emp[i].birth.year);
        printf("\n\n");
    }
    */

    // 4- Struct inside struct (Dept has Multiple Employees)
    /*
    int max = 3;
    int j = 0;
    int id[6] = {0,1,2,3,4,5};
    char name[6][20] = {"mohanad", "ahmed", "islam", "mohamed", "youssef", "Ayman"};
    int salary[6] = {5000, 6000, 7000, 7000, 3000, 5500};
    int deptid[2] = {1,2};

    Department Dep[2];
    for (int i = 0; i< 2; i++)
    {
        Dep[i].dept_id = deptid[i];
        printf("The Department id is : %d\n", Dep[i].dept_id);
        printf("ÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜ\n");

        for (j ; j < max; j++)
        {
            Dep[i].emp[j].id = id[j];
            strcpy(Dep[i].emp[j].Name, name[j]);
            Dep[i].emp[j].Salary = salary[j];

            printf("The Employee name is : %s\n", Dep[i].emp[j].Name);
            printf("The Employee id is : %d\n", Dep[i].emp[j].id);
            printf("The Employee salary is : %d\n", Dep[i].emp[j].Salary);
            printf("\n\n");
        }
        max += 3;

    }
    */


    // 5- try to divide Ass#2 into 2 functions: struct Employee AddEmployee(); void DisplayEmployee(struct Employee);
/*
    int id = 1;
    char name[20] = "Mohanad";
    int salary = 5000;
    int birth_day = 1;
    int birth_month = 7;
    int birth_year = 1997;

    AddEmployee(id, name, salary, birth_day, birth_month, birth_year);
    Display_Employee();

*/
    return 0;
}
