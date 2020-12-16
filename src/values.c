/*
 * C has various value types including
 * int, long, short, unsigned, char, float, double (K&R keyword)
 * signed, void (C90 keyword)
 * _Bool, _Complex, _Imaginary (C99 keyword)
 * Here are a few basic examples.
 */
#include <stdio.h>

int main() {
	printf("C lang\n");

	// Integers and floats.
	printf("1+1 = %d\n", 1+1);
	printf("7.0/3.0 = %f\n", 7.0/3.0);

	return 0;
}
