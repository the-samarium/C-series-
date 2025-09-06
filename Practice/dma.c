#include <stdio.h>
#include <malloc.h>// for dynamic memory allocation

/*malloc asks the OS for a block of memory of the requested size.
sizeof(float) tells how many bytes are needed (usually 4 bytes on most systems, but can vary).
The OS gives you a contiguous chunk of memory in the heap (not stack, not code section).
malloc returns the starting address
If successful, malloc returns a pointer (e.g., 0x600003e0) that points to the first byte of that block.
If it fails (e.g., no memory available), it returns NULL.
Pointer stores the address
That address is stored in ptr, so now ptr is pointing to the newly allocated memory. */
int main()
{
    /* code */
    float *ptr;
    ptr = (float*)(sizeof(float)); //typecasted to float pointer type
    *ptr=40.45;
    printf("Value within the block is %f\n",*ptr);
    return 0;
}
