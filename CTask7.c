#include <stdio.h>

int main()
{
    int n, i, j, k;
    char ch;

    printf("Enter number of rows: "); // ask for input
    scanf("%d", &n);

    ch = 'A'; // start from 'A' each row

    for (i = 1; i <= n; i++) {

        // Print spaces for symmetry
        for (j = i; j < n; j++) {
            printf(" ");
        }

        // Print increasing sequence of alphabets
        for (k = 1; k <= i; k++) {
            printf("%c", ch);
            ch++;
        }

        ch -= 2;
        for (k = 1; k < i; k++) {
            printf("%c", ch);
            ch--;
        }

        printf("\n"); // move to next line
    }

    return 0;
}
