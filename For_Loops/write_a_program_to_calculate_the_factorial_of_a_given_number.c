#include<stdio.h>
void main(){
    int fact = 1 , i , num ;
    printf("\n Input a number : ");
    scanf("%d",&num);
    for ( i = 1 ; i <= num ; i++){
        fact = fact * i ;
    } 
    printf("\n The factorial of %d is : %d\n",num,fact);
}