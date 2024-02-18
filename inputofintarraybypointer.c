#include <stdio.h>

void array(int *q);
void inputarr(int *, int);

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int size = sizeof(a) / sizeof(a[0]);

    printf("The size of the array is %d\n", size);
    printf("\n");

    printf("For understanding the address of the array and elements\n");
    printf("The address of the array is %p\n", a);

    for (int i = 0; i < size; i++) {
        printf("a[%d] = %d and address is %p\n", i, a[i],&a[i]);
    }

    printf("\n");

    printf("Here we are using the local pointer to change the value of the array\n");
    int *p = a;

    printf("The pointer p holds the value %p\n", p);
    printf("the address of the pointer is %p\n", &p);
    printf("The value after dereferencing *p is %d\n", *p);

    printf("\n");

    printf("Now we are going to change the value of the array by pointer\n");
    printf("Now we are dereferencing the first pointer and changing it to 23\n");
    *p = 23; // Make the a[0] to 23
    printf("After the change the value is %d\n", *p);

    printf("\n");

    printf("Now we are changing the pointer value by 1 by doing *p++\n");
    printf("Before change the address held by the pointer: %p\n", p);
    p++; // here the address of the pointer changed to next, this points to a[1]

    printf("This points to next array element as it is in sequence: %p\n", p);

    printf("If we change the value of array by dereferencing the 2nd element in array changed by dereferencing\n");
    printf("The value of 2nd element before change is %d\n", *p);
    *p = 65; // Make the a[1] to 65

    printf("After the change the 2nd value is %d\n", *p);
	printf("Now we are going to change the value of array by function\n");
    array(a);
	printf("\n");    	
 	for (int i = 0; i < size; i++) {
        printf("a[%d] = %d and address is %p\n", i, a[i],&a[i]);
    }

    printf("\n");

    //scanf("%d", &size);
    printf("Now we are going to entirely change the array \n");
    inputarr(a, size);
	printf("\n");    	
 	for (int i = 0; i < size; i++) {
        printf("a[%d] = %d and address is %p\n", i, a[i],&a[i]);
    }
    
    printf("\n");
    return 0;
}

void array(int *q) {
    q[0] = 100; // Change the value of a[0] to 100
    printf("Value of a[0] changed by function: %d\n", *q);
}

void inputarr(int *arr, int size) {
    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}
