#include<stdio.h>

int main() {
    printf("size of 1234 is %lu\n", sizeof(1234));
    printf("size of 12.4f is %lu\n", sizeof(12.34f));
    printf("size of 1234u is %lu\n", sizeof(1234u));
    printf("size of 1234ul is %lu\n", sizeof(1234ul));
    printf("size of 12.341 is %lu\n", sizeof(12.341));

    // printf("size of 1234F is %lu\n", sizeof(12F));
    // This creates an error because 1234 is an integer
    printf("size of 12.0f is %lu\n", sizeof(12.0f));
    printf("size of 12.f is %lu\n", sizeof(12.f));

    // printf("size of 12.34u %lu\n", sizeof(12.34u));
    // This creates error because float is always signed

    printf("The size of \"as\" is %lu\n", sizeof("as"));
    printf("The size of \"a\" is %lu\n", sizeof("a"));
    printf("The size of \"a\" is %lu\n", sizeof("a"));
    printf("The size of '\\' is %lu\n", sizeof('\\'));
    printf("The size of '' is %lu\n", sizeof('e'));
    printf("The size of \"\" is %lu\n", sizeof(""));

    if ('\0' == 0) {
        printf("The 0 and \"\\0\" are same \n");
    } else {
        printf("The 0 and \"\\0\" are different \n");
    }

    return 0;
}
