#include <stdio.h>
#include <math.h>
//2
int arraySum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}
//3
void multiplyMatrices(int A[10][10], int B[10][10], int r1, int c1, int r2, int c2) {
    
    if (c1 != r2) {
        printf("Matrix multiplication not possible!\n");
        return;
    }

    int result[10][10] = {0}; 


    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

//Linear search
int LinearS(int arr[],int key,int n){
    
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
//Binary search: needs sorted array
int BinaryS(int arr[],int key, int n){
    int start =0;
    int end =n-1;
    while(start<end){
        int mid = (start+end)/2;
        if(key==mid){
            return mid;
        }
        else if(key>mid){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}

// Write a recursive C function to find the sum of individual digits of a given positive integer number.
int Fsum(int x){
    if(x == 0){
        return 0;
    }
    return (x % 10) + Fsum(x / 10);
}

// Write a C function that finds the reverse of a given number.
int Rev(int num){
    int original = num;
    int rev=0;
    while(original>0){
        rev=rev*10+original%10;
        original=original/10;
    }
    return rev;
}

// Write an iterative C function that finds the value of x^n. Get the values of x and n from the user. 
void Power(int x, int n){
    int p=pow(x,n);
    printf("%d",p);
}


int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum=arraySum(arr,n);
    printf("%d",sum);

     int A[10][10], B[10][10];
    int r1, c1, r2, c2;

    //   first matrix
    // printf("Enter rows and columns of first matrix: ");
    // scanf("%d %d", &r1, &c1);
    // printf("Enter elements of first matrix:\n");
    // for (int i = 0; i < r1; i++) {
    //     for (int j = 0; j < c1; j++) {
    //         scanf("%d", &A[i][j]);
    //     }
    // }

    // //  second matrix
    // printf("Enter rows and columns of second matrix: ");
    // scanf("%d %d", &r2, &c2);
    // printf("Enter elements of second matrix:\n");
    // for (int i = 0; i < r2; i++) {
    //     for (int j = 0; j < c2; j++) {
    //         scanf("%d", &B[i][j]);
    //     }
    // }

    
    // multiplyMatrices(A, B, r1, c1, r2, c2);


    printf("\nLinear search of element %d in array given :",0);
    int res=LinearS(arr,0,n);
    if(res==-1){
        printf("Element not present in array.");
    }
    else{
        printf("Element found at index %d", res);
    }


    int arr2[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr2)/sizeof(arr2[0]);
    printf("\nBinary search of element %d in array given :",0);
    int resu=BinaryS(arr2,0,size);
    if(resu==-1){
        printf("Element not present in array.");
    }
    else{
        printf("Element found at index %d", resu);
    }



    printf("\n%d",Fsum(110));
    printf("\n%d",Rev(12345));
    Fibo(10);
    Power(2,2);
    return 0;
}
