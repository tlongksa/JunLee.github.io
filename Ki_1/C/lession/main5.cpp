#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	printf(" nhap Gia tri Cua n = ");
	scanf("%d",&n);
	if(n > 0){
		if(n%2 == 0) printf("%d la So Chan",n);
		else printf("%d la So Le",n);
	}
	
	
	
	
	
	return 0;
}
