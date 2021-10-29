#include<stdio.h>
int main(){
	int so_nguyen[]={2,5,7,9,6,3,2,1,1};//khai bao mot mang bat ki.
	int max=0,vi_tri=0,dem=0;
	//tim phan tu co gia tri lon nhat trong mang
	for(int i=0;i<sizeof(so_nguyen)/sizeof(int);i++){
		if(so_nguyen[i]>max)
			max=so_nguyen[i];
	}
	//tim vi tri xuat hien lan dau tien cua max va thoat khoi vong lap khi gap max lan dau tien
	for(int i=0;i<sizeof(so_nguyen)/sizeof(int);i++){
		if(so_nguyen[i]==max){
			vi_tri=i;
			dem=dem+1;
		}
		if(dem==1)
			break;
	}
	printf("Phan tu lon nhat trong mang da tao co gia tri bang:%d\nXuat hien lan dau tien tai vi tri:so_nguyen[%d]\n",max,vi_tri);
	return 0;
}
