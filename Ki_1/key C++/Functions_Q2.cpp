#include <stdio.h>
#include <stdlib.h>
#inlcude <math.h>
//tinh cosin(co dk)
double calCos(double x, double c)
 {// Write your statements here
  double s=0;
  int n=0;
  while (fabs( (pow(x,2*n)) / gt(2*n) ) > c )
  {
  		s=s+ pow(-1,n) * ( (pow(x,2*n)) / gt(2*n) );
  		n++;
  }

  return(s); //This statement must be changed 
 }
 
 
 //tinh sin
 double calSin(double x, double c)
 {// Write your statements here
  double s=0;
  int n=0;
  while (fabs( (pow(x,2*n+1)) / gt(2*n+1) ) > c )
  {
  		s=s+ pow(-1,n) * ( (pow(x,2*n+1)) / gt(2*n+1) );
  		n++;
  }

  return(s); //This statement must be changed 
 }
 
 //xoa phan tu mang tai vi tri nhap vao tu ban phim
 void dele (int a[] , int &n ,  int k)
{
	for(int i=k+1;i<n;i++)
	{
		a[i-1]=a[i];
	}
	n--;//vi xoa nen so luong phan tu mang se giam dan thanh n--
}
//them 1 phan tu mang tai1 vi tri nhap vao tu ban phim
int add(int a[] , int &n ,int x, int k)
{
	for(int i=n-1;i>=k;i--)
	{
		a[i+1]=a[i];	
	}
	a[k]=x;
	n++;//vi them nen so luong phan tu mang se tang nen thanh n++
}
//tim phan tu mang tra ve vi tri
int search(int a[], int n, int x)
 {
	int i,result=-1;
	for (i=0; i<=n; i++)
	{
		if (a[i] == x && result<=0)
		{
			result = i;
		}
	}
	return(result); // this statement must be changed
 }

//neu n chan thay the so nho nhat =-99 con neu n le xoa so nho nhat cua ham
void fun(int a[], int &n)  // You should complete this function
  // Write your statements here
{
	int k;
	if(n%2==0)
	{	
		for (int i=0; i<n; i++)
		{	
			if (a[i]==NhoNhat(a,n))
			{
				a[i]=-99;
				break;
			}
		}	
	}
	else
	{
		for(int i=0; i<n ;i++)
		{
			if(a[i]==NhoNhat(a,n))
			{
			
					xoavitri(a,n,i);
					
					break;				
			}
		}
	}	
}
// tim so nguyen to tiep theo
void nextPrime(int n)
{
  	while(1)
  	{
  		n++;
  		if(Check(n))
  		{
  			
  	printf("%d",n);
  			break;
		}
	}
}


//dao nguoc phan tu mang 
void reverse(int a[], int n)
{
   for(int i=0;i<n/2;i++)
    {
      int temp=a[i];
         a[i]=a[n-1-i];
         a[n-1-i]=temp; 
   }
}

//sap xep tang dan
void sortUpTo(int a[], int n)
 {
 	int i,j,temp;
	for (i=0; i<n-1; i++)
	{
		for (j=i+1; j<n; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			};
		}	
	}
	
 }
 
 //tim kiem phan tu lon nhat trong mang
int findMax(int a[],int n)
{
	int max=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	return max;
}

	
