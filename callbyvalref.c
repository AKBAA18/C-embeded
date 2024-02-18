#include <stdio.h>

void interest_calc(int*);

void callByValue(int, int, int);
void callByReference(int*, int*, int*);

int main() {
    int a = 10, b = 20, c = 30;
    printf("&a: %p, &b %p, &c: %p\n", &a, &b, &c);

    callByValue(a, b, c);
    callByReference(&a, &b, &c);

    return 0;
}

void callByValue(int a, int b, int c) {
    printf("a: %d, b: %d, c: %d\n", a, b, c);
    printf("&a: %p, &b: %p, &c : %p\n", &a, &b, &c);
}

void callByReference(int *a, int *b, int *c) {
    *a = *a + 1;
    printf("*a = *a + 1 : %d\n", *a);
    
    (*b)++;
    printf("*b++: %d\n", *b);

    printf("*a: %d, *b: %d, *c: %d\n", *a, *b, *c);
    printf("a : %p, b: %p, c: %p\n", a, b, c);
}

void interest_calc(int *new_balance) {
    *new_balance += *new_balance * 0.04;
    printf("New balance: %d\n", *new_balance);
}
