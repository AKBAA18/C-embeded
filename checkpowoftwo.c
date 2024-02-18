#include <stdio.h>

int main() {
    int a;

    printf("Enter the number to check: \n");
    scanf("%d", &a);

    int mask = 1;
    int result = 0;
    int i = 1;

    while (i >= 1) {
        mask = mask << 1;

        if (mask == a) {
            result = 1;
            break;
        } else {
            // If the condition is not met, continue looping
        }

        i++;

        if (i >= 32) {
            break;
        }
    }

    if (result == 1) {
        printf("Yes, it's a power of 2.\n");
    } else {
        printf("Not a power of 2.\n");
    }

    return 0;
}
