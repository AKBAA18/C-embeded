#include <stdio.h>
#include <string.h>

int main() {
    char arr[100];
    int result = 0;

    printf("Enter a number from 1-10 in lowercase: ");
    scanf("%s", arr);

    if (strcmp(arr, "zero") == 0) {
        result = 0;
    } else if (strcmp(arr, "one") == 0) {
        result = 1;
    } else if (strcmp(arr, "two") == 0) {
        result = 2;
    } else if (strcmp(arr, "three") == 0) {
        result = 3;
    } else if (strcmp(arr, "four") == 0) {
        result = 4;
    } else if (strcmp(arr, "five") == 0) {
        result = 5;
    } else if (strcmp(arr, "six") == 0) {
        result = 6;
    } else if (strcmp(arr, "seven") == 0) {
        result = 7;
    } else if (strcmp(arr, "eight") == 0) {
        result = 8;
    } else if (strcmp(arr, "nine") == 0) {
        result = 9;
    } else if (strcmp(arr, "ten") == 0) {
        result = 10;
    } else {
        printf("Invalid input. Please enter a valid number word.\n");
        return 1; // Exit the program with an error code
    }

    printf("The number is %d\n", result);
    return 0; // Exit the program successfully
}
