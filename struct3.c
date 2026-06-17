#include <stdio.h>

struct abc {
	int i;
	float f;
};

struct efg {
	int i;
	float f;
};

void main() {
	struct abc a;
	struct efg b;
	void fn(struct abc, struct efg);
	a.i = 5;
	a.f = 4.7;
	b.i = 6;
	b.f = 7.3;
	fn(a, b);
}

void fn(struct abc x, struct efg y){
	int s1;
	float s2;
	s1 = x.i + y.i;
	s2 = x.f + y.f;
	
	printf("The summation is: %d and %f", s1, s2);
}