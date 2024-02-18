#include <stdio.h>
#include <string.h>

int main() {
    printf("Hello World\n");

    char arr[] = "Akshay";
    char arr1[] = "Baalaji";

    printf("Before: %s\n", arr);
    strcat(arr, arr1);
    printf("After: %s\n", arr);

    printf("The new length is %lu\n", strlen(arr));

    char a = 'A'; // ASCII value: 65
    char b = 'a'; // ASCII value: 97

    int result = strcmp(&a, &b);

    if (result == 0) {
        printf("Both characters are the same.\n");
    } else if (result > 0) {
        printf("Character 1 (%c) has greater ASCII value than Character 2 (%c).\n", a, b);
    } else {
        printf("Character 2 (%c) has greater ASCII value than Character 1 (%c).\n", b, a);
    }

    return 0;
}
