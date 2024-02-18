#include <stdio.h>

void array_input(int*, int);
void printt(int *, int);

int main() {
    int size = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int arr[size];

    array_input(arr, size);
    printt(arr, size);

    return 0;
}

void array_input(int* ptr, int size) {
    printf("Enter %d elements:\n", size);

    for (int i = 0; i < size; i++) {
        scanf("%d", &ptr[i]); // Use & to get the address of the element
    }
}

void printt(int *q, int size) {
    printf("Printing the elements and their addresses:\n");
    for (int i = 0; i < size; i++) {
        printf("a[%d] = %d and address is %p\n", i, q[i], (void *)&q[i]);
    }
}
