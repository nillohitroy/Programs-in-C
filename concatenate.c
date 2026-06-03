#include <stdio.h>

int mystrlen(char *str) {
	int len = 0;
	while (str[len] != '\0') {
		len++;
	}
	return len;
}

char * mystrcat(char * to, char * from) {
	int i = 0, j = 0;
	while (to[i] != '\0')
		i++;
	while (from[j] != '\0'){
		to[i] = from[j];
		i++; j++;
	}
	to[i] = from[j];
	return to;
}

void substring(char * from, char * to, int start, int end) {
	int len = mystrlen(from);
	
	if (start < 0) start = len + start;
	if (end < 0) end = len + end;
	
	if (start < 0 || start >= len || end < 0 || end >= len) {
		printf("Error: Index out of length");
		to[0] = '\0';
		return;
	}
	
	int i, j = 0;
	
	if (start <= end) {
		for (i = start; i <= end; i++) {
			to[j] = from[i];
			j++;
		}
	} else {
		for (i = start; i >= end; i--) {
			to[j] = from[i];
			j++;
		}
	}
	
	to[j] = '\0';
}

int main()
{
	char a[15], b[15], sub1[15], sub2[15], result[15] = {0};
	
	int n1, n2, n3, n4;
	
	printf("Enter first string: \n");
	scanf("%[^\n]", a);
	
	fflush(stdin);
	
	printf("Enter second string: \n");
	scanf("%[^\n]", b);
	
	printf("Enter the starting and ending point for String 1: \n");
	scanf("%d %d", &n1, &n2);
	printf("Enter the starting and ending point for String 2: \n");
	scanf("%d %d", &n3, &n4);
	
	substring(a, sub1, n1, n2);
	substring(b, sub2, n3, n4);
	
	printf("\Substring 1: %s\n", sub1);
	printf("Substring 2: %s\n", sub2);
	
	mystrcat(result, sub1);
	mystrcat(result, sub2);
	
	printf("Concatenated Result: %s\n", result);
	
	return 0;
}

