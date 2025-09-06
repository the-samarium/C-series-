#include <stdio.h>
#include <string.h>
#include "fn.h"
int main()
{
    /*Stores multiple students’ records persistently in a file.(binary .dat file acting as a single database)
    Generates a report card for a specific student on request.*/
    int choice;
    while (1)
    {
        printf("\n===== Student Report Card System =====\n");
        printf("1. Add Student\n");
        printf("2. Generate Report by Roll No\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            addStudent();
        }
        else if (choice == 2)
        {
            int roll;
            printf("Enter Roll No: ");
            scanf("%d", &roll);
            generateReport(roll);
        }
        else if (choice == 3)
        {
            printf("Exiting...\n");
            break;
        }
        else
        {
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}