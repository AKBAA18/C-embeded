#include<stdio.h>

int x = 1000;
int a = 100;

void printt() {
    printf("This is the value of global variable %d\n", a);
}

int main() {
    int a=938; // local variable
    printf("Here the local variable is overwrite global variable %d\n", a);

    int x = 9430;
    printf("The global variable overwritten by local variable %d\n", x);

    printt();
//    extention(); // assuming extention() is defined another file 

    return 0;
}
