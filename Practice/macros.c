#include <stdio.h>
// this is preprocessor derective. Not includede in compilation, as its taken care of in preprocessor
/* 
 macros do not consume any extra space , as handled in preprocessor stage.
 And have global scope.Advantages above identifier/variable declaration ad defination
 */
#define PI 3.14
// object like macros
#define SUM(x, y) ((x) + (y)) // safer macro with extra parentheses
#define CUBE(x) (x * x * x)
#define SWAP(a, b) do { int temp = a; a = b; b = temp; } while(0)
// function like macros
#define GREET() printf("%s", "Hello World\n") // function macro with string output



int main()
{
    printf("PI = %f\n", PI);
    printf("Sum = %d\n", SUM(1, 2));
    GREET();
    printf("Cube = %d\n", CUBE(2));
    printf("Swap the values of a and b only if a is greater\n");
    int a = 20, b = 10 ;
    if (a > b)
        SWAP(a, b);
    else printf("Values are not swapped\n");
    printf("Result values of a and b are %d %d\n", a, b);


    //predefined macros in C
    printf("File name:%s\n",__FILE__); //outputs current file name
    printf("This is on line %d of code.\n",__LINE__); //outputs current line it is on
    printf("Date is: %s\n",__DATE__); //outputs date current
    printf("Time is %s\n",__TIME__); //outputs current time
    printf("This macro compiles to 1 is compiler is up to ANSIC and ISO C standards:",__STDC__); // This macro expands to 1, if the compiler conforms to ANSI C and ISO C standards.
    
    /*the scope of 
    macro definition is independent of the 
    block structure*/ 
    return 0;
}
