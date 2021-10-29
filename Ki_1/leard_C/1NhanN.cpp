#include<stdio.h>
#include<math.h>
int main() {
	int n = 0, fac = 1;
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
	for (int i = 1; i <= n; i++) {
		fac = fac * i;
	}	
	printf("Value of = %d",fac);
	return 0;
}

