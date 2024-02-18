#include <stdio.h>

int main() {
    register int x = 10; // Declaring a register variable 'x' with value 10
    printf("x = %d\n", x); // Printing the value of 'x'

    x++; // Incrementing the value of 'x'

    printf("x after increment = %d\n", x); // Printing the updated value of 'x'

    return 0;
}