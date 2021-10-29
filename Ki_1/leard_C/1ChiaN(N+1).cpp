#include<stdio.h>

int main() {
	int n = 0, i = 1;
	float S = 0;
	printf("Enter value n = ");
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
	for (i; i <= n ; i++) {
		S = S + (float)1 / (i * (i + 1));
	}
//	while (i++ < n) {
//		S = S + (float)1 / (i * (i + 1));
//	}
//	do {
//		S = S + (float)1 / (i * (i + 1));
//	}while(i++ < n);
	printf ("Value of = %f", S);




	return 0;
}

