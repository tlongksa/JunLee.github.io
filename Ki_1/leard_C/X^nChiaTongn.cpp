#include<stdio.h>
#include<math.h>
#include<conio.h>
int main() {
	int i = 0, n = 0, X = 0;
	float sum = 0, sum1 = 1, sum2 = 1;
	printf("Enter value n = ");
	scanf("%d", &n);
	printf("Enter value X = ");
	scanf("%d", &X);
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
	for (i; i <= n; i++) {
		sum1 = sum1 + pow(X,i);
		sum2 = sum2 + i; // Tinh sai => Xem lai logic
//		sum1 = sum1 * X;
//		sum2 =sum2 * i;
		sum = (float)sum1 / sum2;
	}
	printf("Value of = %f",sum);
	return 0;
}
// dang saai chuwa nop
