#include<stdio.h>
#include<math.h>
#include<conio.h>

int main() {
	int i= 1, n = 0;
	float sum = 0;
	printf("Enter value n = ");
	scanf("%d", &n);
	if ( n < 1) {
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
		sum = sqrt(2 + sum);
	}
	printf("Total value : %f", sum);
	return 0;
}

