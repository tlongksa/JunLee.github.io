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
	for (i ; i <= n; i++) { // Reformat code
		if ((n % i) == 0) {
		sum++;
		}
	}
	printf("Integer %d have %d number of estimates", n, sum);
	return 0;
}

