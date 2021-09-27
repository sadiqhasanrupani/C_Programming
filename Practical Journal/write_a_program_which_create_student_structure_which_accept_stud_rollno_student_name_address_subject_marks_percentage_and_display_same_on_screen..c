// Name : Sadiqhasan Rupani.
// Roll no. : 06

/*write a program which create student structure which accept student
roll no, student name , address, subject marks, percentage and display
same on screen.*/

#include<stdio.h>
struct data
{
    int roll_no;
    char nm[40];
    char add[50];
    int marks;
    float percentage;
}stu1;

int main()
{
    printf("\t\t\t\t\t\t Enter Student Data : \n");

    printf("\n Enter Student Roll no. : ");
    scanf("%d", &stu1.roll_no);
    getchar();

    printf("\n Enter Student Name : ");
    fgets(stu1.nm,sizeof(stu1.nm),stdin);

    printf("\n Enter Student Address : ");
    fgets(stu1.add, sizeof(stu1.add),stdin);

    printf("\n Enter Student marks : ");
    scanf("%d",&stu1.marks);

    printf("\n Enter Student Percantage : ");
    scanf("%f",&stu1.percentage);

    printf("\t\t\t\t\t\t   Student Details : \n");

    printf("\n Rollno. : %d \n",stu1.roll_no);

    printf("\n Name : %s",stu1.nm);

    printf("\n Address : %s",stu1.add);

    printf("\n Student Marks : %d \n",stu1.marks);

    printf("\n Student Percentage : %.2f \n",stu1.percentage);

    return 0 ;
}