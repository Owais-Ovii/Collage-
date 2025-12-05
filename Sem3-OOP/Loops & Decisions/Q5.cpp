#include <stdio.h>

int main()
{
    int n, i, id, hours;
    float rate, gross, net, total = 0;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("\nEnter employee %d ID: ", i);
        scanf("%d", &id);
        printf("Enter hourly rate: ");
        scanf("%f", &rate);
        printf("Enter hours worked: ");
        scanf("%d", &hours);

        if (hours > 40)
            gross = 40 * rate + (hours - 40) * rate * 1.5;
        else
            gross = hours * rate;

        net = gross - (0.03625 * gross);

        printf("Employee ID: %d, Net Pay: %.2f\n", id, net);

        total += net;
    }

    printf("\nTotal Payroll = %.2f", total);
    printf("\nAverage Pay = %.2f\n", total / n);

    return 0;
}
