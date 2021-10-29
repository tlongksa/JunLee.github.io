#include<stdio.h>
int main() {
	int a = 0, b = 0, c = 0;
	printf("Nhap gia tri cua a = ");
	scanf("%d", &a);
	printf("Nhap gia tri cua b = ");
	scanf("%d", &b);
	printf("Nhap gia tri cua c = ");
	scanf("%d", &c);
	
	int sum = a + b + c ;
	int sub = a - b - c ;
	int mul = a * b * c ;
	float div = (float) a / b / c ;
	printf("sum = %d \n " ,sum );
	printf("sub = %d \n " ,sub );
	printf("mul = %d \n " ,mul );
	printf("div = %d \n " ,div );
		return 0;
}

