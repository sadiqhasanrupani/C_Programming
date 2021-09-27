#include<stdio.h>
int main(){
    int spc , i , j , k , t = 1 , r ;
    printf("\n Input the rows : ");
    scanf("%d",&r);

    spc = r + 4-1 ;
    for (i = 1 ; i <= r ; i++){
        for ( k = spc ; k >= r ; k--){
            printf(" ");
        }
        for ( j = 1 ; j <= i ; j++){
            printf("%d ",t++);
        }
        printf("\n");
        spc -- ;
    }
    return 0;
}