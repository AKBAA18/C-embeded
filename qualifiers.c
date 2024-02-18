#include<stdio.h>

int main(){
	const int a =10;
	//a=20 This creates an error because const cant be changed 
	printf("The variable a is defined with const as qualifier %d\n",a);
	volatile int b=100;//This gives hint to compiler the variable can be changed over the time bby hardware, isr , external agent 
	printf("When using volatile the compiler should not optimize the code \n Because the external agent can change \n",b);
	printf("The variable b is defined volatile qualifier %d \n",a);
	register int c=100;
	printf("The var c is defined as register so that it can be fastly accessed from memory : %d \n",c );
	
	return 0;
}