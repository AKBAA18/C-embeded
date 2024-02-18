#include<stdio.h>

void array(int *q);
void inputarr(int *, int);

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Fixed array initialization syntax
    int size = sizeof(a) / sizeof(a[0]);

    printf("The size of the array is %d\n", size);
    printf("\nFor understanding the address of the array and elements:\n");
	printf("The address of the array is same as the first element in array %p\n", a); // Corrected array address printing
    for(int i = 0; i < size; i++) {
        
        printf("a[%d]: %d and address is %p \n", i, a[i],&a[i]); // Moved array element printing inside the loop
    }

    printf("\nHere we are using the local pointer to change value of array.\n");
    int *p = &a[0]; // Initialized pointer p with the address of the first element

    printf("The pointer p holds value of %p\n", *p);
    printf("The address of the pointer is %p\n", &p);
    printf("The value after dereferencing *p is %d\n", *p);

    printf("\nNow we are going to change the value of array by pointer.\n");
    printf("Now we are dereferencing the first pointer and changing it to 23. Before the change, the value is %d\n", *p);

    *p = 23; // Changed the value of the first element
    printf("After the change, the value is %d\nThen we are doing the addition in dereferencing *p = *p + 1\n", *p);
    *p = *p + 1; // Incremented the value by 1
    printf("After the change, the value is %d\n", *p);

    printf("\nNow we are changing the pointer value by 1 by doing *p++\nBefore change, the address held by the pointer: %p\n", *p);
    p++; // Incremented the pointer to point to the next element
    printf("This points to the next array element as it is in sequence %p\n", *p);

    printf("\nIf we change the value of array by dereferencing the 2nd element in array.\n");
    printf("The value of 2nd element before change is %d\n", *p);
    *p = 65; // Changed the value of the second element
    printf("After the change, the value is %d\nThen we are doing the addition in dereferencing *p = *p + 1\n", *p);
    *p = *p + 1; // Incremented the value by 1
    printf("After the change, the 2nd value is %d\n", *p);

    printf("\nNow we are going to change the value of array by function.\n");
    array(a);
    printf("\nNow we are going to get input of size and assign it to value by pointer in another function.\n");

    int size1;
    printf("Enter the size of array: ");
    scanf("%d", &size1);

    int a1[size1];
    inputarr(a1, size1);

    for(int i = 0; i < size1; i++) {
        printf("a[%d] = %d and address is %p\n", i, a1[i], (void *)&a1[i]);
    }

    return 0;
}

void array(int *q) {
    printf("Inside array function:\n");
    q[8]=23;
    printf("q[8] = %d\n", q[8]); // Accessing the 9th element of the array
}

void inputarr(int *q, int size) {
    printf("Now we are in function to get input for array elements\n");
    int temp;

    for(int i = 0; i < size; i++) {
        printf("Enter %d element: ", i + 1);
        scanf("%d", q); // Input temporarily stored in temp
        q++; // Assigning temp to the array element
    }
}
