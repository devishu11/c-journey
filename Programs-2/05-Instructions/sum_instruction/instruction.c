#include <stdio.h>

int main() {
    int a, b, c, d, e, f, sum;

    printf("Enter a numbers: ");
    scanf("%d", &a);
    printf("Enter a numbers: ");
    scanf("%d", &b);
    printf("Enter a numbers: ");
    scanf("%d", &c);
    printf("Enter a numbers: ");
    scanf("%d", &d);
    printf("Enter a numbers: ");
    scanf("%d", &e);
    printf("Enter a numbers: ");
    scanf("%d", &f);

    int na = a+1, nb = b+2, nc = c+3;
    int nd = d+4, ne = e+5, nf = f+6;

    sum = na + nb + nc + nd + ne + nf;
    printf("---Result---\n");
    printf("a+1: %d\n", na);
    printf("b+2: %d\n", nb);
    printf("c+3: %d\n", nc);
    printf("d+4: %d\n", nd);
    printf("e+5: %d\n", ne);
    printf("f+6: %d\n", nf);
    printf("Total sum: %d\n\n", sum);
    printf("Thanks for using this program.");
    return 0;
}