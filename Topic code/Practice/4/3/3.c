#include <stdio.h>

int main() {
    int start, end, count, i, j;

    printf("Enter start of range: ");
    scanf("%d", &start);

    printf("Enter end of range: ");
    scanf("%d", &end);

    printf("\nPrime numbers between %d and %d:\n", start, end);

    i = start;

    do {
        count = 0;
        j = 1;

        do {
            if (i % j == 0) {
                count++;
            }
            j++;
        } while (j <= i);

        if (count == 2) {
            printf("%d ", i);
        }

        i++;
    } while (i <= end);
    printf("Thank you") ;

    return 0;
}