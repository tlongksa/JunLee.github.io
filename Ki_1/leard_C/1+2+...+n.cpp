#include<stdio.h>

int main() {
	int n = 0, sum = 0, i = 0;
	printf("Enter value n = ");
	scanf("%d", &n);
	if (n <= 0) {
		printf("Make mistakes, love to cross ! \n");
		printf("Enter value n = ");
	    scanf("%d", &n);
	}
 c1
	while (i++ < n) {
		sum = sum + i;
	}
	printf("Value of = %d",sum);
//c2
//	for (i = 0; i <= n; i++) {
//		sum = sum + i;
//		//hoac
//		sum += i;
//	}
//	printf("Value of = %d",sum);
//c3
//	do {
//		sum = sum + i;
//	} while (i++ < n);  // Ghi nho this format
//	printf("Value of = %d",sum);
	return 0;
}

