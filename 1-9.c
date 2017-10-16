#include <stdio.h>

/* copy input to output and replace
	each string of one or more blanks
	with a single blank */
main()
{
	int c, currentb;

	currentb = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			if (currentb == 0) {
				currentb = 1;
				putchar(c);
			}
			if (currentb == 1)
				;
		}else {
			currentb = 0;
			putchar(c);
		}
	}
}
