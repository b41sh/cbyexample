/*
 * The C preprocessor lets you define constants
 */
#include <stdio.h>

// `#define` declares a constant value.
#define S "constant"

int main() {
	printf("S=%s\n", S);

	// C90 added a second way to create symbolic constants—using the const keyword
	const int N = 500000000;

	printf("N=%d\n", N);

	const float PI = 3.141593;
	printf("PI=%f\n", PI);

	return 0;
}
