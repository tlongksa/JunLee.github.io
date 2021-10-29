#include<stdio.h>


int main(int argc, char** argv) {
int n = 0, i = 0, x = 0;
	printf("Enter the number n =");
	scanf("%d", &n);
	while(n <= 6) {
	    printf("Invalid conditions \n");
	    printf("Enter the number n = ");
	    scanf("%d", &n);
	}
	int a[n];
	for(i ; i < n ; i++) {
	   printf("Enter the element = ");
	   scanf("%d", &a[i]);
	}   
	int index = -1;
	printf("Enter x = ");
	scanf("%d", &x);
	for(i = 0; i < n; i++) {
        if (x == a[i]) {
        	index =  i;
        }   
	}
    printf("%d", index + 1);   
	return 0;
} 
	
	
	


