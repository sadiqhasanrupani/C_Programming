#include<stdio.h>
int main(){
    int a;
    printf("\n Enter a Number : ");
    scanf("%d",&a);

    if (a % 2 == 0){
        printf("\n The given number is even integer !!");
    }
    else{
        printf("\n The Given Number is odd Interger !!\n");
    }
    return 0;
}