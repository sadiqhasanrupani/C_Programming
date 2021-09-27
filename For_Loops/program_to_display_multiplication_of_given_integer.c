//Write a program in C to display the multiplication table of a given integer.

#include<stdio.h>
void main(){
    int n , i ; 
    printf("\n Enter your Interger to display it's Multiplication : ");
    scanf("%d",&n);
    printf("\n Multiplication Table of %d \n",n);
    
    for ( i = 1 ; i < 10 ; i++){
        printf("\n %d X %d = %d \n",n,i,n*i);
    }

}