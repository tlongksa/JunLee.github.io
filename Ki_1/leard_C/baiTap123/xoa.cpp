#include <stdio.h>
 
int main() {
  int array[100], position, c, n, value;
 
  printf("Enter number of elements in array : ");
  scanf("%d", &n);
  printf("Enter elements : ", n);
  for (c = 0; c < n; c++)
  scanf("%d", &array[c]);
  printf("Enter the location where you wish to insert an element : ");
  scanf("%3d", &position);

  for (c = n - 1; c >= position - 1; c--) {
  	array[c+1] = array[c];
	}
  array[position-1] = value;
  printf("Enter the value to insert : ");
  scanf("%d", &value);
  printf("Resultant array is");
  for (c = 0; c <= n; c++)
    printf("%3d", array[c]);
  return 0;
}
