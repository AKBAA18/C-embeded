#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "Hello";
    char str2[100] = "World";
    char str3[100];
    char *ptr;

    printf("Length of str1: %zu\n", strlen(str1));

    // Copy str1 to str3
    strcpy(str3, str1);
    printf("Copied str1 to str3: %s\n", str3);

    // Concatenate str1 and str2
    strcat(str1, str2);
    printf("Concatenated str1: %s\n", str1);

    // Compare str1 and str3
    printf("Comparison result: %d\n", strcmp(str1, str3));

    // Search for 'o' in str1
    ptr = strchr(str1, 'o');
    if (ptr != NULL) {
        printf("Found 'o' in str1 at position: %ld\n", ptr - str1);
    } else {
        printf("Did not find 'o' in str1\n");
    }

    // Search for "World" in str1
    ptr = strstr(str1, "World");
    if (ptr != NULL) {
        printf("Found 'World' in str1 at position: %ld\n", ptr - str1);
    } else {
        printf("Did not find 'World' in str1\n");
    }

    return 0;
}
