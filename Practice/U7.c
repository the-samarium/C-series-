#include <stdio.h>
//default extern vars
int x = 10;              // definition
int y = 20;              // definition
static int internal = 9; // internal linkage, explictily declared
int extermal = 99;       // definition (only once!)
void func1();  //exten declaratiom
void func1()
{
    int z = 10;
    printf("%d ", x++);
    printf("%d ", y++);
    printf("%d ", z++);
    printf("%d ", extermal);
    printf("%d\n", internal);
}
/*Storage classes define the lifetime, visibility, and memory location of variables.

There are four main storage class specifiers in C:

auto
static
register
extern
*/
