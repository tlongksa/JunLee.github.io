#include<stdio.h>
#include<math.h>

//int main() {
//	int n = 0, sum = 1; 
//	printf("Enter value n : ");
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i ++) {
//		sum = sum * i;
//	}
//	printf("%d", sum);
//	return 0;
//}
// khi nhan cho i = 1 & cho ....

	int main() {
		int n = 0, max = 0;
		printf("Enter value n = ");
		scanf("%d", &n);
		while (n < 0) {
			printf("plasea Enter again ");
			printf("Enter value n = ");
			scanf("%d", &n);
		}
		int array[n];
		for (int i = 0; i < n; i++) {
			printf("Enter value array[%d] : ", i);
			scanf("%d",&array[i]);
		}
		for (int i = 0; i < n; i++){
			
		int vt = 0, x = 0;
			if (max < array[i]) {
				max = array[i];
				
			}
			printf ("%d", vt);
		}
		return 0;
	}




