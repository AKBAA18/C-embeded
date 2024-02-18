#include<stdio.h>

int main() {

    printf("Here we are going to toggle \n");
    int a = 0x8;

    printf("The binary default value is %x\n", a);
    int mask = 0x1;

    printf("The binary default MASK value is %x\n", mask);
    mask = mask << 3;

    printf("Now the MASK is shifted by 3nd bit and mask is %x\n", mask);

    int result = (a ^ mask);
    printf("The result after toggling is %x\n", result);

    int b = 0x127;//0000 0000 0000 0000 0000 0001 0010 0111
    int c;

    printf("Enter the number of bit to be toggle: ");
    scanf("%d", &c);

    mask = 0x1;
    mask = mask << (c-1);

    printf("Now the MASK is shifted to %d bit and mask is %x\n", c, mask);
    int result1 = (b ^ mask);

    printf("The result after toggling is %x\n", result1);

    return 0;
}
