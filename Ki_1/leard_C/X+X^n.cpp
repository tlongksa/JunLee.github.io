#include<stdio.h>
#include<math.h>
int main() {
	int  X = 0, n = 0, sum = 0;
	printf("Enter value X = ");
	scanf("%d", &X);
	printf("Enter value n = ");
	scanf("%d", &n);
	if (X <= 0) {
		while (X <= 0) {
			printf("Make mistakes, love to cross ! \n");
		printf("Enter value X = ");
	    scanf("%d", &X);
	    n++;
		} 
	}
	for (int i = 1; i <= n; i++) {
		sum = sum + pow(X,i) ;
	}
	printf("Value of = %d",sum);
	return 0;
}

