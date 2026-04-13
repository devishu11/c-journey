#include <stdio.h>
int main ()
{
    /* 1. Write a program to calculate perimeter of rectangle.
    Take sides, a & b, from the user */
// sol - Perimeter = 2 × (Length + Width)
    float x,y, perimeter;
    printf("Enter x number : ");
    scanf("%f", &x);
    printf("Enter y number : ");
    scanf("%f", &y);
    perimeter= 2 * (x + y);
    printf("The perimeter of the rectangle is: %.2f\n", perimeter);

    // 2. Take a number(n) from user & output its cube(n*n*n).
    // sol - n*n*n
    int a,b,c,product;
    printf("Enter a number : ");
    scanf("%d",&a);
    product = a * a * a;
    printf("The cube of this number is: %d\n", product);
    return 0;
}