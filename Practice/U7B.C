#include <stdio.h>
#include "U7.c"
extern int x;
extern int y;
extern int extermal;
extern void func1();

int a =100;  //by default external
int sum =0; //global and extern
void Addc(){
    static int c; //declared static, means altough has function scope, lifetime is through outt the file, ie. does not die
    c+=10;
    printf("\nC static remains undead: %d",c);
}
void Addd(){
    int d=0;  //default auto
    d+=10;
    printf("\nD auto is dead: %d",d);
}
void Sum(int a,int b){
    sum+=(a+b); //first searches for sum in function scope, not found, then goes for gloal scope, where it is found, so it directly edits the global variable
    printf("\nSum is: %d",sum);
}
int main()
{   

    register int inMemory=999; //va;ue stored in cpu memory, which is efficient, saves time by fast retrival and access of this variable
    int z = 10;
    printf("All variables extrnal coming from U7.c, except z\n");
    func1(); //extern function from file U7
    printf("z: %d\n",z); //local auto variable

    int b ;  //by defaut auto i.e. blok scope and garbage value if not defined
    printf("\nb=%d",b);
    b=99;
    printf("\nAfter defination b=%d",b);
    
    Addc(); //called once
    Addd();
    Addc();
    Addd();
    Addc(); //thrice
    Addd();
    Sum(1,2);
    Sum(3,4); //its an extern variable , sum. If declared static, sum will nbe equal to 13
    Sum(x,y);
    return 0;
}


