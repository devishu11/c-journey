#include <stdio.h>
int main() {

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Your age is: %d\n\n", age);

    int x, y, sum;
    printf("Enter a number : ");
    scanf("%d", &x);
    printf("Enter a number : ");
    scanf("%d", &y);
    sum = x + y;
    printf("Sum of these two numbers is : %d\n", sum);

    printf("Thanks for using this program.\n");

    return 0;
}