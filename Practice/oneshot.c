#include <stdio.h>
#include <math.h>






int main()
{

    // double a = 9.9999;
    // printf("%f", a);

    // int x, y, z;
    // printf("Enter three numbers:\n");
    // scanf("%d%d%d", &x, &y, &z);

    // float avg = (x + y + z) / 3.0;
    // printf("Average is %f", avg);
    int arr[] = {-1, 11, 0, -32, 1};
    int n = 5;
    int mini = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] < mini)
        {
            mini = arr[i];
        }
    }
    printf("%d\n", mini);

    int x;

    do
    {
        printf("Enter an integer:\n");
        scanf("%d", &x);
    } while (x % 2 == 0); // keep looping while x is even

    printf("You entered an odd number: %d\n", x);
    

    //finding factorial
    int y;
    printf("Enter an integer:\n");
    scanf("%d", &x);
    int fact=1;
    while(y>0){
        fact*=y;
        y--;
    }
    printf("Factorial of entered number: %d\n", fact);
    return 0;
}