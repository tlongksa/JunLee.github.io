#include<stdio.h>
#include<math.h>
int main() {
	int n = 0, sum = 0;
	printf("Enter value n : ");
	scanf("%d", &n);
	while (n < 0) {
		printf("Please again ");
		printf("Enter value n: ");
		scanf("%d", &n);
	}
	int array[n];
	for (int i = 0; i < n; i++) {
		printf("Enter value of array ");
		scanf("%d", &array[i]);
	}
	int x = 0;
	printf("Enter value x :");
	scanf("%d", &x);
	int min = abs(array[0] - x);
	for (int i = 0; i < n; i++) {
	int number = abs(array[i] - x);
		if ( min > number)
			min = number;
	}
	min = abs(min + abs(x));
	printf("Value = %d", min);

	return 0;
}

