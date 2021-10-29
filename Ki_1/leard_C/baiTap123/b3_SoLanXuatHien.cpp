#include<stdio.h>

int main() {
	int n = 0, max = 0; 
	int number[n];
	int number1[500] = {0};
	printf("Enter value number n : ");
	scanf("%d", &n);
	while (n <= 0) {
		printf("Please enter number again \n");
		printf("Enter value number n : ");
	  scanf("%d", &n); 
	}
	for (int i = 0; i < n; i++) {
		printf("Enter value = ");
		scanf("%d", &number[i]);
	}
	for(int i = 0; i < n; i++) {
	   printf("%5d", number[i]);
	}	 
	for(int i = 0; i < n; i++) {
		number1[number[i]] ++;
	}
	for(int i = 0; i < n; i++) {
		if (number1[number[i]] > max)
			max = number1[number [i]];
	}
	for(int i = 0; i <= 500; i++) {
		if (number1[i] == max) {
			printf("\nThe most number of occurrences is : %5d", i);
		}
	}
	
	return 0;
}
	
