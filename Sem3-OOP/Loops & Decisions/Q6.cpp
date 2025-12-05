#include <stdio.h>

int main()
{
    int guests, chairs, i;
    long long arrangements = 1;

    printf("Enter number of guests: ");
    scanf("%d", &guests);
    printf("Enter number of chairs: ");
    scanf("%d", &chairs);

    for (i = 0; i < chairs; i++)
    {
        arrangements *= (guests - i);
    }

    printf("Number of arrangements = %lld\n", arrangements);

    return 0;
}
