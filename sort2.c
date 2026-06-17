#include <stdio.h>

struct abc {
	int i;
	float f;
};

void main() {
	struct abc a[5];
	struct abc temp;
	int i, j, n = 5;
	for(i = 0;i < 5;i++){
		printf("Enter integer and float value\n");
		scanf("%d %f", &a[i].i, &a[i].f);
	}
	
	printf("Before sorting: ");
	for (i = 0;i < n;i++){
		printf("Element %d -> i: %d, f: %.2f\n", i + 1, a[i].i, a[i].f);
	}
	
	// Sorted Structure;
	for (i = 0; i < n - 1;i++){
		for (j = 0;j < n - i - 1;j++){
			if(a[j].i > a[j+1].i){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	
	printf("After sorting: ");
	for (i = 0;i < n;i++){
		printf("Element %d -> i: %d, f: %.2f\n", i + 1, a[i].i, a[i].f);
	}

}