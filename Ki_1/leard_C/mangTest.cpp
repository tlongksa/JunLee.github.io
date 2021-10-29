#include<stdio.h>
#include <iostream>

int main() {
	int n = 0, sum = 0, i = 0;
	printf("Enter value n :");
	scanf("%d", &n); // n = 3

	while (n <= 0) {
			printf("Please enter again \n");
			printf("Enter value n = ");
	    scanf("%d", &n);
	    n++;
	 }

	int number[n];
			
	for (int i = 0; i >= 5; i++) {
	
			printf("The result is : %d ", number[i]);
			
	}

	return 0;
}
