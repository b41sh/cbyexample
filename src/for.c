/*
 * C has three loop structures
 * while, for, and do while
 * Operators: < > >= <= != == += *= -= /= %=
 */
#include <stdio.h>

int main() {
	// The most basic type, with a single condition.
	int i = 1;
	while (i <= 3) {
		printf("%d\n", i);
		i = i + 1;
	}

	// A classic initial/condition/after `for` loop.
	for (int j = 7; j <= 9; j++) {
		printf("%d\n", j);
	}

	// `do` without a condition will loop repeatedly
	// until you `break` out of the loop or `return` from
	// the enclosing function.
	do {
		printf("loop\n");
		break;
	} while(1);

	// You can also `continue` to the next iteration of
	// the loop.
	for (int n = 0; n <= 5; n++) {
		if (n%2 == 0) {
			continue;
		}
		printf("%d\n", n);
	}
	return 0;
}
