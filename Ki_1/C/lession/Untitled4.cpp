#include<stdio.h>
#define h 60
int main() {
	int s = 0;
	printf("so Giay Ban Can Nhap = ");
	scanf("%d", &s);
	int m = s / 60;
	int so_du = s % 60;
	printf("%d m va %d s", m, so_du);
	  
	return 0;
}

