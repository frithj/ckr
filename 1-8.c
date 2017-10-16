#include <stdio.h>

/* count blanks, tabs and newlines */
main()
{
	int c, btn;

	btn = 0;
	while ((c = getchar()) != EOF)
		if ((c =='\n') || (c == '\t') || (c == ' '))
			++btn;
	printf("%d\n", btn);
}
