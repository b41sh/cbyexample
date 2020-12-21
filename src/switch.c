/*
 * _Switch statements_ express conditionals across many
 * branches.
 */
#include <stdio.h>

int main() {
	// Here's a basic `switch`.
	int i = 2;
	printf("Write %d as ", i);
	switch (i) {
	case 1:
		printf("one\n");
		break;
	case 2:
		printf("two\n");
		break;
	case 3:
		printf("three\n");
		break;
	}

	return 0;
}
