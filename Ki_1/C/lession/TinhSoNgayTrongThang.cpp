#include<stdio.h>

int main() {
	int day = 0;
	int month = 0;
	int year = 0;
	int daymax = 0;
	printf("Enter the number of day ( 1 -> 31) : ");
	scanf("%d", &day);
	printf("Enter the number of month (1 -> 12) : ");
	scanf("%d", &month);
	printf("Enter the number of year (> 1900) : ");
	scanf("%d", &year);
	if (year > 1900 || (month > 0 && month < 12) || (day > 0 && day < 31 ))
	

	 	switch(month){
	 		case 1 :
	 		case 3 :
            case 5 :
            case 7 :
            case 8 :
            case 10 :
            case 12 :
			daymax = 31;	
			printf("Is the 31th \n");
			break;
		case 2:
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0 )
		 	printf("Is the 29th \n" );
		else printf("Is the 28th \n" );
			break;
			case 4:
            case 6:
            case 9:
            case 11:
            daymax = 30;
            printf("Is the 30th \n" );
			break;	
		}
		if (day <= daymax){
			printf("Valid date \n" );
		}
		else {
			printf("Invalid date \n" );
		}

     return 0;

}
