#include<stdio.h>
void main(){
    int i , j , k , row , spac ;
    printf("\n Input the rows : ");
    scanf("%d",&row);

    spac = row + 4-1 ; 

    for ( i = 1 ; i <= row ; i++){
        for (k = spac ; k >= 1 ; k--){
            printf(" ");
        }
        for ( j = 1 ; j <= i ; j++){
            printf("* ");
        }
        printf("\n");
        spac--;
    }
}