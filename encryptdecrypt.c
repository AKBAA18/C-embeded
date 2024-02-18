#include<stdio.h>
#include<string.h>

void countlen(char *);
void changeasctt(char *, int);
void chgascii(char *, int);

int main() {

    char arr2[100];
    printf("Now we are getting the string as input\n");
    scanf("%s", arr2);

    printf("The size of the entire string sizeof(arr2): %lu\n", sizeof(arr2));
    printf("The size of string using strlen(arr2): %lu\n", strlen(arr2));
    printf("Now we are printing the char array: %s\n", arr2);
    countlen(arr2);
    printf("\n");

    printf("Now we are going to add 4 to ASCII value of string\n");
    int size = strlen(arr2);
    printf("Before the change the string is: %s\n", arr2);
    changeasctt(arr2, size);
    printf("After the value changed: %s\n", arr2);
    printf("\n");

    printf("Now we are going to make the ASCII normal\n");
    chgascii(arr2, size);
    printf("After the value changed: %s\n", arr2);
    printf("\n");

    return 0;
}

void countlen(char *p) {
    printf("Now we are in another function for counting the length of string\n");
    int length = 0;

    for(int i = 0; p[i] != '\0'; i++) {
        length++;
    }

    printf("The total length of the string found by pointer is: %d\n", length);
}

void changeasctt(char *p, int size) {
    printf("Now we are in a function, printing the ASCII value\n");
	printf("Enter the number of position to be changed \n");
	int pos;
	scanf("%d", &pos);
    for(int i = 0; i < size; i++) {
        if(p[i] >= 65 && p[i]<=90){
        	p[i] = p[i] + pos;
		}
    }

    printf("Check the value in main, it will be changed by function\n");
}

void chgascii(char *p, int size) {
    printf("Now we are going to remove 4 from the ASCII value for each character\n");
	printf("Enter the number of position you have shifted prev \n");
	int pos;
	scanf("%d", &pos);
    for(int i = 0; i < size; i++) {
        if(p[i] >= 65 && p[i]<=90){
        	p[i] = p[i] - pos;
		}
    }

    printf("Check the value in main, it will be changed by function\n");
}
