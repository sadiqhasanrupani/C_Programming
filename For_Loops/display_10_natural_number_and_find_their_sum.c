#include<stdio.h>
int main(){
    int sum = 0 , i ;
    printf("The first 10 Natural number are : \n");
    for (i = 1 ; i <= 10 ; i++){
        printf("%d ",i);
        sum = sum + i;  
    }
    printf("\n The sum of this 10 Natural Numbers are : %d \n",sum);
    return 0;
}