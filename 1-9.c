#include <stdio.h>

/* copy input to output and replace
	each string of one or more blanks
	with a single blank */
int main()
{
	int c, currentBlanks;

	currentBlanks = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			if (currentBlanks == 0) {
				currentBlanks = 1;
				putchar(c);
			}
			if (currentBlanks == 1)
				;
		}else {
			currentBlanks = 0;
			putchar(c);
		}
	}

    return 0;
}
