#include <stdio.h>

int main() {
    float weight, height_cm, height_m, bmi, cal, mcal;
    int age, choice;

    printf("Enter weight (kg): ");
    scanf("%f", &weight);

    printf("Enter height (cm): ");
    scanf("%f", &height_cm);

    height_m = height_cm / 100.0; 
    bmi = weight / (height_m * height_m);

    printf("Your BMI = %.2f\n", bmi);

    if(bmi < 18.5)
        printf("You are Underweight.\n");
    else if(bmi >= 18.5 && bmi < 24.9)
        printf("You are Normal.\n");
    else if(bmi >= 25 && bmi < 29.9)
        printf("You are Overweight.\n");
    else
        printf("You are Obese.\n");

    printf("\nWhat do you want :- ");
    printf("\n 1. Weight Gain");
    printf("\n 2. Weight Loss");
    printf("\n 3. Weight Maintenance");
    printf("\nEnter your choice (1/2/3): ");
    scanf("%d", &choice);

    printf("\nEnter your age: ");
    scanf("%d", &age);

    printf("\nHow many calories do you consume per day? ");
    scanf("%f", &cal);
    mcal = (10 * weight) + (6.25 * height_cm) - (5 * age) + 5;

    switch(choice) {
        case 1: 
            printf("\nFor weight gain you need MORE than %.2f calories.", mcal);
            if(cal > mcal)
                printf("\nYou are already eating enough for weight gain.\n");
            else
                printf("\nYou need to eat MORE calories to gain weight.\n");
            break;

        case 2: 
            printf("\nFor weight loss you need LESS than %.2f calories.", mcal);
            if(cal < mcal)
                printf("\nYou are already eating fewer calories for weight loss.\n");
            else
                printf("\nYou need to eat LESS calories to lose weight.\n");
            break;

        case 3: 
            printf("\nFor weight maintenance you need AROUND %.2f calories.", mcal);
            if(cal == mcal)
                printf("\nYou are eating the right amount to maintain weight.\n");
            else if(cal > mcal)
                printf("\nYou are eating MORE calories, you may gain weight.\n");
            else
                printf("\nYou are eating LESS calories, you may lose weight.\n");
            break;

        default:
            printf("\nInvalid choice!\n");
    }


    return 0;
}
