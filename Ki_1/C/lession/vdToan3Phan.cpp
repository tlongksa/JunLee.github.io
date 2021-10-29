#include<stdio.h>

int main() {
	int number1 = 0;
	int number2 = 0;
	printf("Enter number1 : ");
	scanf("%d", &number1);
	printf("Enter number2 : ");
	scanf("%d", &number2);
	(number1 > number2) ? printf("Is the Max number1 \n") : printf("Is the Min number1 \n");
	(number1 < number2) ? printf("Is the Max number2 \n") : printf("Is the Min number2 \n");
	return 0;
}

