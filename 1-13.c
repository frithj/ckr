#include <stdio.h>

#define IN  1 /* inside word */
#define OUT 0 /* outside word */

/* print histogram of the lengths
 * of words in the input
 */

int main()
{
    int c, i, j, state, currentWordLength;
    int wordLengths[20];

    state = OUT;
    currentWordLength = 0;
    for (i = 0; i < 20; ++i)
        wordLengths[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c != '\n' && c != '\t' && c != ' ') {
            state = IN;
            ++currentWordLength;
        } else if (state == IN) {
            state = OUT;
            if (currentWordLength < 20)
                ++wordLengths[currentWordLength - 1];
            else
                ++wordLengths[19];
            currentWordLength = 0;
        }
    }
    
    printf("Histogram of wordlengths in input:\n");
    for (i = 0; i < 19; ++i) {
        printf("%d:\t", i+1);
        for (j = 0; j < wordLengths[i]; ++j)
            printf("-");
        printf("\n");
    }
    printf(">20:\t");
    for (j = 0; j < wordLengths[19]; ++j)
            printf("-");
    printf("\n");

    return 0;
}
