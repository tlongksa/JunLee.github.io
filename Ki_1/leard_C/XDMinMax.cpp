#include<stdio.h>

int main() {
    	int priceOfHp = 0; 
		int priceOfDell = 0;
		int priceOfAcer = 0;
    	printf("Enter the price of HP = ");
    	scanf("%d", &priceOfHp);
    	printf("Enter the price of Dell= ");
    	scanf("%d", &priceOfDell);
    	printf("Enter the price of Acer =  ");
    	scanf("%d",&priceOfAcer);
    int max = 0;
		max = priceOfHp;
	if ( max < priceOfDell){
		max = priceOfDell;
    }
	if (max < priceOfAcer){
		max = priceOfAcer;		
	}
	
	printf("Max = %d \n",max);		
		int min = 0;	
		min = priceOfHp;
    
	if (min > priceOfDell){
		min = priceOfDell; 
	}
	if (min > priceOfAcer){
	    min = priceOfAcer;
	}
	printf ("Min = %d \n ",min);
		return 0;
}

