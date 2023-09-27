#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct mystruct{
	int a;           // 4 bytes
	int c;           // 4 bytes  
	double b;        // 8 bytes    
	long long int d; // 8 bytes
};

#define COUNT 4
int main() {
	struct mystruct *p, *q;
	int i;

	printf("size of mystruct = %d\n", sizeof(struct mystruct));

	p=(struct mystruct*)calloc(COUNT, sizeof(struct mystruct));
	
	for (i = 0; i < COUNT; i++) 
	{
		p[i].a = i;
		p[i].b = 10000000000.0 + i;
		p[i].c = i * 20;
		p[i].d = 4294967296 + i;
	}

	q = p;
	printf("[0] values:\na is %d\nb is %f\nc is %d\nd is %lld\n", q->a, q->b, q->c, q->d);
	printf("addresses:\na is %d\nb is %d\nc is %d\nd is %d\n", &q->a, &q->b, &q->c, &q->d);
	q = p + 3; // use address arithmetic to get the address of the fourth element (the array is zero based remember)
	printf("\n[3] values:\na is %d\nb is %f\nc is %d\nd is %lld\n", q->a, q->b, q->c, q->d);
	printf("addresses:\na is %d\nb is %d\nc is %d\nd is %d\n\n", &q->a, &q->b, &q->c, &q->d);
	
	return 0;
}
