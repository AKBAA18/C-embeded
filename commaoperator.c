#include<stdio.h>
#include<stdlib.h>//rand function signature or declared in this lib 

int returnn() {
    int a = rand(); // rand() is called here
    int b = rand(); // rand function is called here
    printf("The value of 1st in func is %d \n", a);
    printf("The value of 2nd in func is %d \n", b);
    return (a, b); // It is an example of the comma operator
}

int addinret() {
    int a = 10;
    return (a = a + 12, a + 3);//example of comma operator 
}

int main() {
    int a, b, c; // here just used for separation
    int i;

    i=(1, 2, 3, 4, 5, 6, 7);
    printf("The value if i to be in the in (1,2,3,4,5,6,7) is %d \n", i);

    // int b = 1, 2, 3, 4, 5; 
    // Now the b is to be 1 but the, separate it and 2 is not considered as a variable; this creates an error

    int j = (1, 2, 3, 4, 5, 6, 7, 8);
    printf("The value of j is in int j=(1,2,3,4,5,6,7,8) is %d \n", j);

    int var = returnn(); // Here we are assigning a variable for a func to return
    printf("The var holds the last value from result %d\n", var);

    int var2 = addinret();
    printf("The value of a-10 return (a=a+12,a+3) of this and the value is %d\n", var2);

    return 0;
}
