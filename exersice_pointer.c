#include <stdio.h>

void f1(int*);
void change(int*, int*);

int main() {
	int n = 5, n1 = 17, n2 = 19;
	f1(&n);
	printf("n = %d\n\n", n);

	printf("n1 = %d\nn2 = %d\n\n", n1, n2);
	change(&n1, &n2);
	printf("n1 = %d\nn2 = %d\n\n", n1, n2);
}

void f1(int* p) {
	int x = 7;
	*p = x;
}

void change(int *x, int *y) {
	int r = *x;
	*x = *y;
	*y = r;
}