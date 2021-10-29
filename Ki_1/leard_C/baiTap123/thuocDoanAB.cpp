#include<stdio.h>
#include<math.h>

int main() {
	int n = 0;
	printf("Enter value n : ");
	scanf("%d", &n);

	float array[n];
	for (int i = 0; i < n; i++) {
		printf("Enter value of array[%d] : ", i);
		scanf("%f", &array[i]);
	}
	float min = array[0];
	for (int i = 0; i < n; i++) {

		if (min > array[i])
		min = array[i];

	}
	float max = array[0];
	for (int i = 0; i < n; i++) {

		if (max < array[i])
		max = array[i];

	}
	printf("Value array[n] belong [%.1f , %.1f]",floor(min), ceil(max));
	return 0;
}

