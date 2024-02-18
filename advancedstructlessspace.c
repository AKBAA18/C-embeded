#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct A {
        int a;//4
        int b;//4
        long int c;//8
        char *arr;//8
        char *arr1;//8
};
struct A x;

void givevalue(struct A *);

int main()
{
        printf("The size of the struct will be around 64Bytes %lu",sizeof(x));
        givevalue(&x);
        printf("Now we are printing all values \n");
        printf("a :%d\n",x.a);
        printf("b :%d\n",x.b);
        printf("c :%lu\n",x.c);
        printf("arr :%s\n",x.arr);
        printf("arr1 :%s\n",x.arr1);



        return 0;
}

void givevalue(struct A * ptr)
{
        printf("We are in a function where the values are assigned \n");
        ptr->a=12;
        ptr->b=23;
        ptr->c=35345345;
        //commenting below to save space 
        /*char arr[]="Akkshayabalaaji";
        char arr1[]="BaalajiAkshay";*/
        char * string=(char *)malloc(10);
        ptr->arr=string;
        strcpy((ptr->arr),"Akshay");
        char * string1=(char *)malloc(10);
        ptr->arr1=string1;
        strcpy((ptr->arr1),"Baalaji");


}
