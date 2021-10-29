#include<stdio.h>
#include<math.h>
int main() {
	int n = 0, a = 0,m = 0;
	printf("Enter value n : ");
	scanf("%d", &n);
	int array[n];
	for (int i = 0; i < n; i++) {
		printf("Enter value of array[%d] = ", i);
		scanf("%d", &array[i]);
	}
	int index = - 1;
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (array[i] = j * j) {
				index = array[i];
			}
		}
 }	
 printf("%d", index);
	return 0;
}

