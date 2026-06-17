#include <stdio.h>
#include <stdlib.h>

struct abc {
	int i;
	char c;
};  // Definition of struct abc

void main () {
	struct abc *a;
	a = (struct abc*) malloc(sizeof(struct abc));
	a->i = 5;  // assignment
	a->c = 'a';  // (. operator) now arrow operator
	
	printf("%d %c", a->i, a->c);
}