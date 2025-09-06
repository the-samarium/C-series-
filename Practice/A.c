#include <stdio.h>
#include <math.h>
#include <string.h>
#include <strings.h>
//array with tables of a and b
void Array(int arr[][10], int a, int b) {
    for (int j = 0; j < 10; j++) {
        arr[0][j] = a * (j + 1);  
        arr[1][j] = b * (j + 1);  
    }
}

// Print 2D array
void Print2darray(int arr[][10], int rows, int cols) {
    printf("Array is:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d: ", i);
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}


void Findfreq(int n, int arr[], int size, int freq[100]) {

    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }

    printf("Frequencies:\n");
    for (int i = 0; i < 100; i++) {
        if (freq[i] > 0) {
            printf("%d occurs %d times\n", i, freq[i]);
        }
    }
}

int main() {
    // int arr[2][10];  
    // int arr2[]={1,2,3,3,3,4,5,6,7,7,7,8,9,9,9,0,0,0,0,32};
    // int freq[100]={0};
    // Array(arr, 2, 3); // table of 2 and 3
    // Print2darray(arr, 2, 10);
    // Findfreq(5,arr2,sizeof(arr2)/sizeof(arr2[0]),freq);

    //strings and character arrays
    char name[] = {'s','a','m','e','e','r','\0'};

    char name2[]="sameer";
    char* namep="sameer";

    char fname[100];
    printf("Enter your name : \n");
    scanf("%s",fname);
    printf("\n%s",fname);
    printf("\n%d",strlen(fname));
    printf("\n%s",strlwr(fname));
    printf("\n%s",strupr(fname));
    printf("\n%s",strrev(fname));

    char fullname[100];
    printf("\nEnter your FULL name : \n");
    gets(fullname);
    puts(fullname);
    return 0;
}
