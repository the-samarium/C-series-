#include <stdio.h>
#include <math.h>
int main()
{
    // 1
    // char a = 128;
    // unsigned char b = 256;
    // 2
    // printf("%d%c", 'A', 'A');
    // 3
    // printf("char occupies %d byte\n", sizeof(char));
    // printf("int occupies %d bytes\n", sizeof(int));
    // printf("float occupies %d bytes", sizeof(float));
    // 4
    // printf("%d", sizeof('\n'));
    // 5
    // printf("%d%c");
    // 6
    // printf("%d,%d,%d", sizeof(32.4), sizeof(32.4f), sizeof(32.4F)); // Double, float, float
    // 7
    // printf("\nab");
    // printf("\bsi");
    // printf("\rha");
    // 8
    // Farenheit to celcius code
    // float faren=345;
    // float cel;
    // printf("Enter the temperature in farenheit:%f\n",faren);
    // // scanf("%f",&faren);
    // cel=(faren-32)*(5.0/9);
    // printf("\ntemperature in celcius is:%f",cel);
    // 9
    // Area and circumference of a circle
    // float r= 4;
    // printf("Area of circle with radius %f is %f and circumference is %f",r,3.14F*r*r,2*3.14F*r);
    // 10
    // Average of 3 numbers
    // printf("Average of %f, %f, %f is = %f",
    //    1.2, 2.3, 3.2,
    //    (1.2 + 2.3 + 3.2) / 3);
    // 11
    //   convert age from years to seconds, on year has 3.156x10^7 seconds
    int age = 23;
    double power=pow(10,7);
    double secage=age*3.156*power;
    printf("Age in years is %d and in seconds is %5.2E",age,secage);
    return 0;
}
