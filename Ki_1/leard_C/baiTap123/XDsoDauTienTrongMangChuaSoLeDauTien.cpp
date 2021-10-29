#include<stdio.h>
#include<math.h>
int main() {
	int n = 0;
	printf("Enter value n : ");
	scanf("%d", &n);
	int array[n];
	for (int i = 0; i < n; i++) {
		printf("Enter value of array[%d] = ", i);
		scanf("%d", &array[i]);
	}
	int count = 0, index = 0;
	for (int i = n; i >= 0; i--) {
		int a = array[i];
		while (a != 0) {
			count = a%10;
			a = a / 10;
		}
		if (count%2 != 0) {
			index = array[i];
	  }
	}
	printf("Value : %d", index);

	return 0;
}

