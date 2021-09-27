#include<stdio.h>
int main(){
    int spc , i , j , k , row ;
    printf("\n Input the rows : ");
    scanf("%d",&row);
    spc = row + 4-1 ;
    for (i  = 1 ; i <= row ; i++){
        for (k = spc ; k >= 1 ; k--){
            printf(" ");
        }
        for ( j = 1 ; j <= i ; j++){
            printf("%d ",i);
        }
        printf("\n");
        spc --;
    }

}