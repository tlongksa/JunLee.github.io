#include<stdio.h>
#include <iostream>

int main() {
	int n = 0, sum = 0, i = 0;
	printf("Enter value n :");
	scanf("%d", &n);// n = 7
		while ((n <= 5) && (n%2 != 0)) {
			printf("Please enter again \n");
			printf("Enter value n = ");
	    scanf("%d", &n);
	 }
	 printf ("Thanh Cong");
	

	return 0;
}
// nhap 1 mang gom n ptu, dk n >= 5, n % 2, tinh tong cac ptu chan trong mang  
