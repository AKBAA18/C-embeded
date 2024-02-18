#include<stdio.h>

int main() {
	printf("Here we are going to clear \n");
    int a = 0x8;
    printf("The binary default value is %x\n", a);
    int mask = 0x1;
    printf("The binary default MASK value is %x\n", mask);
    mask=mask<<3;
    mask=~mask;
    printf("Now the MASK is shifted to 3nd  bit and 1s complement done  %x\n", mask);
    int result = (a & mask);
    printf("The result after clearing is %x\n", result);

    int b = 0x127;
    int c;
    printf("Enter the number of bit to be clear : ");
    scanf("%d", &c);
	mask=0x1;
    mask = mask << c;
    mask=~mask;
    printf("Now the MASK is shifted to %d  bit and 1s complement done  %x\n", c,mask);
    int result1 = (b & mask);
    printf("The result after clearing is %x\n", result1);

    return 0;
}
