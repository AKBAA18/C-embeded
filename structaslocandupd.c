#include<stdio.h>

struct A {
    int a;
    double b;
    long double c;
};

struct A update(struct A y) {
    y.a = 12;
    y.b = 12312.3242;
    y.c = 2131221.3243;

    printf("The changed value of structure from function is %d %lf %Lf\n", y.a, y.b, y.c );

    return y;
}

int main() {
    struct A x = {10, 20.34, 23423.2342};

    printf("The value of structure before change is %d %lf %Lf\n", x.a, x.b, x.c);

    x = update(x);

    printf("The changed value of structure from update function is %d %lf %Lf\n", x.a, x.b, x.c);

    return 0;
}
