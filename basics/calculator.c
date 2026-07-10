#include <stdio.h>
int choice;
char YN; 

int main()
{
    float num1, num2;
    while (1)
    {
        printf("\n1. addition\n");
        printf("2. subtraction\n");
        printf("3. multlipication\n");
        printf("4. division\n");
        printf("0. exit   \n");
        printf("Enter choice : ");
        scanf("%d", &choice);
        printf("\n");
        if (choice == 0)
        {
            printf("exiting...");
            break;
        }
        else if (choice > 4 || choice < 0)
        {
            printf("For calculation, only enter the choice given in the options!\n");
        }
        else
        {
            printf("Enter two numbers for selected operation: ");
            scanf("%f %f", &num1, &num2);
            switch (choice)
            {
            case 1:
                printf("Addition = %.2f", num1 + num2);
                break;
            case 2:
                printf("Subtraction = %.2f", num1 - num2);
                break;
            case 3:
                printf("multiplication = %.2f", num1 * num2);
                break;
            case 4:
                (num2 == 0) ? printf("Error..not divisible by zero !!") : printf("division = %.2f", num1 / num2);
                break;
            }
            printf("\n");
            printf("Do you want to continue ? (y/n) : ");
           scanf(" %c", &YN);    
           if (YN == 'n')
          { printf("exiting...");
           break;
          }
           else if (YN == 'y')
           continue;
        }
    
    }
}