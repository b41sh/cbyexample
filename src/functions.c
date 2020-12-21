/*
 * A _function_ is a self-contained unit of program code designed to accomplish a particular task.
 * C's design philosophy is to use functions as building blocks.
 */
#include <stdio.h>

int plus(int a, int b) {
	return a + b;
}

int main() {
	// Call a function just as you'd expect, with
	// `name(args)`.
	int res = plus(1, 2);
	printf("1+2 = %d\n", res);

	return 0;
}
