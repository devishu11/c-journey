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
        printf("A is greatest.\n");
    }
    else if (b > a && b > c) {
        printf("B is greatest.\n");
    }
    else if (c > a && c > b) {
        printf("C is greatest.\n");
    }
    else {
        printf("Some or all values are equal.\n");
    }

    printf("Thank you.\n");
    return 0;
}