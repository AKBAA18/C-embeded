#include<stdio.h>
#include<stdlib.h>

int main(int a , char *arr[])
{
        printf("Input we will get from command arguments\n");
        printf("The first input entered is %s \n" , arr[1]);
        int tic=atoi(arr[1]);
        char classs=arr[2][0];
        printf("Hi %s your class is %c and the seat numbers are \n",arr[3],classs);
        int *ticket=(int *)calloc(tic,sizeof(int));
        if(classs=='G'){
                for(int i=0;i<tic;i++){
                        printf("Enetr a seat number bet 1-50 ");
                        scanf("%d", &ticket[i]);
                        printf("\n");
                }
        }
        if(classs=='S'){
                for(int i=0;i<tic;i++){
                        printf("Enetr a seat number bet 50-100 ");
                        scanf("%d",&ticket[i]);
                        printf("\n");
                }
        }
        printf("\n\nYour ticket numbers are \n");
        for(int i=0;i<tic;i++){
                printf("%d the seat number is %d\n",i,ticket[i]);
        }
        int *realticket=(int *)calloc(tic,sizeof(int));
        int start=1;
        if(classs=='G'){ // indexing method 
                for(int i=0;i<tic;i++){
                        realticket[i]=start;
                        start++;
                }
        }
        start=50;
        printf("%d\n", *realticket);
        int *q=realticket;
        if(classs=='S'){ // address increment method 
                for(int i=0;i<tic;i++){
                        *realticket=start;
                        start++;
                        realticket=realticket+1;
                }
        }//Here the realticket will be poiting to the last elemenmt and now we assigned to first element address 
        realticket=q;
        printf("\n\nYour original ticket numbers are \n");
        for(int i=0;i<tic;i++){
                printf("%d the seat number is %d\n",i,realticket[i]);
        }
}

