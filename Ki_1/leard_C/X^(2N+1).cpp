#include<stdio.h>
#include<math.h>
int main() {
	int  X = 0, n = 0, mul = 0;
	printf("Enter value X = ");
	scanf("%d", &X);
	printf("Enter value n = ");
	scanf("%d", &n);
	if (X <= 0) {
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
		mul = mul + pow (X,(2 * i) + 1); //Re-format code
	}
	printf("Value of = %d",mul);
	return 0;
}

