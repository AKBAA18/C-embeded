#include<stdio.h>

int* func();
int* func1();

int main() {
    int *p = func();
    printf("The value after the dereference *p is %d\n", *p);
    
    int *q = func1();
    printf("The value after the dereference *q is %d\n", *q);

    return 0;
}

int* func() {
    static int n = 10;
    int *q = &n;
    *q = *q + 100;
    return q;
}

int* func1() {
//    int m = 20;  Declare a new static variable m
    static int m = 20; // Declare a new static variable m
    int *q = &m;
    *q = *q + 100;
    return &m;// because of static variable the address of the m is valid till end of prog 
}
