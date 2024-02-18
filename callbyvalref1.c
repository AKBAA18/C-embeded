#include <stdio.h>

void callbyval(int a, int b);
void callbyref(int *c, int *d);

int main() {
    int a = 10;
    int *p = &a;

    printf("The value of the variable 'a' is %d\n", a);
    printf("The address of variable 'a' is %p\n", &a);
    printf("The pointer value is %p\n", p);
    printf("The pointer address is %p\n", &p);
    printf("The value after dereferencing the pointer is %d\n", *p);
    printf("\n");

    int b = 32;
    int *q = &b;

    printf("The value of the variable 'b' is %d\n", b);
    printf("The address of variable 'b' is %p\n", &b);
    printf("The pointer value is %p\n", q);
    printf("The pointer address is %p\n", &q);
    printf("The value after dereferencing the pointer is %d\n", *q);
    printf("\n");

    printf("Now we are using call by value in this program\n");
    callbyval(a, b);
    printf("\n");

    printf("Now we are going to use call by reference in this program\n");
    printf("The value before the function call is a=%d, b=%d\n", a, b);
    callbyref(&a, &b);
    printf("The value after the function call is a=%d, b=%d\n", a, b);

    return 0;
}

void callbyval(int a, int b) {
    printf("The value of 'a' and 'b' passed from main to this function is %d %d\n", a, b);
    printf("For understanding, printing the address of the variables: &a=%p, &b=%p\n", &a, &b);
}

void callbyref(int *c, int *d) {
    *c = *c + 10001;
    *d = *d + 23231;
    printf("Value of 'c': %d, 'd': %d after modifications\n", *c, *d);
}
