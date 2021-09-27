/*Name = Sadiqhasan Rupani
  Roll No. = 06
*/

//Write a program to accept 5 subject marks and calculate total marks, percentage and grade of student.

#include<stdio.h>
int main()
{
    int  total ,a , b , c , d , e;
    float per;

    printf("\n Enter the 5 subject marks : ");
    scanf("%d %d %d %d %d",&a, &b ,&c ,&d ,&e);

    total= a + b + c + d + e;

    per = (total / 500.0) * 100.0;

    printf("\n percentage = %.2f ", per);

    if (per >= 90)
    {
        printf("\n Grade 'A' ");
    }
    else if (per >= 80 ){
        printf("\n Grade 'B' ");
    }
    else if (per >= 70){
        printf("\n Grade 'C' ");
    }
    else if (per >= 60){
        printf("\n Grade 'D' ");
    }
    else if (per >= 40){
        printf("\n Grade 'E' ");
    }
    else{
        printf("\n Grade 'F' ");
    }
    return 0;

}
