#include<stdio.h>

int var = 10; // global variable
int *poin = &var; // global pointer variable

int main() {
    printf("Here percentage d is used for printing the value of the global variable var: %d\n", var);
    printf("Here percentage p is used for printing the address of the global variable var: %p\n", &var);
    printf("Here percentage d is used for printing the value of the global pointer variable *poin: %d\n", *poin);
    printf("Here percentage p is used for printing the address hold by the global pointer variable *poin: %p\n", poin);
	printf("Here percentage d is used for printing the address of the global pointer variable *poin: %p\n", &poin);
    printf("\n");

    printf("We are going to change the pointer value\n");
    *poin = 451;
    printf("The value of global variable var changed by the pointer variable *poin: %d\n", var);
    printf("Here percentage p is used for printing the address of the global variable var: %p\n", &var);
    printf("Here percentage d is used for printing the address of the global pointer variable *poin: %p\n", &poin);
    printf("Here percentage p is used for printing the address hold by the global pointer variable *poin: %p\n", poin);
    printf("\n");

    printf("Now we are going to work on sizeof pointers\n");
    printf("The sizeof the global variable var is: %lu\n", sizeof(var));
    printf("The sizeof the global pointer variable *poin is: %lu\n", sizeof(poin));
    printf("\n");

    printf("Now we are incrementing the pointer variable\n");
    printf("The old address hold by the global pointer variable *poin is: %p\n", poin);
	poin=poin+1;
    printf("The new address hold by the global pointer variable *poin is: %p\n", poin);
    printf("Here percentage p is used for printing the address of the global pointer variable : %p\n", poin);
    printf("The address of global variable var is: %p\n", &var);
    printf("\n");

    int **q;
	q = &poin; // local pointer variable

    printf("The address hold by the local pointer variable *q is: %p\n", q);
    printf("The address of local pointer variable q is: %p\n", &q);
    printf("The value of local pointer variable 2 q: %d\n", *q);
    printf("Now we are printing the value of global pointer variable *poin: %d\n", **q);
    printf("Now we are printing the address hold by local pointer variable *q: %p\n", q);

    return 0;
}
