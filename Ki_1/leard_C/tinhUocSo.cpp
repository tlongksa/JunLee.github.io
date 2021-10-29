#include<stdio.h>
#include<conio.h>
int main() {
	int i = 1, n = 0, mul = 1; 
	printf("Enter value n : ");
	scanf("%d", &n);
	if (n <= 0) {
		while (n <= 0) {
			printf("Make mistakes, love to cross ! \n");
			printf("Enter value n = ");
	    scanf("%d", &n);
	    n++;
		}
	}
	/**
	* Not using loop to check conditions
	*/
	for (i; i <= n; i++){ // Them dau { }
		if ((n % i) == 0) {
			mul = mul * i;
			// mul *= i;
		}
	}
	printf("Total value = %d", mul);
	return 0;
}
// dang trong qua trinh sua chua
