#include <stdio.h>

int main() {

    char x[50];
    int y;
    float z;

    printf("Enter your name : ");
    scanf("%s", &x);

    printf("Enter your age : ");
    scanf("%d", &y);

    printf("Enter your height : ");
    scanf("%f", &z);

    printf("\n--- Results ---\n");
    printf("This an example for character variable\n");
    printf("yourName: %s\n", x);

    printf("This an example for integar variable\n");
    printf("yourAge: %d\n", y);

    printf("This an example for floating - point variable.\n");
    printf("yourHeight: %.2f\n\n", z);

    printf("Thank you for using this program.\n");

    return 0;
}