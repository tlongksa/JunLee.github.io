#include<stdio.h>
#include<conio.h>
int main() {
	int n = 0, i = 1, sum = 0;
    printf("Enter valur n = ");
    scanf("%d", &n);
    if (n <= 0) { // Format code !!!! printf
		while (n <= 0) {
			printf("Make mistakes, love to cross ! \n");
			printf("Enter value n = ");
	    scanf("%d", &n);
	    n++;
		}
	}
	for (i; i <= n; i++) // Format code lai
 	    if ((n % i) == 0) {
	    	sum += i;
	    	printf("%d ",i);
	    	i++;
		}
	printf("Total value : %d", sum);
	return 0;
}

