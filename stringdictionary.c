#include<stdio.h>

void stringcompare(char * , char *  , char * );

int main()
{
	printf("Enter 3 strings \n");
	char arr[100];
	char arr1[100];
	char arr2[100];
	fgets(arr,sizeof(arr),stdin);
	fgets(arr1,sizeof(arr1),stdin);
	fgets(arr2,sizeof(arr2),stdin);
	printf("The first string is :%s\n",arr);
	printf("The seccond string is :%s\n",arr1);
	printf("The third string is :%s\n",arr2);
	printf("\n");
	stringcompare(arr,arr1,arr2);
	
	
	
	
}
void stringcompare(char* p,char * q , char *r )
{
	while(*p!=0 && *q!=0 && *r!=0){
		if(strcmp(p,q)<=0 && strcmp(p,r)<=0 ){
			printf("1 string is %s" ,p);
			break;
		}
		else if(strcmp(q,p)<=0 && strcmp(q,r)<=0 ){
			printf("1 string is %s" ,q);
			break;
		}
		else{
			printf("1 string is %s" ,r);
			break;
		}
		
		p++;
		q++;
		r++;
	}
	while (*p != '\0' && *q != '\0' && *r != '\0') {
        
		if ((strcmp(p, q) >= 0 && strcmp(p, r) <= 0) || (strcmp(p, q) <= 0 && strcmp(p, r) >= 0)) {
	        printf("2 string is: %s", p);
	        break;
	    } 
		else if ((strcmp(q, p) >= 0 && strcmp(q, r) <= 0) || (strcmp(q, p) <= 0 && strcmp(q, r) >= 0)) {
	        printf("2 string is: %s", q);
	        break;
	    } 
		else {
	        printf("2 string is: %s", r);
	        break;
	    }
	    p++;
	    q++;
	    r++;
	}
	while(*p!=0 && *q!=0 && *r!=0){
		if(strcmp(p,q)>=0 && strcmp(p,r)>=0 ){
			printf("3 string is %s" ,p);
			break;
		}
		else if(strcmp(q,p)>=0 && strcmp(q,r)>=0 ){
			printf("3 string is %s" ,q);
			break;
		}
		else{
			printf("3 string is %s" ,r);
			break;
		}
		p++;
		q++;
		r++;
	}

}