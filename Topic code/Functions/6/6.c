#include <stdio.h>

float circleare(float rad);


int main(){
    int a ;

    printf("Enter first side of a square : ");
    scanf("%d", &a);

    printf("The area of a circle is : %.2f\n", circleare(a));

    return 0;
}
float circleare(float rad ){
    return 3.14 * rad * rad;
}

