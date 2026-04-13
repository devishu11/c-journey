#include <stdio.h>
int main() {
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    int sum=0 , i=1;
    while(i<=n){
        sum = sum+i;
        printf("%d\n", i);
        i++;
    }
    printf("Total numbers added :%d\n", n);
    printf("This is total value :%d\n", sum);
    return 0;
}
