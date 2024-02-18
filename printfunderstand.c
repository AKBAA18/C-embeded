#include <stdio.h>

int main() {
    // printf(); // error: printf needs at least one argument

    int x;
    int y;
    int preturnval;
    int sreturnval;

    preturnval = printf("\n"); // printf with one argument 
     int a=printf("Hello World sydvuse \n");
    printf("THe previous print retruna %d\n Inputs\n",a);//21
    sreturnval = scanf("%d %d", &x, &y);

    preturnval = printf("The return value of scanf %d and the two inputs are %d and %d The return value of first printval %d \n", sreturnval, x, y, preturnval);

    printf("The number of arguments in previous printf are %d", preturnval);

    return 0;
}
