#include <stdio.h>
// To change the age by 1 in struct using pointers.
typedef struct employee
{
    char name[20];
    int age;
    int id;
} Employee;

void PrintEmployee(Employee emp)
{
    printf("Name: %s\nAge: %d\nid: %d",emp.name,emp.age,emp.id);
}
void increaseAge1(Employee *emp)
{
    emp->age += 1; // (*emp).age += 1 is also correct!!
}
int main()
{
    Employee employee = {"harsha",18,1234};

    PrintEmployee(employee);
    increaseAge1(&employee);
    printf("\n\n");
    PrintEmployee(employee);
    printf("\n");
    return 0;
}
