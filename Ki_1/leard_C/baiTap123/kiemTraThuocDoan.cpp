#include<stdio.h>
#include<math.h>

int main() {
	int n = 0,x = 0, y = 0;
	printf("Enter value n : ");
	scanf("%d", &n);

	float array[n];
	for (int i = 0; i < n; i++) {
		printf("Enter value of array[%d] : ", i);
		scanf("%f", &array[i]);
	}
	int index = -1;
	
 	printf("Enter value (x,y) : \n");
	scanf("%d", &x);
	scanf("%d", &y);
	for (int i = 0; i < n; i++) {
		if (array[i] > x || array[i] < y) {
			index = i;
		}
	}
	printf("%3d", index);
	return 0;
}

