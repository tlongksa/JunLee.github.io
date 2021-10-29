#include<stdio.h>

int main() {
	float S = 0;
	int n = 0;
	printf("Enter value n :");
	scanf("%d", &n);
	
	for (int i; i <= n ; i++){
			S = S + (float)1 / ((2 * i) + 1);
	}
	
		printf("Sum = %f",S);
//	for (int i = 0; i < n; i++)
//	{
//	S = S + 1.0 / ((2 * i) + 1);
//	}
//	
//	printf("\nTong la: %f", S);
	return 0;
}

