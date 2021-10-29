#include<stdio.h>

int main() {
	int n = 0;
	printf("Enter value number n = ");
	scanf("%d", &n);
	while (n < 6) {
		printf("Please enter again");
		printf("Enter value number n = ");
		scanf("%d", &n);
	}
	int array[n];
	for (int i = 0; i < n; i ++) {
	printf("Enter value of array[%d] : ", i);
	scanf("%d", &array[i]);		
	}
//	int x = 0, sum = 0;
//	printf("Enter the value to insert of X : ");
//	scanf("%d", &x);
	for  ( int i = 0; i < n; i++) {
		array[i] = i;
		printf("%d", i);
	}
	
	return 0;
}
// e moi tim dk kich thuoc mang aj chua lm ddk chen sau no
