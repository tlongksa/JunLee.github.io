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
 	int min = 0, a = 0;	
 	for (int i = 0; i < n - 1; i++) {
 		min = array[i];
 		for (int j = i + 1; j < n; j ++) {
 			if (array[j] < min) {
 				min = array[j];
 				a = array[i];
 				array[i] = array[j];
 				array[j] = a ;
		 }
	 }
 }
	for (int i = 0; i < n; i ++) {
		printf("%d", array[i]);
 }
	return 0;
}

