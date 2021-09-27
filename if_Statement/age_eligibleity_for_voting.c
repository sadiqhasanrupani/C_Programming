#include<stdio.h>
int main(){

    int a ;

    printf("\n Enter your Age : ");
    scanf("%d",&a);

    if (a >= 18){
        printf("\n Congratulation you are eligible for casting his/her own vote !!\n");
    }
    else {
        printf("\n Sorry!! You are not eligible for giving a vote .\n");
    }
    return 0;
}