#include<stdio.h>

static int x = 100;//file static variable 

void print() {
    //printf("The local static value in main is %d", a); 
    // This is the error because the function static var scope is within the function
    printf("The file static value printed from the print function is %d\n",x); 
}

int noofcall() {
    static int c = 0;
    c++;
    return c;
}

int main() {
    static int a = 10;//function static variable 
    print(); 
    printf("This is from the main function it is printing the file static variable  is %d\n",x);
    int returnn;
	returnn=noofcall();
    returnn=noofcall();
    returnn=noofcall();
    printf("The number of time the function called is printed using function static variable in that function %d\n",returnn);
    
    return 0;
}
