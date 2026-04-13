#include <stdio.h>

int fact(int n);

int main(){
    int n ;
    printf("Enter a number : " );
    scanf("%d" , &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("The factorial of %d is: %d\n", n, fact(n));
        return 0;
    }
}
int fact(int n)
{
    if(n == 0){
        return 1 ;
    }
    int factn1 = fact(n - 1);
    int factn2 = factn1 * n;
    return factn2 ;
}