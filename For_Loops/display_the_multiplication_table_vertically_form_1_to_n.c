#include<stdio.h>
void main(){
    int n , i , j;
    printf("\n Input upto the Multiplication table no. 1 to : ");
    scanf("%d",&n);
    
    printf("\n The Multiplication Table of 1 to %d : \n",n);
    
    for (i = 1 ; i <= 10 ; i++){
        for( j = 1 ; j <= n ; j++){
            printf("%d X %d = %d, ",j,i,i*j);
        }
        printf("\n");
    }
}