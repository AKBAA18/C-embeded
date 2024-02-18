#include<stdio.h>

int main(){
	enum { x, y, z };
    printf("The enumeration 1 value is %d %d %d \n", x, y, z);

    enum { a, b = 10, c };
    // enum { d, e = 20.5, f };
    // This creates the error because it is of type enum

    // int a=100;
    // enum { d, e - a, f };
    // This creates an error because the variable is executed at runtime and enum is executed at compile time

    #define ONE 43
    // This gets executed in the preprocessor stage
    enum { g, h = ONE, I };
    // This gets executed because the enumeration gets executed on compile and #define gets executed on the preprocessor

    printf("The enumeration 2 value is %d %d %d \n", a, b, c);
    printf("The enumeration 3 value is %d %d %d \n", g, h, I);
	
	return 0;
	
}