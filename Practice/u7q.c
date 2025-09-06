#include <stdio.h>

int func();//by default extern and globl
static int n=18;
int func(){
    return n --;
}


int main(){
    for (int i = 0; i < 4; i++)
    {
        printf("Value of static variable is: after each iteration(unded) is %d \n",func());
    }
    
    return 0;
}