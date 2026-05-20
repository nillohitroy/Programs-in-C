#include <stdio.h>

int main()
{
	int i, *p, a[5];
	
	for(i = 0;i < 5;i++){
		a[i] = i;
	}
	p = a;
	for(i = 0;i < 5;i++){
		printf("%d", i[p]);
	}
	return 0;
}
