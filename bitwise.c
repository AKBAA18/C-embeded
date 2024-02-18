#include<stdio.h>

int main() {

    int a = 0x8;
    printf("The binary default value is %x\n", a);

    int mask = 0x1;
    printf("The binary default MASK value is %x\n", mask);
    mask=mask<<2;
    printf("Now the MASK is shifted to 1st  bit and it will be %x\n", mask);
    int result = (a | mask);
    printf("The result after masking is %x\n", result);

    int b = 0x8;
    int c;
    printf("Enter the number of bit to be set : ");
    scanf("%d", &c);
	mask=0x1;
    mask = mask << c;
	/*
    for(int i = 0; i < (c - 1); i++) {
        mask = mask << 1;
        printf("Sample Xx", mask);
        return 0;
    }
	*/
    int result1 = (b | mask);
    printf("The result after masking is %x\n", result1);

    return 0;
}
