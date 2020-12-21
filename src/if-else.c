/*
 * Branching with `if` and `else` in C is
 * straight-forward.
 */
#include <stdio.h>

int main() {
	// Here's a basic example.
	if (7%2 == 0) {
		printf("7 is even\n");
	} else {
		printf("7 is odd\n");
	}

	// You can have an `if` statement without an else.
	if (8%4 == 0) {
		printf("8 is divisible by 4\n");
	}

	// A statement can precede conditionals; any variables
	// declared in this statement are available in all
	// branches
	int num = 9;
	if (num < 0) {
		printf("%d is negative\n", num);
	} else if (num < 10) {
		printf("%d has 1 digit\n", num);
	} else {
		printf("%d has multiple digits\n", num);
	}
	return 0;
}

