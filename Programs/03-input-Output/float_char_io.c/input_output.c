#include <stdio.h>
int main() {

    double a, b, product;
    printf("Enter a number : ");
    scanf("%lf", &a);
    printf("Enter a number : ");
    scanf("%lf", &b);
    product = a * b;
    printf("The Product of these numbers is : %.2lf\n", product);

    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    printf("Your character: %c\n", ch);

    printf("Thanks for using this program.\n");

    return 0;

}