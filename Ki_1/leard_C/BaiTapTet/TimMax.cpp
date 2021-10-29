#include<stdio.h>

int main() {
	int n = 0;
	printf("Enter value n : ");
	scanf("%d", &n);
	while (n < 6) {
		printf("Plaese enter again ");
		printf("Enter value n : ");
		scanf("%d", &n);
	}
	int array[n];
	for (int i = 0; i < n; i++) {
		printf("Enter value of array[%d] : ", i);
		scanf("%d", &array[i]);
	}
	int max = array[0];
	for ( int i = 0; i < n; i++) {
		if (max < array[i]) {
			max = array[i];
		}
	}
	printf(" Max : %d", max);
	return 0;
}

