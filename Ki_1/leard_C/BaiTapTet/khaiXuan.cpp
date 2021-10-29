#include<stdio.h>

int main() {
	int n = 0;
	printf("Enter value n : ");
	scanf("%d", &n);
	while (n<= 6) {
		printf("Plesae enter again !");
		printf("Enter value n : ");
		scanf("%d", &n);
	}
	int array[n];
	for ( int i = 0; i < n; i ++) {
		printf("Enter value od array[%d] : ", i);
		scanf("%d", &array[i]);
	}
	int x = 0;
	printf("Enter value of number X : ");
	scanf("%d", &x);
	int k = 0;
	n ++;
	for (int i = n; i > k - 1; i --) {
		array[i] = array[i - 1];
	}
	array[k] = x;
	for (int i = 0; i < n; i++) {
		printf("%2d", array[i]);
	}
	return 0;
}

