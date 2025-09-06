#include <stdio.h>
int main()
{
    // In C, you can create, open, read, and write to files by declaring a pointer of type FILE, and use the fopen() function:
    FILE *fptr;
    FILE *rptr; // pointers
    // fptr = fopen(filename, mode);
    // open file
    fptr = fopen("demo.txt", "a"); // seeks for a demo.txt file in parent directoty, if not present , creates. Always truncates

    // To insert content to it use the fprintf()
    // for (int i = 0; i < 2; i++)
    // {
    //     fprintf(fptr, "Hello world %d times\n", i);
    // }

    // close file
    fclose(fptr);

    // To read from a file, you can use the r mode:
    rptr = fopen("demo.txt", "r");

    // to get content from opened file in read mode, we use
    char myString[100];
    // Read the content and print it
    while (fgets(myString, 100, rptr))
    {
        printf("%s", myString);
    }
    // Print the file content
    printf("%s", myString);

    fclose(rptr);
    // The first parameter specifies where to store the file content, which will be in the myString array we just created.
    // The second parameter specifies the maximum size of data to read, which should match the size of myString (100).
    // The third parameter requires a file pointer that is used to read the file

    return 0;
}