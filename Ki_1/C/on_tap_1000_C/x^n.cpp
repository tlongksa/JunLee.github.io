#include<stdio.h>
#include<math.h>

int main() {
	int n = 0, sum = 0, x = 0;
	printf("Enter value of X : ");
	scanf("%d", &x);
	printf("Enter value of number n : ");
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
	sum =  pow(x , n);
	}
	printf("value %d^%d : %d", x, n, sum);
	
	return 0;
}

