#include <stdio.h>

char * mystrcpy(char * to, char * from, int len)
{
	int i = 0;
	while (i < len){
		to[i] = from[i];
		i++;
	}
	return to;
}

int main()
{
	char a[5], b[5], c[5];
	scanf("%4s", b);
	mystrcpy(a, b, 5);
	printf("a = %s", a);
	return 0;
}
