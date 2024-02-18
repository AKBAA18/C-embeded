#include <stdio.h>

int *summ(int, int);
static int x = 100;

void print() {
    // printf("The local static value in main is %d", a); This is the error because the function static var scope is within main
    // but the lifetime is end of prog
    printf("The file static variable in main is %d\n", x);
}

static void noofcall() {
    static int c = 0;
    c++;
}

int main() {
    static int c = 10;
    print();
    printf("%d\n", c);

    int a = 10;
    int b = 20;
    int *sum = summ(a, b);

    printf("sum is %d\n", *sum);
    printf("\nUnderstanding the stack and dynamic memory");
	int * ptr;
	ptr=(int *)malloc(20);
	printf("Now the pointer is on stack so address of it %p\n
	" , &ptr);
	printf("Now the pointer hold the address from the dynamic memory \nBecause we allocated it by malloc %p \n", ptr);
    
    return 0;
}

int *summ(int a, int b) {
    static int sum;
    sum = a + b;
    return &sum;
}
