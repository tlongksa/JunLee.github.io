#include<stdio.h>

int main() {
	int n = 0;
	printf("enter value n : ");
	scanf("%d", &n);
	while (n < 6) {
		printf("Plesea enter again ! ");
		printf("Enter value n : ");
		scanf("%d", &n);
	}
 	int array[n];
	for (int i = 0; i < n; i++) {
		printf("Enter value of array[%d] : ", i);
		scanf("%d", &array[i]);
	}
	int x = 0;
	printf("Value of X : ");
	scanf("%d", &x);
	int location = 0;
	for (int i = 0; i < n; i++) {
		if (x == array[i]) {
			location = i + 1;
			printf("Value : %d ", location);
		}
	}
	return 0;
}

