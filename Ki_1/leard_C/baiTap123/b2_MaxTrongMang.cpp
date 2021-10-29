#include<stdio.h>
#include<iostream>

int main() {
	int n = 0, max = 0;
	printf("Enter value number n : ");
	scanf("%d", &n);
	while (n <= 0) {
		printf("Please enter number again \n");
		printf("Enter value number n : ");
	  scanf("%d", &n); 
	}
	int number[n];
	for (int i = 0; i < n; i++) {
		printf("Enter value : ");
		scanf("%d", &number[i]);
	}
	int number1 = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (number[i] == number[j]) {
				number1 ++;
			}
		}
		if (number1 == 0)
		printf("%3d", number[i]);
	} 
 

	printf("\nMax = %d ", max);  
	return 0;
}

