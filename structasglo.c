#include<stdio.h>

struct A {
    int a;
    double b;
    long double c;
};

struct A x = {10, 20.34, 23423.2342};

void update() {
    x.a = 12;
    x.b = 12312.3242;
    x.c = 2131221.3243;

    printf("The changed value of structure from function is %d %lf %Lf\n", x.a, x.b, x.c);
}

int main() {
    printf("The value of structure before change is %d %lf %Lf\n", x.a, x.b, x.c);

    update();

    printf("The changed value of structure from update function is %d %lf %Lf\n", x.a, x.b, x.c);

    return 0;
}
