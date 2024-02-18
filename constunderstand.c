#include<stdio.h>

int main() {
    const int a = 100;

    printf("a is the constant variable and the value is %d\n", a);

    //a=1023; This creates error because const values can't be modified

    int b = a;

    printf("The b value before modified is %d\n", b);

    b = 23;

    printf("The b value after modified is %d\n", b);
    printf("The value of b changed because it is not a const variable\n");

    printf("I had seen const variable can be modified by pointer lets try\n");

    int *p = &a;

    *p = 1438;

    printf("a is the constant variable and the value changed by pointer is %d\n", a);

    return 0;
}
