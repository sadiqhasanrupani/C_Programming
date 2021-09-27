//Write a program in c which is a Menu Driven Program to perform a simple calculation .

#include<stdio.h>
void main(){
    int option;
    int  a , b ;  
    
    printf("\n Input the first Integer : ");
    scanf("%d",&a);
    printf("\n Input the Second Integer : ");
    scanf("%d",&b);

    printf("\n Press 1 for Addition \n Press 2 for Substraction \n Press 3 for Multiplication \n Press 4 for division \n Press 5 for Exit \n Input your Choice :");
    scanf("%d",&option);
    
    switch (option)
    {
    case 1 :
        printf("\n Addition of  %d %d are : %d",a , b , a + b);
        break;
    case 2 :
        printf("\n Substraction of  %d %d are : %d",a,b,a - b);
        break;
    case 3:
        printf("\n Multiplication of  %d %d are : %d",a,b,a * b);
        break;
    case 4:
        if (b == 0)
            printf("\n The second Integer is zero . Divide by zero.\n");
            else
                printf("\n Division of  %d %d are : %d",a,b,a/b);
        break;
    case 5:
        break;
    
    default:
        printf("\n Invalid Choice !!");
        break;
    }

}