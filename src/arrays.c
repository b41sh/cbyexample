/*
 * an _array_ is composed of a series of elements of one data type.
 */
#include <stdio.h>

int main() {
	// The brackets ([]) identify a and the rest as arrays,
	// and the number enclosed in the brackets indicates the number of elements in the array.
	int a[5];
	for (int i = 0; i < 5; i++) {
		printf("%d\n", a[i]);
	}
	// we can set value by index.
	a[4] = 100;
	printf("a[4]=%d\n", a[4]);

	// we can initialize an array by using a comma-separated list of values enclosed in braces. 
	int b[5] = {1, 2, 3, 4, 5};

	// Array types are one-dimensional, but you can
	// compose types to build multi-dimensional data
	// structures.
	int twoD[2][3];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			twoD[i][j] = i + j;
			printf("twoD[%d][%d]=%d\n", i, j, twoD[i][j]);
		}
	}

	return 0;
}
