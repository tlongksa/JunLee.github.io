#include<stdio.h>

int main() {
	int i = 0, n = 0, location, value;
	int number[100];
	printf("Enter value n = ");
	scanf("%d", &n);
	printf("Enter %d elements\n", n);
	for (i; i < n; i ++) {
		scanf("%d", &number[n]);
	}
	printf("Enter the location you want to insert the element ");
	scanf("%d", &location);
	printf("Enter value ");
	scanf("%d", &value);
	for (i = n - 1; i >= location - 1; i --) {
		number[i + 1] = number[i];
	}
	number[location - 1] = value;
	printf("Resultant array is");
	for (i = 0; i <= n; i ++) {
		printf("%3d", number[i]);
	}
	return 0;
}

