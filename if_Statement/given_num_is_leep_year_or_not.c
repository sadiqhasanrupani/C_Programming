#include<stdio.h>
int main(){
    int a ;
    
    printf("\n Enter a Year : ");
    scanf("%d",&a);

    if ( a % 4 == 0 ){
        printf("\n This number is leep year !!");
    }
    else {
        printf("\n This number is not a leep year !!");
    }
    return 0 ;
}