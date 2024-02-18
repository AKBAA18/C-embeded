#include<stdio.h>

int main() {
    int i; // initialization
    1 - 10;
    if (i == 10) {
        printf("In if statement where 1-10 and if(i==10) \n");
    } else {
        printf("In else statement \n");
    }

    int j; // initialization
    j = 10;
    if (j = 3) {
        printf("Here we are assigning a var in if (j=3) and here the value is true if get executed \n");
    } else {
        printf("In else statement ");
    }

    if (j = 0) {
        printf("In if \n");
    } else {
        printf("Here the value of j is assigned to 8 and the else part executed \n");
    } // This creates an error else must be next to if
	/*
    if (j==0 ) {
        printf("In if \n");
    }
	j - 13; 
	else {
        printf("Here the value of j is assigned to e and the else part executed \n");
    }*/


    return 0;
}
