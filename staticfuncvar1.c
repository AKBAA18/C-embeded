#include <stdio.h>

void func() {
    static int count = 0;
    count++;
    printf("Function call count: %d\n", count);
}

int main() {
    int i;
    for (i = 0; i < 5; i++) {
        func();
    }
    return 0;
}
