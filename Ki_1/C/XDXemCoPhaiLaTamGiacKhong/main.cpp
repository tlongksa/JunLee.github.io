#include <iostream>

using namespace std;

int main()
{
    int kiemTraDoTuoiLaoDong = 0;
    printf("enter age : ");
    scanf("%d",&kiemTraDoTuoiLaoDong);
    (kiemTraDoTuoiLaoDong >= 18 || kiemTraDoTuoiLaoDong <= 60 || 18 <= kiemTraDoTuoiLaoDong <= 60) ? printf("Thuoc do tuoi lao dong") : printf("Khong thuoc do tuoi lao dong");
     return 0;
}
