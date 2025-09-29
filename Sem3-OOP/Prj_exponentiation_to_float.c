#include <stdio.h>

/* ******************************
Fn Power fn
*/
double pwer(double base, int power)
{
    double out = 1.0; // if power =0 itll auto return 1
    if (power > 0)
    {
        for (int i = 1; i <= power; i++)
        {

            out *= base;
        }
    }
    if (power < 0)
    {

        for (int i = 1; i <= (-power); i++)
        {

            out *= (1 / base);
        }
    }

    return out;
}
/* *********** */

/*
Func for power of any number
**************************** */
double upow(double base, char power[]) // terminate the end of array
{
    int lengofint = 0, lengofdeci = 0, encdecimal = 0, k = 0;
    char array[100];
    for (int i = 0; power[i] != '\0'; i++)
    {

        if (power[i] == '.')
        {
            encdecimal = 1;
        }
        else if (encdecimal == 0)
        {
            lengofint++;
            array[k] = power[i];
            k++;
        }
        else
        {
            lengofdeci++;
            array[k] = power[i];
            k++;
        }
    }

    array[lengofdeci + lengofint] = '\0';
    // printf("\n array strores %s\n",array);

    int power1 = 0, temp = 0;
    for (int i = 0; i < lengofdeci + lengofint; i++)
    {
        temp = (int)array[i] - 48;
        // printf("\ntemp = %d\n",temp);
        power1 += temp * pwer(10, lengofdeci + lengofint - i - 1); // power would after this loop store how many times the subseq loop runs
        // printf("\npower1 = %d\n",power1);
    }

    temp = pwer(10, lengofdeci); //= a^1/1000...

    double number = 0.0;

    while (pwer(number + 1, temp) < base)
    {
        number += 1;
    }
    while (pwer(number + 0.001, temp) < base)
    {
        number += 0.001;
    }
    while (pwer(number + 0.00001, temp) < base)
    {
        number += 0.00001;
    }
    while (pwer(number + 0.0000001, temp) < base)
    {
        number += 0.0000001;
    }
    while (pwer(number + 0.000000001, temp) < base)
    {
        number += 0.000000001;
    }

    while (pwer(number + 0.00000000001, temp) < base)
    {
        number += 0.00000000001;
    }

    double output = 1;
    for (int i = 0; i < power1; i++)
    {

        output *= number;
    }
    return output;
}

/* *************************** */

int main()
{

    char arr[10];
    double ga = 0.0;
    printf("\nFor A ^ p, Enter A:");
    scanf("%lf", &ga);

    printf("\nFor A ^ p, Enter p:");
    scanf("%s", arr);

    printf("%lf ^ %s = %lf", ga, arr, upow(ga, arr));

    return 0;
}
