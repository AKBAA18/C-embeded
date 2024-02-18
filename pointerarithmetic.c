#include <stdio.h>

int main() {
    float a[] = {1.1, 2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10.10, 11.11, 12.12};
    float *p = a;

    printf("Print the address and value of it using pointer \n"); 
    int size = sizeof(a) / sizeof(a[0]);

    for(int i = 0; i < size; i++)
        printf("[%d] = %f and the address is %p\n", i, p[i], &p[i]);

    printf("\n");

    printf("Now we try to do the pointer arithmetic *p = *p + 1 \n");
    printf("Now the value of first element in array is %f\n", *p);
    *p = *p + 1;

    printf("The pointer holds the value as address of float array \nBy default it points to first element\n"); 
    printf("The value after dereferencing is *p = *p + 1 The value of first element in array is %f\n", p[0]);
    printf("The value of pointer can be incremented by *(p)++\n");

    (*p)++; //*p = *p + 1

    printf("The value after dereferencing is (*p)++ The value of first element in array is %f\n", *p); 
    printf("The address that the pointer holds is %p \n", p);

    printf("\n");

    printf("(p++) The value of first element in array is %f\n", (p++)); //* (p = p + 1) 
    printf("The value after the post increment of first array element is %f\n", *p);

    printf("Now we are going to increment the value hold by the pointer p = p + 2 \n"); // p = 1004 p + 2 = 1012 //4.4
    p = p + 2;
    printf("Now the address that the pointer holds is %p \n", p); 
    printf("The value after dereferencing of the pointer is %f\n", *p);

    printf("Now we are going to increment the value hold by the pointer p++ \n"); // p - 1012 p + 1 = 1016 //5.5
    p++; // p = p + 1 or *p++ or *(p)++ or ++p 
    printf("The value after dereferencing of the pointer is %f\n", *p);

    printf("Now we are going to increment the value hold by the pointer *p++ \n"); // p = 1016 p + 1 = 1020 //6.6 
    *p++;// p = p + 1 or *p++ or *(p)++ or ++p
    printf("The value after dereferencing of the pointer is %f\n", *p); 

    printf("Now we are going to increment the value hold by the pointer (p)++ \n"); // p = 1020 p + 1 = 1024 //7.7
    *(p)++; // p + 1 or *p++ or *(p)++ or ++p 
    printf("The value after dereferencing of the pointer is %f\n", *p);

    printf("Now we are going to increment the value hold by the pointer ++p \n"); // p = 1024 p + 1 = 1028 //8.8
    ++p; // p + 1 or *p++ or *(p)++ or ++p 
    printf("The value after dereferencing of the pointer is %f\n", *p);

    return 0;
}
