#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "Hello";
    char str2[100] = "World";
    char str3[100];
    char *ptr;
    // strlen()
    printf("Length of str1: %zu\n", strlen(str1));
    // strcpy()
    strcpy(str3, str1);
    printf("Copied string (str3): %s\n", str3);
    // strcat()
    strcat(str1, " ");
    strcat(str1, str2);
    printf("Concatenated string (str1): %s\n", str1);
    // strcmp()
    if (strcmp(str1, str3) == 0) {
        printf("str1 and str2 are equal\n");
    } else {
        printf("str1 and str2 are not equal\n");
    }
    // strchr()
    ptr = strchr(str1, 'W');
    if (ptr != NULL) {
        printf("Found 'W' in str1 at position: %ld\n", ptr - str1);
    } else {
        printf("Did not find 'W' in str1\n");
    }
    // strstr()
    ptr = strstr(str1, "World");
    if (ptr != NULL) {
        printf("Found 'World' in str1 at position: %ld\n", ptr - str1);
    } else {
        printf("Did not find 'World' in str1\n");
    }

    return 0;
}
