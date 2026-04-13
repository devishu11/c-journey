#include <stdio.h>
int main() {
    int i = 1;
    int n;
    int j;
    printf("Enter a number : ");
    scanf("%d", &n);
    do {
        j = 1;
        do {
            printf("%d", j);
            printf("\t");
            j++;
        } while (j <= i);
        printf("\n");
        i++;
    } while (i <= n);
    return 0;
}