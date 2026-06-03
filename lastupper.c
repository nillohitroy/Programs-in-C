#include <stdio.h>

int mystrlen(char * str) {
	int len = 0;
	while (str[len] != '\0') {
		len++;
	}
	return len;
}

void mylstupr(char * to, char * from) {
	int len = mystrlen(from);
	int i;

	for (i = 0; i < len; i++) {
		
		to[i] = from[i];

		if (to[i] >= 'a' && to[i] <= 'z') {
			if (from[i + 1] == ' ' || from[i + 1] == '\0') {
				to[i] = to[i] - 32;
			}
		}
	}
	to[len] = '\0';
}

int main()
{
	char a[15], result[15] = {0};
		
	printf("Enter string: \n");
	scanf("%[^\n]", a);
	
	mylstupr(result, a);

	printf("Result: %s\n", result);
	
	return 0;
}

