#include<stdio.h>
void main(){
    int i , j  ;
    printf("\n The pattern of astericks are : \n");
    for (i = 0 ; i <= 4 ; i++){
        for (j = 0 ; j < i ; j++){
            printf("*");
        }
        printf("\n");
    }
}