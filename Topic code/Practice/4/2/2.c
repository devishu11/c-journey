#include <stdio.h>
int main() {
    // Write C code here
    int i = 1;
    int j = 0;
    int n;
    printf ("Enter a number :");
    scanf ("%d",&n);
    while ( i<= n){
        if (n % i == 0) {
            j++;
        }
        i++;
    }
    if (j == 2){
        printf("True this is a prime %d", n );
    }
    else {
        printf("%d false this is not a prime", n);
    }
    return 0;
}