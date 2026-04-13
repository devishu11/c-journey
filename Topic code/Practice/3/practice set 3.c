#include<stdio.h>
int main()
{ int day, month;
    // question 1- Write a program to identify day of a week with if-else statements?
    printf("Enter a number between 1 to 7 :");
    scanf("%d",&day);
    if (day==1) {
        printf("Monday\n");
    }
    else if (day==2)  {
        printf("Tuesday\n");
    }

    else if (day==3) {
        printf("Wednesday\n");
    }

    else if (day==4) {
        printf("Thursday\n");
    }
    else if (day==5) {
        printf("Friday\n");
    }
    else if (day==6) {
        printf("Saturday\n");
    }
    else if (day==7) {
        printf("Sunday\n");
    }
    else{
        printf("Invalid input! Please enter a number between 1 and 7.\n");
    }
// Question 2- Write a program to identify months of a year with if-else statements?

        printf("Enter a number between 1 - 12 :");
        scanf("%d", &month);

        if (month==1) {
            printf("Jan\n");
        }
        else if (month==2) {
            printf("Feb\n");
        }
        else if (month==3) {
            printf("Mar\n");
        }
        else if (month==4) {
            printf("Apr\n");
        }
        else if (month==5) {
            printf("May\n");
        }
        else if (month==6) {
            printf("June\n");
        }
        else if (month==7) {
            printf("July\n");
        }
        else if (month==8) {
            printf("Aug\n");
        }
        else if (month==9) {
            printf("Sep\n");
        }
        else if (month==10) {
            printf("Oct\n");
        }
        else if (month==11) {
            printf("Nov\n");
        }
        else if (month==12) {
            printf("Dec\n");
        }
        else { printf ("Worng number\n");
        }
        // Question 3 -Write a program to find the largest among three numbers.
            int a,b,c;
            printf("Enter three number :");
            scanf("%d %d %d",&a,&b,&c);

            if (a>b,c) {
                printf("A is greater from B and c.");
            }
            else if (b>a,c) {
                printf("B is greater from A and C.");
            }
            else if (c>a,b) {
                printf("C is greater from A and B.");
            }
            return 0;

    }

