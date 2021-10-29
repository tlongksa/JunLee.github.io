#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n = 0;
	
	printf("Nhap Vao So Ngyen n = ");
	
	scanf("%d", &n);  
	
	if (n > 0){
		
		if(n%2 == 0)
		
	     	printf("%d la so chan", n);
	     	
	    else printf("%d la so le",n);
	}
	
	return 0;
	
}
