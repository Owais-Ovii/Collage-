#include <stdio.h>

int main() {
    int units;
    float bill = 0;
printf("for 1st 100 units bill rate :-- Rs 5/unit");
printf("\nfor next 100 units bill rate :-- Rs 7/unit");
printf("\nfor more than 200 uniits bill rate :-- Rs 10/unit");

    printf("\n\nEnter electricity units consumed: ");
    scanf("%d", &units);

    if(units <= 100)
        bill = units * 5;
    else if(units <= 200)
        bill = (100 * 5) + (units - 100) * 7;
    else
        bill = (100 * 5) + (100 * 7) + (units - 200) * 10;

    printf("Electricity Bill = Rs. %.2f\n", bill);
    return 0;
}
