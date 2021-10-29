#include <stdio.h>

int main() {
  int n = 0;
  printf("Enter value number n : ");
  scanf("%2d", &n);
  while (n < 6) {
    printf("Please enter number again \n");
    printf("Enter value number n : ");
    scanf("%2d", &n);
  }
  int array[n];
  for (int i = 0; i < n; i++) {
    printf("Enter value of array[%d] : ", i);
    scanf("%3d", &array[i]);
  }
  int x = 0, y = 0;
  printf("Enter the value to insert of X : ");
  scanf("%d", &x);
  n++;
  for (int i = n; i >= y; i--) {
    array[i] = array[i - 1];
    if (y % 2 != 0) {
      array[y] = x;
    }
  }
  for (int i = 0; i < n; i++) {
    printf("%3d", array[i]);
  }
  return 0;
}
