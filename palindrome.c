#include<stdio.h>
#include<string.h>

int main(){
	int n;
	printf("Enter the number to find palindrome \n");
	scanf("%d",&n);
	getchar(); // dont know why ?
	
	char str[100];
	printf("\nEnter the string to fnid the palindrome \n");
	fgets(str,sizeof(str),stdin);
	
	int temp=n;
	int rev;
	int mod;
	while(n!=0){
		mod=n%10;
		rev=rev*10+mod;
		n=n/10;	
	}
	if(temp==rev){
		printf("\nYou have entered a palindrome number \n");
	}
	else{
		printf("\nYou have entered a number which is not palindrome\n");
	}
	printf("\n");
	
	//for making the late word to \0 from \n
	if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
    for(int i=0;i<strlen(str);i++){
		printf("%c ",str[i]);
	}
	printf("\n");
	char tempp[100];
	for(int i=strlen(str)-1,j=0;i>=0;i--,j++){
		tempp[j]=tempp[j]+' '+str[i];
	}
//	printf("The temp is \n%s\n" , tempp);
	for(int i=0;i<strlen(tempp);i++){
		printf("%c ",tempp[i]);
	}
	if(strcmp(str,tempp)==0){
		printf("Entered string is a palindrome \n");
	}
	else{
		printf("Entered string is not a plaindrome \n");
	}
	
	
}