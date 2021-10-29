#include<stdio.h>

int main() {
	int n = 0;
	printf("Enter value n : ");
	scanf("%d", &n);
	int array[n];
	for (int i = 0; i < n; i++) {
		printf("Enter value of array[%d] = ", i);
		scanf("%d", &array[i]);
	}
	int index = -1;
	for (int i = 0; i < n; i++) {
		if (array[i] > -1)
		index = array[i];
	}
		printf("%d", index);
	return 0;
}

