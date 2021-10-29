#include<stdio.h>

int main() {
	int n = 0, sum = 0;
	printf("Enter value number n : ");
	scanf("%d", &n);
	while (n < 6) {
		printf("Please enter number again \n");
		printf("Enter value number n : ");
	  scanf("%d", &n); 
	}
	int number[n];
		for (int i = 0; i < n; i++) {
		printf("Enter value = ");
		scanf("%d", &number[i]);
		sum += number[i];
		}
		printf("Result = %d \n", sum);
		for(int i = 0; i < n; i++) {
	   printf("%5d", number[i]);
		}	 
		return 0;
}

