#include<stdio.h>
int main(){
	int length = 0,width = 0;
	printf("Nhap width :");
	scanf("%d", &width);
	printf("Nhap length:");
	scanf("%d", &length);
	for(int i = 1; i <= width; i++) {
		for(int j = 1; j < length; j++){
			printf(" * ");
		}
		printf(" *\n");
	}
	return 0;
}

