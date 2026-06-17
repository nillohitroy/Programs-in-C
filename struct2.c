#include <stdio.h>

struct abc {
	int i;
	char c;
};

void main() {
	struct abc a;
	void fn(struct abc*);
	a.i = 4;
	a.c = 'x';
	fn(&a);
	printf("%d %c ", a.i, a.c);
}

void fn(struct abc *x) {
	(x->i++); (x->c++);
	printf(" %d %c ", x->i, x->c);
}