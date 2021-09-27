#include<stdio.h>
int main(){
   
    int height ;
   
    printf("\n Enter your height (in centimeter) : ");
    scanf("%d",&height);

    if (height < 150.0 ){
        printf("\n your height is low or dwarf !\n");
    }
   
    else if ((height >= 150.0) && (height < 165.0)){
        printf("\n Your Height is in Average !\n");
    }
   
    else if ((height >= 165.0) && (height < 195.0)){
        printf("\n Your Height is taller.\n ");
    }
   
    else {
        printf("\n You are abnormal !!!!");
    }
   
    return 0 ;
}