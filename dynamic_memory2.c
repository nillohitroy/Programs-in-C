#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a, i;
	int * fn();
	
	a = fn();
	
	for(i = 0;i < 7;i++){
		printf("%d ", a[i]);
	}
}

int *fn() {
	int i;
	int *a;
	a = (int *) calloc (7, sizeof(int));
	for (i = 0;i < 7;i++) {
		a[i] = i;
	}
	return a;
}
