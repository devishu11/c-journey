#include <stdio.h>
float rectangle(float a , float b);

int main() {
    int a , b ;
    printf("Enter a length of a rectangle: ");
    scanf("%d",&a);
    printf("Enter a width of a rectangle: ");
    scanf("%d",&b);

    printf("The area of the rectangle is: %.2f ",rectangle(a,b));
return 0;
}
float rectangle(float a , float b) {
    return a * b;
}
