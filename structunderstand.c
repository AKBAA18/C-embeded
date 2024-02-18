#include<stdio.h>

struct AA {
    int a;          // 4 bytes
    float b;        // 4 bytes
    long int c;     // 8 bytes
    char d[234];    // 234 bytes
    int arr[12];    // 48 bytes
};

struct BB {
    int a;
    char b;
};

struct AA x;

int main() {
    struct AA d; // x is the variable of type struct AA. This is even an example of uninitialized struct AA
    struct AA e = {.b = 23.45f}; // Selectively initialized

    struct AA f = {12, 34.0f, 2344324, "This is the String", {1, 21, 3, 43, 32}}; // Fully initialized
    struct AA g = {12}; // Partially initialized

    printf("The size of the struct AA is %lu\n", sizeof(struct AA));
    printf("The size of the struct BB is %lu\n", sizeof(struct BB));

    printf("Now we are printing the uninitialized global var of type struct AA \n");
    printf("The first value: %d, second value: %f, third value: %ld, forth value: %s \n", x.a, x.b, x.c, x.d);

    printf("Now we are printing the uninitialized local var of type struct AA \n");
    printf("The first value: %d, second value: %f, third value: %ld, forth value: %s \n", d.a, d.b, d.c, d.d);

    printf("Now we are printing the selectively initialized local var of type struct AA \n");
    printf("The first value: %d, second value: %f, third value: %ld, forth value: %s \n", e.a, e.b, e.c, e.d);

    printf("Now we are printing the fully initialized local var of type struct AA \n");
    printf("The first value: %d, second value: %f, third value: %ld, forth value: %s, fifth value: %d\n", f.a, f.b, f.c, f.d, f.arr[2]);

    printf("Now we are printing the partially initialized local var of type struct AA \n");
    printf("The first value: %d, second value: %f, third value: %ld, forth value: %s \n", g.a, g.b, g.c, g.d);

    return 0;
}
