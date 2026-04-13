#include<stdio.h>
int main()
{
    // 1. write a program to check if a number is odd or even.
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    printf("%d\n", a % 2 == 0);

    // 2. write a program to print the average of 3 numbers.
    float x, y, z, average;
    printf("Enter three numbers :");
    scanf("%f%f%f", &x, &y,&z);
    average = (x+y+z)/3.0;
    printf("The average is %.2lf\n",average);

    // 3. c. Write a program to print the smallest number of two.
    float b,c,smaller;
    printf("Enter a number :");
    scanf("%f",&b);
    printf("Enter a number :");
    scanf("%f",&c);
    smaller = (b<c)?b:c;
    printf("The smaller is %.2lf",smaller);
    return 0;
}
