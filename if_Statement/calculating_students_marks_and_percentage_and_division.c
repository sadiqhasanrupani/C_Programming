//Write a C program to read roll no, name and marks of three subjects and calculate the total, percentage and division. 

#include<stdio.h>
int main(){
    int rn , s1 , s2 , s3 , total_marks ;
    char name[100];
    float percentage ;

    printf("\n Input Student Roll_no. : ");
    scanf("%d",&rn);

    getchar();
    printf("\n Input Student Name : ");
    fgets( name , sizeof(name) , stdin );

    printf("\n Input all Three subject marks simultanously : ");
    scanf("%d%d%d",&s1 , &s2 , &s3 );

    total_marks = s1 + s2 + s3 ; 
    percentage = (total_marks / 300.0 ) * 100.0;

    printf("\n Student Roll_no. : %d\n",rn);
    printf("\n Student Name : %s",name);
    printf("\n Student total marks of three subjects : %d\n",total_marks);
    printf("\n Student Percentage : %.2f\n",percentage);

    if (percentage >= 90){
        printf("\n Division = First \n");
    }
    else if (percentage >= 80 || percentage >= 70){
        printf("\n Division = Second ");
    }
    else if (percentage >= 60 || percentage >= 50){
        printf("\n Division = Third\n");
    }
    else {
        printf("\n FAIL !! \n");
    }
    return 0;
    }