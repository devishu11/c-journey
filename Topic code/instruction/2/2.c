#include <stdio.h>

int main() {

    int a , b , c , d , e ,f ,sum ;
    // Arithmetic instructions

    printf("Enter a six number: ");
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

    sum = (a + 1) + (b + 2) + (c + 3) + (d + 4) + (e + 5) + (f + 6);
    printf("a: %d\n" ,a + 1);
    printf("b: %d\n" ,b + 2);
    printf("c: %d\n", c + 3);
    printf("d: %d\n", d + 4);
    printf("e: %d\n", e + 5);
    printf("f: %d\n", f + 6);
    printf("a+b+c+d+e+f: %d\n", a + b + c + d + e + f);

    printf("Total sum: %d\n", sum);

    return 0;
}