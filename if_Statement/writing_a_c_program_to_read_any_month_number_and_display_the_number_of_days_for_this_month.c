// Write a program in C to read any Month Number in integer and display the number of days for this month. 
#include<stdio.h>
void main(){
    int month_number ;

    printf("\n Input your Month Number : ");
    scanf("%d",&month_number);

    if (month_number == 1 || month_number == 3 || month_number == 5 || month_number == 7 || month_number == 8 || month_number == 10 || month_number == 12){
        printf("\n This Month having 31 days. \n");
    }
    else if(month_number == 2){
        printf("\n This 2nd month is a February and having 28 days.\n");
        printf("\n In leap year the February month have 29 days.\n");
    }
    else if (month_number == 4 || month_number == 6 || month_number == 9 || month_number == 11){
        printf("\n This month having 30 days.\n");
    }
    else {
        printf("\n Invalid month number.\n Please Try again.......\n");
    }
}