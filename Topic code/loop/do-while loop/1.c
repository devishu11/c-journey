#include <stdio.h>
int main(){
    int n;
    int sum =0;
    do {
        printf("Enter a number : ");
        scanf("%d",& n);
        sum = sum + n;
    }
    while (n != 0);
    printf("--- Results ---\n");
    printf("The final sum is: %d\n", sum);
    printf("Thank you");
    return 0;

}