#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("The number of arguments is %d\n", argc);

    int result = argc;
    printf("Result: %d\n", result);

    printf("The size of argv is %lu\n", sizeof(argv));

    return 0;
}
