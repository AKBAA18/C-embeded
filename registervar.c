#include<stdio.h>
//register int a=100; This creates error
//register variable cant be created globally

int main() {
    register int a = 100;

    printf("This is the register variable used for faster access to a particular variable: %d\n", a);

    return 0;
}
