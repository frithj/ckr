#include <stdio.h>

/* copy input to output and replace tab, backspace, backslash by
	\t, \b, \\ */
main()
{
	int c, explicit;

	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			putchar('\\');
			putchar('t');
		}else if (c == '\b') {
			putchar('\\');
			putchar('b');
		}else if (c == '\\') {
			putchar('\\');
			putchar('\\');
		}else {
			putchar(c);
		}
	}
}
