//Write a program in C to display n terms of natural number and their sum.

#include<stdio.h>
int main(){
    int sum = 0, n , i ;
    printf("\n Input how many natural Number you want : ");
    scanf("%d",&n);

    printf("\n The %d Natural Numbers are : \n",n);
    printf("\n ");
    for ( i = 1 ; i <= n ; i++){
        printf("%d ",i);
        sum = sum + i ;
    }

    printf("\n\n The sum of the %d Natural Numbers is : ",sum);
    return 0;
}