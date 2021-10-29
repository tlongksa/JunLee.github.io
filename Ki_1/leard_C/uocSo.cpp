#include <stdio.h>
#include <conio.h>
 
int main() {
  	int n = 0, i = 0;
	printf("Enter valur n = ");
  	scanf("%d", &n);
  	printf("Estimated numbers of %d is : ", n);
  	for (i = 1; i <= n; i++) { // Re-format code
  		if ((n % i) == 0) {
  			printf("%3d", i);
			}
		}
	return 0;
}

