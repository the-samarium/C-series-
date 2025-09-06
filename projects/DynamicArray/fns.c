#include <stdio.h>
#include <stdlib.h>

// Function to search for an element
int Search(int k, int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == k) {
            return i; // return index if found
        }
    }
    return -1; // not found
}



// Function to delete the last element
int deleteLast(int arr[], int *size) {
    if (*size == 0) {
        return 0;
    }
    (*size)--; // reduce size
    return 1;
}

// Function to add element at the end (append)
void addLast(int *arr, int *size, int *capacity, int value) {
    if (*size == *capacity) {
        *capacity = (*capacity == 0) ? 2 : (*capacity * 2);
        arr = realloc(arr, (*capacity) * sizeof(int));
        if (arr == NULL) {
            printf("Memory allocation failed!\n");
            exit(1);
        }
    }
    arr[*size] = value;
    (*size)++;
    printf("Added %d at the end.\n", value);
}

// Function to display array
void Display(int arr[], int size) {
    if (size == 0) {
        printf("List is empty!\n");
        return;
    }
    printf("List contents: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
