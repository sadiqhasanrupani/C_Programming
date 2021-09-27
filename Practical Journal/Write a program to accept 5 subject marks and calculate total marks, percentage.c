/* Name : Sadiqhasan Rupani.
    Roll no.: 06.
*/

//Write a program to accept 5 subject marks and calculate total marks, percentage and grade of student

#include<stdio.h>
int main()
{
    int tm , sub1 , sub2 , sub3 , sub4 , sub5 ;
    float per;

    printf("\n Enter the 5 subjects marks : ");
    scanf("%d %d %d %d %d",&sub1 , &sub2 , &sub3 , &sub4 , &sub5);

    tm = sub1 + sub2 + sub3 + sub4 + sub5 ;

    per = (tm / 500.0) * 100.0 ;

    printf("\n The total marks of this student is : %d \n",tm);

    printf("\n The percentage of this student is : %.2f \n",per);

    if (per >= 90)
    {
        printf("\n Grade A \n");
    }
    else if (per >= 80)
    {
        printf("\n Grade B \n");
    }
    else if (per >= 70)
    {
        printf("\n Grade C \n");
    }
    else if (per >= 60)
    {
        printf("\n Grade D \n");
    }
    else if (per >= 50)
    {
        printf("\n Grade E \n");
    }
    else
    {
        printf("\n Grade F \n");
    }
    return 0;
}
