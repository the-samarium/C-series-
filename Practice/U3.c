// Write a simple C statement to accomplish each of the following:
//   a. Test if the value of the variable count is greater than 10. If so, print “Count is greater than 
//   10”.
//  b. Assign the value 10 to the variables a, b and c.
//  c. Increment the value of variable var by 10 and then assign it to variable stud.
//  d. Test if the least significant bit of the variable num is 1. If so, assign 10 to variable a else 
//   assign 20 to it.
//  e. Find factorial of a number n and assign it to variable fact.
//  4. Programming exercise:
//  a. Write a C program that prints the integers between 1 and n which are divisible by 7. Get the 
//   value of n from the user.
//  b. Write a C program that prints the integers from 1 to n omitting those integers which are divis
//   ible by 7. Get the value of n from the user.
//  c. Write a C program that prints the integers between 1 and n which are divisible by 3, but not 
//   divisible by 4
//  d. Write a C program to find the sum of all integers that lie between 1 and n and are divisible by 7.
//  e. Write a C program to evaluate 1×2×3×4×…n. Get the value of n from the user.
//  f. Write a C program to print first n Armstrong numbers. Get the value of n from the user.
//  g. Write a C program to print first n prime numbers. Get the value of n from the user.



#include <stdio.h>
#include <math.h>
int main(){
    //1
    int count = 11;
    if(count > 10){
        printf("Count is greater than 10\n");
    }
    //2
    // int a=10,b=10,c=10;
    //3
    int var = 10;
    var+=10;
    int stud = var;
    printf("%d\n",stud);
    
    //4
    int num = 101;
    int a;
    if((num%10)==1){
        a=10;
    }
    else{
        a=20;
    }

    //5
    int fact = 5;
    int facto=1;
    while(fact>0){
       facto=facto*fact;
       fact--;
    }
    printf("%d",facto);

    //6
    int inp;
    printf("Enter a number: ");
    scanf("%d", &inp);
    for( int i=1;i<inp;i++){
        if(i%7==0){
            printf("%d,",i);
        }
    }
    printf("\n");

    //7
    int inp2;
    printf("Enter a number: ");
    scanf("%d", &inp2);
    for( int i=1;i<inp2;i++){
        if(i%7!=0){
            printf("%d,",i);
        }
    }
    //8
    int inp3;
    printf("Enter a number: ");
    scanf("%d", &inp3);
    for( int i=1;i<inp3;i++){
        if(i%4!=0 && i%3==0){
            printf("%d,",i);
        }
    }
    return 0;
}