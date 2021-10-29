#include <stdio.h>

int main(int argc, char** argv) {
	int a = 0 ;
	int b = 0 ;
	int c = 0 ;
    
    printf("Nhap gia tri cua a = ");
    scanf("%d", &a);
    printf("Nhap gia tri cua b = ");
    scanf("%d",&b);
    printf("Nhap gia tri cua c = ");
    scanf("%d",&c);
    
    int summation = a + b + c ; 
	int subtraction = a - b - c;
    int multiplicaion = a * b * c;
//  float divion = (float)(a / b / c);
//	float division = a*1.0 / b / c; => Chu y: Ep kieu
	  
	printf("%d\n",summation);
    printf("%d\n",subtraction);
    printf("%d\n",multiplicaion); 
	printf("%f\n", division);
    return 0;
}
