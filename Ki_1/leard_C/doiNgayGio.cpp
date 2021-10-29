#include<stdio.h>
int main() {
	
   int sec = 0;
   printf ("Nhap gia tri cua Sec(Enter value of second: ) = ");
   scanf("%d", &sec);
   float min = (float)sec / 60;
   float day = (float)sec / ( 3600 * 24 );
   float year = (float)sec / (3600 * 24 * 365);
   printf("%d sec va %f min va %f day va %f year ", sec, min, day, year);
   return 0;
}

