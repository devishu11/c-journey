#include <stdio.h>
int main()
    {
      // Prints some text.
      printf("First Print \n\n");

     // Prints some age.
        int age;
        printf("Enter your age:", age);
        scanf("%d", &age);
        printf("So your age is :%d\n\n", age);

     // Prints sum of number.
          int x,y,sum;
          printf("Here we do Sum \n");
          printf("Enter a number x :");
          scanf("%d",&x);
          printf("Enter a number y :");
          scanf("%d",&y);
          sum= x+y;
          printf("sum: %d\n",sum);
     // Prints product of floating - point numbers.
     double a,b,product;
     printf("Here we do Product \n");
     printf("Enter a number a :");
     scanf("%lf",&a);
     printf("Enter a number b :");
     scanf("%lf",&b);
     product = a*b;
     printf("product : %.2lf\n",product);
    //Prints some character
      char ch;
    printf("Here is character\n");
    printf("Enter a character :");
    scanf("%s",&ch);
    printf("This is your character :%c\n",ch);
        return 0;
    }


















