#include <stdio.h>
#include <string.h>

int countlen(char *);
int strcompare(char *, char *) ;
char *funstrchr(char *,char );
char * funstrstr(char *,char * );

int main() {
    char arr[100];
    char arr1[100];

    printf("Enter Username: ");
    scanf("%s", arr);

    printf("Enter password: ");
    scanf("%s", arr1);

    printf("Using the custom function for instead of strcmp:\n");
    int result = strcompare(arr, arr1);
    printf("The value passed from the function: %d\n", result);

    if (result == 0) {
        printf("SAME LOGIN\n");
    } else {
        printf("Check credentials\n");
    }
    printf("\n");
	printf("Using the custom function instead of strlen \n");
	int length=countlen(arr);
	printf("Length of the string / username is %d\n",length);
	printf("\n");
	
	printf("User defined functions instead of strchr\n");
	printf("Enter a charecter to search in username \n");
	char a;
	while (getchar() != '\n');     // for clearing input buffer 
	scanf("%c",&a);
	printf("\n");
	char * returnn=funstrchr(arr,a);
	if(returnn>=0){
		printf("The occurence of the first match for char is %d\n",returnn-arr);
	}
	else{
		printf("There is no match of that particular char \n");
	}
	printf("\n");
	
	printf("User defined functions instead of strstr\n");
	printf("Enter a charecter to search in username \n");
	char sample[100];
	while (getchar() != '\n');
	scanf("%s",a);
	char * points=funstrstr(arr,sample);
	printf("\n%p:",points);
	if(returnn>=0){
		printf("The occurence of the first match for string is %d\n",points-arr);
	}
	else{
		printf("There is no match of that particular char \n");
	}
	

    return 0;
}
int countlen(char *p) {
    printf("Now we are in another function for counting the length of string\n");
    int length = 0;
    for(int i = 0; p[i] != '\0'; i++) {
        length++;
    }
    return length;
}
int strcompare(char *p, char *q){
	while(*p && *q ){
		if(*p !=*q){
//			return 4;
			return (*p - *q);
		}
		p++;
		q++;
	}
    return (*p - *q); // Compare ASCII value
}
char * funstrchr(char *p,char a ){
	char **q=&p;
	while (*p!=0){
		if(*p==a){
			return p;
		}
		p++;
	}
	return NULL ;	
}
char * funstrstr(char *p,char *q){
//	char **temp=&p;
	for(;*p!=0;p++)
	{
		while (*p==*q && *p!='\0' && *q!='\0'){
			p++;
			q++;
		}
		if(*q=='\0'){
			return p;
		}
	}
	return NULL;	
}