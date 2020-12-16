/*
 * In C, _variables_ are explicitly declared and used by
 * the compiler to e.g. check type-correctness of function
 * calls.
 */
#include <stdio.h>
#include <stdbool.h>

int main() {

	// You could have used a separate declaration for each variable
	// or you could have declared all variables in the same statement.
	int a;
	int b, c;

	// assign value fro previous declared variables
	a = 112;
	b = 0144;
	c = 0x64;

	// initializing variables;
	int d = 21;
	int f = 32, g = 14;

	printf("b = %o, c = %x\n", b, c);
	printf("d = %d, f + g = %d\n", d, f + g);

	// other integer types
	long int estine;
	long johns;
	short int erns;
	short ribs;
	unsigned int s_count;
	unsigned players;
	unsigned long headcount;
	unsigned short yesvotes;
	long long ago;

	float h = 3.14159;
	float i = .2;
	float j = 4e16;
	double k = .8E-5;
	double l = 100.;
	printf("h = %f i = %f j = %e\n", h, i, j);
	printf("k = %f l = %e\n", k, l);

	// The char type is used for storing characters such as letters and punctuation marks,
	// but technically it is an integer type
	char m;
	char n = 'A';
	char o = 65;
	printf("n = %c o = %c\n", n, o);

	// The _Bool type is a C99 addition
	_Bool p;
	_Bool q = true;
	printf("p = %d q = %d\n", p, q);

	return 0;
}
