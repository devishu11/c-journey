#include <stdio.h>
void Printf();
void Printi();
int main()
{
    char ch;
    printf("Enter f if your foreigner or i if your indian : ");
    scanf("%c" , &ch );

    if (ch == 'f') {

        Printf();

    }
    else if ( ch == 'i') {

        Printi();

        return 0;

    }
}
void Printi(){
    printf(" .You are Indian.\n");
}

void Printf(){
    printf(" .You are Foreigner.\n");
}
