#include <stdio.h>

void changetheval(int **p);
void printval(int **p, int size);

int main() {
    int a = 10;
    int b = 20;
    int c = 38;

    printf("The address of variable a: %p\n", &a);
    printf("The address of variable b: %p\n", &b);
    printf("The address of variable c: %p\n", &c);

    printf("\nNow we are going to add the variables to a normal array\n");

    int ar[] = {a, b, c};
    int size = sizeof(ar) / sizeof(ar[0]);

    for (int i = 0; i < size; i++) {
        printf("ar[%d] = %d and its address is %p\n", i, ar[i], &ar[i]);
    }

    printf("\nThe array of pointers begins:\n");
    int *arr[] = {&a, &b, &c};
    size = sizeof(arr) / sizeof(arr[0]);

    printf("The size of the array is: %d\n", size);

    printf("Printing the pointer array in main:\n");
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d and it points to this address %p and it holds the address %p\n",
               i, *arr[i], arr[i], &arr[i]);
    }
	changetheval(arr);
	printval(arr,size);

    return 0;
}

// Implement your functions here
void changetheval(int **p) {
	*p[1]=12;
	printf("\n Here we are in a function which change the value of arr [1] : %d \n",*p[1]);

}
void printval(int **p, int size) {
		printf("Entered into a function \n");
		for(int i=0;i<size;i++){
			printf("a[%d] = %d the address it hold %p and the address of it is %p\n",i,*p[i],p[i],&p[i]);
		}
}
