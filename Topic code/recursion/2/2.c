
#include <stdio.h>

 int Numsum(int n ) ;

int main() {
    int n ;
    printf("Enter a number :");
    scanf("%d" , &n);

    int result = Numsum(n);
    printf("The sum of numbers from 1 to %d is: %d\n", n , result );

    return 0;
}
int Numsum(int n ) {
    if(n == 1){
        return 1;
    }
    int sumN = n + Numsum(n - 1);
    return sumN;

}