// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character :");
    scanf("%c", &ch);
    if (ch >='A' && ch<='Z') {
        printf("Upper case\n");
    }
    else if(ch >='a' && ch<='z') {
        printf("lower case\n");
    }
    else { printf("Not a letter\n");
    }
    printf("Thank You\n");
    return 0;
}
