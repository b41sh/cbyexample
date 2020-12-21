/*
 * a pointer is a variable (or, more generally, a data object) whose value is a memory address.
 * http://en.wikipedia.org/wiki/Pointer_(computer_programming)
 *
 * & The Address Operator:
 * When followed by a variable name, & gives the address of that variable.
 * * The Indirection Operator(also called the dereferencing operator): 
 * When followed by a pointer name or an address, * gives the value stored at the pointed-to address.
 */
#include <stdio.h>

int main() {
	int a = 10;
	// b is a pointer
	int *b;
	// assigns a's address to b
	// now b point to a
	b = &a;

	printf("a=%d\n", a);
	// indirection operator * to find the value stored in a
	printf("b=%d\n", *b);
	printf("\n");

	a = 20;
	printf("a=%d\n", a);
	printf("b=%d\n", *b);
	printf("\n");

	int c = 30;
	// make b point to c instead of to a
	b = &c;

	// assign the value b points to d
	int d = *b;
	printf("a=%d\n", a);
	printf("b=%d\n", *b);
	printf("c=%d\n", c);
	printf("d=%d\n", d);

	return 0;
}
