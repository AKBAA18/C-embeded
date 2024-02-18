#include<stdio.h>

// Function prototypes
void pointfunc(int*);
void norfunc(int);

int main() {
    int a;

    printf("The value of variable before change is %d\n", a);

    norfunc(a);

    printf("\nNow we are going to change the value by pointer.\n");

    int *p = &a;

    printf("Here the pointer holds the address of another variable in main.\n");
    printf("The value of variable before change by pointer is %d\n", a);

    *p = 23;

    printf("The value of variable changed by the pointer in main is %d\n", a);

    printf("\n");

    pointfunc(&a); // Function call

    printf("The value of variable changed by the pointer in function is %d\n", a);

    return 0;
}

// Function definition to change value using pointer (call by reference)
void pointfunc(int *p) {
    *p = *p + 56;
}

// Function definition to change value using integer (call by value)
void norfunc(int a) {
    int temp = 100;
    a = a - temp;
    printf("The value of 'a' in normal function is %d\n", a);
}
