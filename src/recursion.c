/*
 * a classic factorial example.
 * http://en.wikipedia.org/wiki/Recursion_(computer_science)
 */
#include <stdio.h>

int fact(int n) {
	if (n == 0) {
		return 1;
	}
	return n * fact(n-1);
}

int main() {
	printf("fact=%d\n", fact(7));
	return 0;
}
