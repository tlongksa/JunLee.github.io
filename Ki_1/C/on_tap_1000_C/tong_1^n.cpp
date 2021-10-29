#include<stdio.h>
#include<conio.h>

int main() {
	int n = 0, T = 0;
	printf("\nEnter value number n : ");
	scanf("%d", &n);
	if(n < 0) {
		printf("Error again number n !");
		printf("\Enter value of number n :");
		scanf("%d", &n);
	}
	for ( int i = 0; i <= n; i++) {
		T = T + i * i;
	}
	printf(" Valua of calculation : %d", T);
	return 0;
}

