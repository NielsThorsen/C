/*
 * Computes the maximum of two values.
 */

#include <stdio.h>

int main(void) {
	char x;   /* first value */
	char y;   /* second value */
	char max; /* maximum of the two values */

	scanf("%c %c", &x, &y); /*Skulle lige huske %C istedet for %d*/

	if (x <= y)
		max = y;
	else
		max = x;

	printf("The maximum is %c.\n", max);

	return 0;
}