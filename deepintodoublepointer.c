#include<stdio.h>

int main() {

    char arr[] = "abc";
    char arr1[] = "bcd";
    char arr2[] = "cde";
    char *p[] = {arr, arr1, arr2};

    printf("The value of the first element is p[0]: %s\n", p[0]);
    printf("The first char is *p: %s\n", *p); // p[0] is same as *p
    printf("Print the single char: %c\n", *p[0]); // [] will not dereference
    printf("\n");

    char **q = p;

    printf("The value of the first element in array is *q: %s\n", *q);
    printf("The value of the first char of element in array is **q: %c\n", **q);
    printf("The value of the second element in array is *(q+1): %s\n", *(q + 1));

    return 0;
}
