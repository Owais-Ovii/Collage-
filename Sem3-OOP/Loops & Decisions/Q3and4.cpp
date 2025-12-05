#include <stdio.h>

int main()
{
    int temp[] = {55, 62, 68, 74, 59, 45, 41, 58, 60, 67, 65, 78, 82, 88, 91, 92, 90, 93, 87, 80, 78, 79, 72, 68, 61, 59};
    int n = 26;
    int i, hot = 0, pleasant = 0, cold = 0;
    float sum = 0, avg;

    for (i = 0; i < n; i++)
    {
        printf("Temperature %d: %d -> ", i + 1, temp[i]);
        if (temp[i] >= 85)
        {
            printf("Hot day\n");
            hot++;
        }
        else if (temp[i] >= 60)
        {
            printf("Pleasant day\n");
            pleasant++;
        }
        else
        {
            printf("Cold day\n");
            cold++;
        }
        sum += temp[i];
    }

    avg = sum / n;

    printf("\nHot days = %d", hot);
    printf("\nPleasant days = %d", pleasant);
    printf("\nCold days = %d", cold);
    printf("\nAverage temperature = %.2f\n", avg);

    return 0;
}
