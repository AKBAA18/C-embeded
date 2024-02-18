#include <stdio.h>

void swap(int *a, int *b) { 
	//here a=address of i *a is value if i 
	//here a=address of i *b is value if j 
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int i = 9, j = 10;

    printf("Before swap: i = %d, j = %d\n", i, j);

    swap(&i, &j); 
    printf("After swap: i = %d, j = %d\n", i, j);

    return 0;
}
