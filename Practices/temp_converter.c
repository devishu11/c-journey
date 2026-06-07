#include <stdio.h>

int main() {
    char choice;
    float C;
    float F;
    float temperature;

    printf("Please enter in which you want to convert your temperature (C or F): ");
    scanf("%c", &choice);
    printf("Please enter your temperature: ");
    scanf("%f", &temperature);

    if(choice == 'C' || choice == 'c') {
        C = (temperature * 9/5) + 32;
        printf("Your current temperature is in celsius %.2f\n", temperature);
        printf("Converting to fahrenheit: %.2f\n", C);
    }
    else if(choice == 'F' || choice == 'f') {
        F = (temperature - 32) * 5/9;
        printf("Your current temperature is in fahrenheit %.2f\n", temperature);
        printf("Converting to celsius: %.2f\n", F);
    }
    else {
        printf("Invalid choice!\n");
    }

    printf("Thank you\n");
    return 0;
}