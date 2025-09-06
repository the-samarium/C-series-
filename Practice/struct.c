#include <stdio.h>

struct Car {
    float milage;
    char* name; 
    int price;
};

// Function to print details of a Car
void PrintCar(struct Car c) {
    printf("Price is: %d\n", c.price);
    printf("Milage is: %f\n", c.milage);
    printf("Name is: %s\n", c.name);
}

int main() {
    struct Car c1; // object of Car structure
    c1.milage = 34.56;
    c1.name = "Thar";
    c1.price = 1500000;

    PrintCar(c1);  // call
    return 0;
}
/*A union is similar to a struct in that it can store members of different data types.

However, there are some differences:

In a struct, each member has its own memory.
In a union, all members share the same memory, which means you can only use one of the values at a time.*/