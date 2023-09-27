//Common problems with pointers
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// freeing already freed memory
void problem1() {
	char *b;
	b = (char*)malloc(10);
	free(b);
	free(b);			// this causes an exception in some compiler
}

// memory leak
void problem2() {
	char *b;
	for (int i = 0; i < 10; i++) 
	{
		b = (char*)malloc(10);
	}
	free(b);
	// now we've lost 9 * 10 bytes of memory
	// we can't free them because we don't have a pointer to the memory any longer
}

// re-use of memory that is freed
void problem3() {
	char *b, *c;

	b = (char*)malloc(100);
	c = b;
	free(b);
	strcpy(c, "hello");
	printf("c is %s\n", c);
	// the result is unpredictable ..
}

// pointer out of scope
char *problem4() {
	char b[20];

	printf("enter your name ... ");
	gets(b);
	return b;
	// when this function returns 'b' will be overwritten
}

// trying to use a null pointer
void problem5() {
	char *b;
	b = (char*)malloc(10);
	b = NULL;
	b[0] = 1;
}

int main() {

	 problem1();
	 problem2();
	 problem3();	
	 printf("you typed %s\n", problem4());
	 problem5();
	return 0;
}