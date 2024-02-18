#include<stdio.h>

int main() {
    int a;

    printf("Enter the element to be found odd or even \n");
    scanf("%d", &a);

    int mask = 1;
    int c=a|mask;

    printf("\n");

    if (a != c) {
        printf("Even ");
    } else {
        printf("Odd");
    }

    return 0;
}

