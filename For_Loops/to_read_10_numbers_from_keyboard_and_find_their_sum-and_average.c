#include<stdio.h>
int main(){
    int sum = 0 , i , n ;
    float avg ; 
    printf("\n Input the 10 Numbers : \n");
    for ( i = 1 ; i < 11 ; i++){
        printf("\n Number - %d : ",i);
        scanf("%d",&n);
        sum = sum + n ;

    }
    avg = sum / 10.0 ;
    printf("\n Sum of the 10 Numbers : %d \n Average of 10 Numbers : %.2f \n",sum,avg);
    return 0;

}