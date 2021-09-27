#include<stdio.h>
int main(){
    int a , b ;
    printf("\n Enter the value of a and b simultanously : ");
    scanf("%d%d",&a,&b);

    if (a == b){
        printf("\n The Value of a and b are equal !!\n");
    }
    else{
        printf("\n The Value of a and b are not equal !!\n");
    }
    return 0;
}