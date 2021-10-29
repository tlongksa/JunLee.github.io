#include<stdio.h>

int main() {
	int n = 0, max = 0, index = -1 ;
	
	printf("Enter value n : ");
	scanf("%d", &n);
	while (n < 6) {
		printf("Please enter again ");
		printf("Enter value n : ");
		scanf("%d", &n);
	}
	int array[n];
	for ( int i = 0 ; i < n ; i++) {
		printf("Enter value : ");
		scanf("%d", &array[i]);
	}
	
	for ( int i = 0 ; i < n ; i++) {
		if (array[i] > max ) {
			max = array[i];
			index = i;
		}
	}
	printf("value :  %d", (index + 1));
				


	return 0;
}

