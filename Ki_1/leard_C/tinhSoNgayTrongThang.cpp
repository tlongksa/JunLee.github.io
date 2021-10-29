#include<stdio.h>

int main() {
	int day = 0;
	int month = 0;
	int year = 0;
   		printf("Enter the number of day( 1 -> 31 ) : \n ");
    	scanf("%d" , &day);
   		printf("Enter the number of month ( 1 -> 12 ) : \n");
		scanf("%d", &month);
		printf("Enter the number of year ( > 1900 )");
		scanf("%d", &year);

    if(month == 4 || month == 6 || month == 9 || month == 11)
    {
		printf("is the month with 30 days \n");
	}
	else 
		if( month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 12) {
			printf("Is the month with 31 days \n");
		}
		else {
			if((year % 4 == 0 && year % 100 == 0) || (year % 400 == 0))
				printf("Is the month with 29 days \n");
			else printf ("Is the month with 28 days \n");
		}
	return 0;
}


