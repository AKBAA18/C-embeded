#include<stdio.h>

int count = 0; // Global variable

// Entry function
void entry() {
    count++;
}

// Exit function
void exitFunc() {
    count--;
}

int main() {
    for (;;) {
    	printf("Enter 1 for entry 2 for exit 3 for display and breaking ");
        int n;
        scanf("%d", &n);
        
        switch (n) {
            case 1:
                entry(); 
                break;
            case 2:
                exitFunc();
                break;
            default:
                printf("\nBye \n");
                printf("\nNumber of users visited: %d\n", count); 
                return 0; // Exiting the program
        }
        if(n==3){
        	break;
		}
    }
    return 0;
}
