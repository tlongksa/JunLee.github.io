#include<stdio.h>

int main() {
	int n = 0, a = 0, k = 0;
	int array[10];
	printf("Enter value n : ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("Enter value of array[%d] = ", i);
		scanf("%d", &array[i]);
	}
	printf("Enter value k : ");
	scanf("%d", &k);
	n++;
	for (int i = n ;i > k -1 ; i--) {
		array[i] = array[i - 1];
	}
	array[k] = 3;
	for (int i = 0; i < n; i++) {
	printf("%3d", array[i]);		
	}




	return 0;
}

