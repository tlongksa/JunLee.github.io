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
	    printf("Enter value X = ");
	    scanf("%d", &X);
	   	X++;
		}
	}
	while ( i <= n) {
		if ((n % i) == 0) {
			if ((i % 2) == 1)
			printf("Odd multiples are %2d \n", i);
		}
		i++;
	}

	return 0;
}

