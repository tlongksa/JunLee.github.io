#include<stdio.h>

int main() {
	int n = 0, sum = 0;
	int i = 0;
	printf("Enter value n: ");
	scanf("%d", &n);

		while (n <= 0) {
			printf("Make mistakes, love to cross ! \n");
			printf("Enter value n = ");
	    scanf("%d", &n);
	    n++;
	    printf("Enter value X = ");
	    scanf("%d", &X);
	    X++;
		}
	
//	for (i ; i <= n; i++) {
//		sum = sum + (i * i);
//	}
//	while (i++ < n) {
//		sum = sum + (i * i);
//	}
	do {
		sum = sum + (i * i);
	}while(i++ < n);
	printf ("Value of = %d", sum);




	return 0;
}

