#include<stdio.h>
#include<math.h>
//tinh giai thua
int gt(int n)
{
	int result=1;
	if(n==1)
	{
		return 1;
	}
	for(int i=1;i<=n;i++)
	{
		result*=i;
	}
	return result;
}
//check so chinh phuong
int isSquare(int n)
{
        for(int i=2;i<=n/2;i++)
        {
        	if(i*i==n)
        	{
				return 1;
			}
		}
		return 0;
}
//ham check so nguyen to
int isPrime(int n)
{
	if(n<2)
	{
	
	return 0;
	}
	else
	{
		for(int i=2;i<=(float)sqrt(n);i++)
		{
			if(n%i==0)return 0;
		}
	}
	return 1;
}


//ham tinh uoc chung lon nhat
int gcd(int a,int b)
 {
     return (b==0)? a:gcd(b,a % b);
 }
 
//ham doi cho 
void swap(int &x, int &y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
//ham sap xep 3 so abc
void sortUpTo(int a, int b, int c)
{
	if(a>b)
	{
		swap(a,b);
	}
	if(a>c)
	{
		swap(a,c);
	}
	if(b>c)
	{
		swap(b,c);
	}
}
//ham tim so nho nhat
int findMin(int a, int b, int c)
{
	int min=a;
	if(b<min)
	{
		min=b;
	}
	if(c<min)
	{
		min=c;
	}
	return min;
}


                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
