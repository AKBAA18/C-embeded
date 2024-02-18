#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int c = 30;

    printf("The address of variable a: %p\n", &a);
    printf("The address of variable b: %p\n", &b);
    printf("The address of variable c: %p\n", &c);

    printf("\n");

    int *ptr[] = {&a, &b, &c};
    int size = sizeof(ptr) / sizeof(ptr[0]);

    printf("The address of ptr is %p\n", &ptr);
    
    int **poin = ptr;

    printf("The address of pointer is %p\n", &poin);

    int ***pointer = &poin;

    printf("The address of pointer is %p\n", &pointer);

    printf("The array of pointer value and addresses it points to:\n");
    for (int i = 0; i < size; i++) {
        printf("ptr[%d] = %d and it holds the address %p and its address is %p\n",i, *ptr[i], ptr[i], &ptr[i]);
    }

    printf("\nNow we are printing the pointer of pointer value, address it holds, and its address:\n");
    for (int i = 0; i < size; i++) {
        printf("poin[%d] = %d and it holds the address %p and its address is %p\n",i, *poin[i], poin[i], &poin[i]);
    }

    printf("\nNow we are printing the pointer of pointer of pointer value, address it holds, and its address:\n");

    printf("...pointer is %d\n", *(**pointer));
    printf("...pointer is %d\n", ***pointer);
    printf("pointer is, *(*pointer + 1): %d\n", *(**pointer + 1));


    return 0;
}
