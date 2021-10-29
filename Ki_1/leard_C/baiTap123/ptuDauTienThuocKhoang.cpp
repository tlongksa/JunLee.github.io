#include<stdio.h>
#include<math.h>

int main() {
	int n = 0;
	printf("Enter value n : ");
	scanf("%d", &n);

	int array[n];
	for (int i = 0; i < n; i++) {
		printf("Enter value of array[%d] : ", i);
		scanf("%d", &array[i]);
	}
	int index = -1, x = 0, y = 0;
	printf("Enter value (x,y) : \n");
	scanf("%d", &x);
	scanf("%d", &y);
	for (int i = n; i >= 0; i--) {
		if (array[i] > x && array[i] < y) {
			index = i + 1;
		}
	}
	printf("Value : %d", index);
	return 0;
}

