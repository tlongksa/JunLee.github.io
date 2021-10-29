#include<stdio.h>

int main() {
	int n = 0;
	printf("Enter value number n : ");
	scanf("%2d", &n);
	while (n < 6) {
		printf("Please enter number again \n");
		printf("Enter value number n : ");
	  scanf("%2d", &n); 
	}
	int array[n];
	for (int i = 0; i < n; i ++) {
		printf("Enter value of array[%d] : ", i);
		scanf("%3d", &array[i]);
	}
 	int a = 0;	
 	for (int i = n - 1; i > 0; i--) {
 		for (int j = 0; j < i; j ++) {
 			if (array[j] > array[j + 1]) {
 				a = array[j];
 				array[j] = array[j + 1];
 				array[j + 1] = a ;
		 }
	 }
 }
	for (int i = 0; i < n; i ++) {
		printf("%3d", array[i]);
 }
	return 0;
}

