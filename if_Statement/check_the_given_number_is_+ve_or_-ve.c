#include<stdio.h>
int main(){
    int a ;
    printf("\n Enter a positive or negative number : ");
    scanf("%d",&a);

    if (a > 0 ){
        printf("\n The given number is positive !!\n");
    }
    else {
        printf("\n The given number is negative !!\n");
    }
    return 0;
}