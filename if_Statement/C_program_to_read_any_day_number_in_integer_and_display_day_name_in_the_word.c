//Write a program in C to read any day number in integer and display day name in the word.
#include<stdio.h>
int main(){
    int number ;
    printf("\n Input the one of the days of the week : ");
    scanf("%d",&number);
    if (number == 1 )
        printf("\n Monday.");
        else if (number == 2)
            printf("\n Tuesday.");
            else if (number == 3)
                printf("\n Wednesday.");
                else if (number == 4)
                    printf("\n Thursday.");
                    else if (number == 5)
                        printf("\n Friday .");
                        else if (number == 6)
                            printf("\n Saturday.");
                            else if (number == 7)
                                printf("\n Sunday.");
                                else 
                                    printf("\n Invalid Input.\n");

    return 0;

}