#include<stdio.h>

int main() {
	int i = 1, n = 0;
	float sum = 0, result = 0;
	printf("Enter value n = ");
	scanf("%d", &n);
	if ( n <= 0) {
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
	for (i; i <= n; i++) {
		sum = sum + i;
		result = (float)1 / sum;	
	}
	printf("Value of = %f",result,sum);
	return 0;
}

