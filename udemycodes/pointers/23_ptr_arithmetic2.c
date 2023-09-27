#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define COUNT 4

int a[COUNT];
float b[COUNT];
double c[COUNT];
long long int d[COUNT];
short int e[COUNT];
long int f[COUNT];

int main() {
	int *pa;
	float *pb;
	double *pc;
	long long int *pd;
	short int *pe; 
	long int *pf;

	printf("sizes are: int %d; float %d; double %d; long long int %d; short int %d; long int %d\n", sizeof(int),
		sizeof(float), sizeof(double), sizeof(long long int), sizeof(short int), sizeof(long int));

	// initialize array and pointers
	pa = a;
	pb = b;
	pc = c;
	pd = d;
	pe = e;
	pf = f;
	for (int i = 0; i < COUNT; i++) {
		a[i] = i;
		b[i] = (float)i;
		c[i] = (double)i;
		d[i] = i;
		e[i] = i;
		f[i] = i;
	}

	//arithmetic
	pa += 1;
	pb += 1;
	pc += 1;
	pd += 1;
	pe += 1;
	pf += 1;
	
	printf("address of a is [%d]; value of pa is [%d]; value pointed to by pa is %d\n", a, pa, *pa);
	printf("address of b is [%d]; value of pb is [%d]; value pointed to by pb is %f\n", b,pb, *pb);
	printf("address of c is [%d]; value of pc is [%d]; value pointed to by pc is %f\n", c, pc, *pc);
	printf("address of d is [%d]; value of pd is [%d]; value pointed to by pd is %lld\n", d, pd, *pd);
	printf("address of e is [%d]; value of pe is [%d]; value pointed to by pe is %hd\n", e, pe, *pe);
	printf("address of f is [%d]; value of pf is [%d]; value pointed to by pf is %ld\n", f, pf, *pf);

	return 0;
}
