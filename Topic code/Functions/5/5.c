#include <stdio.h>

float squareare(float a , float b );
float circleare(float rad);
float rectangleare(float x , float y );

int main(){
    int a , b ;

    printf("Enter first side of a square : ");
    scanf("%d", &a);
    printf("Enter second side of a square : ");
    scanf("%d", &b);

    printf("The area of a square is : %.2f\n", squareare(a, b));

    return 0;
}
float squareare(float a , float b ){
    return a * b ;
}

