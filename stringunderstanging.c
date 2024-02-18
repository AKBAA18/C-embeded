#include<stdio.h>

void asciival(char*, int);
void addressbypointerincrement(char*, int);

int main() {
    char arr[] = {'H', 'e', 'l', 'l', 'o'};
    char arr1[] = "Hello";

    printf("The size of the array is %lu\n", sizeof(arr)); // Used %lu for size_t
    printf("The size of the string is %lu\n", sizeof(arr1)); // Used %lu for size_t
    printf("\n");

    int size = sizeof(arr);
    int size1 = sizeof(arr1);

    asciival(arr, size);
    asciival(arr1, size1);

    printf("\n");

    printf("The address of the array is printed by pointer \n");
    addressbypointerincrement(arr, size);

    printf("The address of the array is printed by pointer \n");
    addressbypointerincrement(arr1, size1);

    return 0;
}

void asciival(char *p, int size) {
    printf("Entered to the function for printing ASCII char of elements \n");
    for(int i = 0; i < size; i++) {
        printf("arr[%d] %c and the ASCII value is %d\n", i, p[i], p[i]);
    }
}

void addressbypointerincrement(char *p, int size) {
    printf("This is in function where address is printed by pointer incrementing \n");
    for(int i = 0; i < size; i++) {
        printf("&arr[%d] = %p\n", i, &p[i]);
        p++; // Incrementing the pointer
    }
}
