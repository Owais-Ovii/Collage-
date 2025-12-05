#include <stdio.h>
#include <math.h>

int main()
{
    int n, i;
    float num, sum = 0, sum_squares = 0, avg, stddev;
    float smallest, largest, range;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter number 1: ");
    scanf("%f", &num);
    smallest = largest = num;
    sum = num;
    sum_squares = num * num;

    for (i = 2; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%f", &num);
        sum += num;
        sum_squares += num * num;
        if (num < smallest)
            smallest = num;
        if (num > largest)
            largest = num;
    }

    avg = sum / n;
    range = largest - smallest;
    stddev = sqrt((sum_squares / n) - (avg * avg));

    printf("\nRange = %.2f", range);
    printf("\nStandard Deviation = %.2f\n", stddev);

    return 0;
}
