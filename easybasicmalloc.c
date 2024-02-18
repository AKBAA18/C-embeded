#include <stdio.h>


int main() {
    
	int * ptr;
	ptr=(int *)malloc(20);
	printf("Now the pointer is on stack so address of it %p\n" , &ptr);
	printf("Now the pointer hold the address from the dynamic memory \nBecause we allocated it by malloc %p \n", ptr);
    
    return 0;
}

