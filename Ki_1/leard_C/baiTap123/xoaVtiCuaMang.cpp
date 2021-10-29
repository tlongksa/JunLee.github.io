#include<stdio.h>

int main() {
	int i = 0, n = 0, x = 0, a[100];
  
	printf("Enter value number n : ");
	scanf("%2d", &n);
	while (n < 0) {
		printf("Please enter number again \n");
		printf("Enter value number n : ");
	  scanf("%2d", &n); 
	}
 	int number[n];
 	int number1[i];
	for (int i = 0; i < n; i++) {
		printf("Enter value = ");
		scanf("%d", &number[i]);
	}
	printf("Enter value X : ");
  scanf("%d",&x);
  
  for(int i = 0; i < n - 1; i++) {
		a[i] = a[i + 1];
		i--;		
	}
	
  printf("%3d",a[i]); 
	
	return 0;
}

