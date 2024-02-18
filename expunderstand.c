#include<stdio.h>

int main(){
	int xx = 25;
    int yy;
    yy = (xx ==45);
    printf("The original value of xx is %d\n", xx);
    printf("The value of yy is yy=(xx==45) %d\n", yy);

    int xx1 = 25;
    int yy1;
    printf("The original value of xx is %d\n", xx1);
    yy1 = (xx1 = 45);
    printf("The assigned value of xx is %d\n", xx1);
    printf("The value of yy is yy=(xx=45) %d\n", yy1);
    
    return 0;
	
}