#include<stdio.h>

int main() {
	int n = 0;
	printf("Enter value n : ");
	scanf("%d", &n);
	while (n < 8) {
		printf("Please enter number again");
		printf("Enter value n : ");
		scanf("%d" ,&n);
	}
	int array[n];
	for (int i = 0; i < n; i++) {
		printf("Enter value of array[%d] : ", i);
		scanf("%d", &array[i]);
	}
	int x = 0;
	printf("Enter the value to insert of X : ");
	scanf("%d", &x);
	int y = 0;
	n--;
	for (int i = n; i < y - 1; i--) {
		array[i] = array[i + 1];
	}
	for (int i = 0; i < n; i++) {
		printf("%3d", array[i]);
	}
	return 0;
}

