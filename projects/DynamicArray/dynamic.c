#include <stdio.h>
#include <stdlib.h> //for malloc calloc
#include "fns.h"
/*Let user add numbers dynamically using malloc/realloc.
Print sum, average, min, max.
*/
int main()
{
    /*Dynamic memory is memory that is allocated after the program starts running. Allocation of dynamic memory can also be referred to as runtime memory allocation.
    Unlike with static memory, you have full control over how much memory is being used at any time. You can write code to determine how much memory you need and allocate it.
    Dynamic memory does not belong to a variable, it can only be accessed with pointers.*/

    int x;
    printf("Enter number of elements: ");
    scanf("%d", &x);

    int capacity = x; // track allocated capacity
    int *arrptr = calloc(x, sizeof(int)); // allocate memory for x integers
    if (arrptr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d integers:\n", x);
    for (int a = 0; a < x; a++)
    {
        scanf("%d", &arrptr[a]); // store values directly in array
    }

    printf("You entered: ");
    for (int a = 0; a < x; a++)
    {
        printf("%d ", arrptr[a]);
    }
    printf("\n");
    while (1)
    {

        int y = 0;
        printf("Select operation to perform:\n1.Add element\n2.Delete element\n3.Display\n4.Search\n5.Exit\n");
        scanf("%d", &y);
        switch (y)
        {
        case 1: // code
            {
                // take input m from user
                int m = 0;
                printf("Enter value to add: ");
                scanf("%d", &m);
                addLast(arrptr, &x, &capacity, m);
            }
            break;
        case 2: // code
            deleteLast(arrptr, &x);
            break;
        case 3: // code
            Display(arrptr, x);
            break;
        case 4: // code
            {
                int k = 0;
                printf("Enter value to search: ");
                scanf("%d", &k);
                int result = Search(k, arrptr, x);
                if (result != -1) {
                    printf("Value %d found at index %d\n", k, result);
                } else {
                    printf("Value %d not found\n", k);
                }
            }
            break;
        case 5:
            break;
        default:
            // code
            break;
        }
        if (y == 5)
        {
            printf("\nExiting...");
            break;
        }
    }

    free(arrptr); // free allocated memory
    return 0;
}