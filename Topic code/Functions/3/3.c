#include <stdio.h>

int sum(int a  , int b);

int main()
{

    int a , b , total;
    printf("Enter first digit : ");
    scanf("%d" , &a);
    printf("Enter second digit : ");
    scanf("%d" , &b);

    total = sum(a, b);


    printf("The sum of both digit is: %d\n", total);

    return 0;
}
int sum(int a  , int b) {
    return a + b;
}

