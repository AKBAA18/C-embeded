#include<stdio.h>

int main(){
	
	int a;
	printf("Enter a number for finding prime till or upto \n");
	scanf("%d",&a);
	int temp;
	printf("2 3 ");
	//for printing prime number till 
	for(int i=2;i<a;i++){
		for(int j=2;j<=(i/2);j++){
			if(i%j==0){
				temp=0;
				break;
			}
			else{
				temp=i;
			}
		}
		if(temp!=0){
			printf("%d ", temp);
		}
	}
	//For printing first n prime numbers 
	temp=0;//local variable can be garbage so assigning value 
	printf("\n %d \n", temp);
	printf("2 3 ");
	for(int i=2,till=0;((i<=1000) ^ (till==(a-2)));i++){
		for(int j=2;j<=(i/2);j++){
			if(i%j==0){
				temp=0;
				break;
			}
			else{
				temp=i;
			}
		}
		if(temp!=0){
			printf("%d ", temp);
			till++;
		}
	}
		
	
	return 0;
	
}