#include<stdio.h>

int main() {
	int a = 150;
	int *i = &a;
	int **ii = &i;
	printf("gia tri cua a = %d", a );
	printf("\ngia tri con tro cua a = %d",**ii );
	return 0;
}

