#include <stdio.h>
#include <math.h>
int main()
{
    // int arr[5]={1,2,3,4,5};
    // char arra[5] = {'a', 'b', 'c', 'd', 'e'};
    // for(int i=0;i<5;i++){
    //     printf("%c,",arra[i]);
    // }
    // printf("\n");

    // //derefrencing a pointer
    // int val = 10;
    // float valu=2.4;
    // int * ptr=&val;
    // float * ptrr=&valu;
    // printf("%d",*ptr);
    // printf(",%f",*ptrr);
    // printf("\n");
    // //2d array
    // int array[3][3]={1,2,3,4,5,6};
    //  for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         printf("%d,",array[i][j]);
    //     }
    // }

    // a
    //  int n;
    //  printf("Enter size of array:");
    //  scanf("%d", &n);
    //  int arr[n];
    //  int sum = 0;
    //  printf("Enter elements:\n", n);
    //  for(int i = 0; i < n; i++) {
    //      scanf("%d", &arr[i]);
    //      sum += arr[i];
    //  }

    // printf("Sum of all elements = %d\n", sum);

    // b
    //  int n, flag = 1;
    //  printf("Enter size of square matrix: ");
    //  scanf("%d", &n);

    // int a[n][n];
    // printf("Enter matrix:\n");
    // for(int i=0;i<n;i++)
    //     for(int j=0;j<n;j++)
    //         scanf("%d",&a[i][j]);

    // for(int i=0;i<n;i++) {
    //     for(int j=0;j<n;j++) {
    //         if(a[i][j] != -a[j][i]) {
    //             flag = 0;
    //             break;
    //         }
    //     }
    // }

    // if(flag==1){
    //     printf("Skew\n");
    // }
    // else{
    //     printf("Not Skew\n");
    // }

    // c
    //  int pos=0;
    //  int arr[]={1,2,3,4,5,6,7,8,9,99};
    //  for(int i=1;i<10;i++) {
    //      if(arr[i] > arr[pos]){
    //          pos = i;
    //      }
    //  }

    // printf("Largest element at position %d\n", pos);
    // can be done using bubble sort
    // d

    int stud[10][3] = {
        {85, 90, 78}, // student 1
        {88, 76, 92}, // student 2
        {90, 85, 80}, // student 3
        {70, 75, 68}, // student 4
        {95, 88, 84}, // student 5
        {60, 65, 70}, // student 6
        {82, 89, 91}, // student 7
        {77, 72, 69}, // student 8
        {93, 95, 97}, // student 9
        {85, 80, 79}  // student 10
    };

    float avg;
    int sum;
    printf("Average marks for 10 students are as follows:\n");
    for (int i = 0; i < 10; i++){
        sum = 0; 
        for (int j = 0; j < 3; j++){
            sum += stud[i][j];
        }
        avg = (float)sum / 3; 
        printf("Student %d: %f\n", (i + 1), avg);
    }

    return 0;
}