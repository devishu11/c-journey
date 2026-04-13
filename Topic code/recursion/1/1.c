#include <stdio.h>

void Printhw (int n);
int main () {
int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    if (n < 1) {
        printf("Please enter a positive number!\n");
        return 1;
    }

    Printhw(n);
    return 0;
}
void Printhw (int n) {
    if (n == 0){
        return;
    }
   printf("Hello World\n");
    Printhw(n-1);
}