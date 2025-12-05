#include <stdio.h>

int main()
{
    int i, j, space;
    int height = 20;

    for (i = 1; i <= height; i++)
    {
        for (space = 1; space <= height - i; space++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("X");
        printf("\n");
    }

    return 0;
}
