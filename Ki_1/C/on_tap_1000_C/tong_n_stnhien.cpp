#include<stdio.h>

int main() {
 int Sum = 0, n = 0;
 printf("\n Enter value of n : ");
 scanf("%d", &n);
 if (n < 0) {
 	printf("Errors please again \n");
 	printf("Enter value of n :");
 	scanf("%d", &n);
 }
 for (int i = 0; i <= n; i++) {
 	Sum = Sum + i;
 }
	printf("Vualue of n natural number = %d",Sum);		
	return 0;
}

