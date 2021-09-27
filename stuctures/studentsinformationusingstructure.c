#include<stdio.h>
struct student{
    int rn , marks , total , a , b , c , d , e ;
    char nm[100] , add[100];
    float per;
}stu1;
int main(){
    printf("\t\t\t\t\t~~~~Student Data~~~~");
    
    printf("\n Enter Stuedents Roll No. : ");
    scanf("%d",&stu1.rn);

    getchar();
    printf("\n Enter Students Name : ");
    fgets(stu1.nm , sizeof(stu1.nm) , stdin);

    printf("\n Enter Students Address : ");
    fgets( stu1.add , sizeof(stu1.add) , stdin);

    printf("\n Enter Student Marks : ");
    scanf("%d %d %d %d %d",&stu1.a , &stu1.b , &stu1.c , &stu1.d , &stu1.e );

    stu1.total = stu1.a + stu1.b + stu1.c + stu1.d + stu1.e ;
    stu1.per = ( stu1.total / 500.0 ) * 100.0 ;

    printf("\t\t\t\t\t~~~~Student Info~~~~");

    printf("\n Student Roll No. : %d \n",stu1.rn);
    printf("\n Student Name : %s ",stu1.nm);
    printf("\n Student Address : %s ",stu1.add );
    printf("\n Student Get  Marks Out of 5 Subject  : %d %d %d %d %d \n",stu1.a , stu1.b , stu1.c , stu1.d , stu1.e );
    printf("\n Student Get Total Marks Out of 500 is : %d \n",stu1.total );
    printf("\n Student get Percentage : %.2f \n ",stu1.per);

    if (stu1.per > 90 ){
        printf("\n Student Grade 'A' \n");
    }
    else if (stu1.per > 80){
        printf("\n Student Grade 'B' \n");
    }
    else if (stu1.per > 70 ){
        printf("\n Student Grade 'C' \n ");
    }
    else if (stu1.per > 60 ){
        printf("\n Student Grade 'D' \n");
    }
    else if (stu1.per > 50 ){
        printf("\n Student Grade 'E' \n");
    }
    else{
        printf("\n Student Grade 'F' \n");
    }
    return 0;
}
