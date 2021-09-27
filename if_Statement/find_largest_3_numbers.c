#include<stdio.h>
int main(){
    
    int num1, num2 , num3 ;

    printf("\n Input the value of Num1 , Num2 , Num3 : ");
    scanf("%d %d %d",&num1 ,&num2 ,&num3);

    printf("\n Number one : %d \n Number two : %d \n Number three : %d \n ",num1 , num2 , num3 );

    if ( num1 > num2 ){
       
        if ( num1 > num3 ){
            printf("\n The 1st Number is Greater than all Three Number .\n");
        }
        
        else{
            printf("\n The 3rd Number is Greater amoung Three .\n");
        }
    }
    
    else if (num2 > num3 ){
        printf("\n The 2nd Number is Greater amount Three .\n");
    }
    
    else {
        printf("\n the 3rd Number is Greater amoung Three .\n");
    }
    return 0;
}