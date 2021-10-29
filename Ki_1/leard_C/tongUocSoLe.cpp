#include<stdio.h>

int main() {
	int i = 1, n = 0, sum = 0;
	printf("Enter value n : ");
	scanf("%d", &n);
	if (n <= 0) {
		while (n <= 0) {
			printf("Make mistakes, love to cross ! \n");
			printf("Enter value n = ");
	    scanf("%d", &n);
	    n++;
		}
	}
	for (i; i <= n; i++) { //Re-Format code
		if ((n % i) == 0 && (i % 2) == 1) { // Gop 2 lenh lai thanh 1 lenh su dung &&
			sum += i;
		}
	}
	printf("Total value = %d", sum);
	return 0;
}

