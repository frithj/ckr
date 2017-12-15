#include <stdio.h>

#define IN  1   /* inside word */
#define OUT 0   /* outside word */

/* print input one word per line */
int main()
{ 
    int c, state;

    state = OUT;
    while ((c = getchar()) != EOF) {
        if (c != '\n' && c != '\t' && c != ' ') {
            state = IN;
            putchar(c);
        } else if (state == IN) {
            state = OUT;
            putchar('\n');
        }
    }

    return 0;
}
