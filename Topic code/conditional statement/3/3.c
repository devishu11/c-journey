#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Enter c: ");
    scanf("%d", &c);

    if (a > b && a > c) {
        printf("A is greater than B and C.\n");
    }
    else if (b > a && b > c) {
        printf("B is greater than A and C.\n");
    }
    else if (c > a && c > b) {
        printf("C is greater than A and B.\n");
    }
    else if (a == b || b == a || c == a) {
        printf("They all are equal\n.");
    }
    printf("Thank you.");

    return 0;
}