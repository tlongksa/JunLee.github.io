#include<stdio.h>

int main() {
	int n = 0, i = 1;
	float S = 0;
	printf("Enter value n = ");
	scanf("%d", &n);
	for (i; i <= n ; i++) {
		S = S + (float)1 / i;
	}
//	while ( i++ < n) {
//		S = S + (float)1 / i;
//	}
//	do {
//		S = S + (float)1 / i;
//	}while( i++ < n);
	printf ("Value of = %f", S);
	return 0;
}

