// Write a program to display n term of even natural number and their sum.

#include<stdio.h>
int main(){
    int sum = 0 , num , i ;
    printf("\n Input the Number : ");
    scanf("%d",&num);
    printf("\n The Even Natural Number upto %d terms are : ", num);
    for ( i = 1 ; i <= num ; i++){
        printf("%d ",2*i);
        sum = sum + 2*i ;
    }
    printf("\n");
    printf("\n Sum of Even Natural Numbers are upto %d terms : %d \n ",num,sum);
    return 0;
}