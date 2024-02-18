#include <stdio.h>
void locfun();
int main() {
    auto int x = 10; // Automatic variable 'x' this scope is only within the main function 
    printf("x = %d\n", x); // Printing the value of 'x'
	
	locfun();
	
    return 0;
}
void locfun(){
	auto int x =10;//Automatic variable 'x' scope is only within this function 
	printf("x = %d\n", x); // Printing the value of 'x'
}