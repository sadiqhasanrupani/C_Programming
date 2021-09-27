#include<stdio.h>
struct stu
{
    int rn;
    char nm[30];
    float per;
    int age;
};

void main()
{
    struct stu;
    print("\n Enter the roll no. , percentage, name ,age :\n");
    scanf("%d %f %s %d ", &stu.rn,&stu.per,&stu.nm,$stu.age);
    printf("\n roll no . : %d \n,percentage : %f\n, name : %s, age : %d\n",stu.rn, stu.per, stu.nm,stu.age);

    return 0;
}
