#include<stdio.h>

int main() {
	int n = 0, i = 0;
	int location, value;
	printf("Enter value number n : ");
	scanf("%2d", &n);
	while (n < 0) {
		printf("Please enter number again \n");
		printf("Enter value number n : ");
	  scanf("%2d", &n); 
	}
	int array[n];
	for (int i = 0; i < n; i ++) {
		scanf("%3d", &array[i]);
	}
	printf("Enter the location where you wish to insert an element : ");
	scanf("%d", &location);
 	printf("Enter the value to insert : ");
  scanf("%3d", &value);
	for (i ; i > location - 1; i --) {
		array[i + 1] = array[i];
	}
	array[location - 1] = value;
	printf("Resultant array is : ");
	for (i; i <= n; i++) {
		printf("%3d", array[i]);
	}

	return 0;
}

