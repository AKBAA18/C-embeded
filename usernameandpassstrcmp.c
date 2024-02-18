#include <stdio.h>
#include <string.h>

int strcompare(char *p, char *q) ;

int main() {
    char arr[100];
    char arr1[100];

    printf("Enter Username: ");
    scanf("%s", arr);

    printf("Enter password: ");
    scanf("%s", arr1);

    if ((strcmp(arr, "AkshayaBaalaji") == 0) && (strcmp(arr1, "Baalaji12Akshay") == 0)) {
        printf("Entered\n");
    } else {
        printf("Please check credentials\n");
    }

    printf("Using the custom function:\n");
    int result = strcompare(arr, arr1);
    printf("The value passed from the function: %d\n", result);

    if (result == 0) {
        printf("Entered\n");
    } else {
        printf("Check credentials\n");
    }
    printf("Here we are doing strcmp (bulit in function used) \n");
	int result1 =strcmp(arr, arr1); 
	if(result1==0){
		printf("Entered");
	}
	else{
		printf("Check credential");
	}
	printf("\n");

    return 0;
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
