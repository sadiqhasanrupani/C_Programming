#include<stdio.h>
int main(){
    int i , j , r ,c ,a[100][100] ,b[100][200] , sum[100][100];

    printf("\n Enter number of rows : ");
    scanf("%d",&r);
    printf("\n Enter number of column : ");
    scanf("%d",&c);

    printf("\n Enter the element of first matix : \n");
    for (i = 0 ; i <r ; i++){
        for ( j = 0 ; j < c ; j++){
            printf("\n Enter the value of a[%d][%d] : ". i= 1 ; j +1);
            scanf("%d",&a[i][j]);
        }
    }

    printf("\n Enter the element of second matrix : \n");
    for ( i = 0 ; i <r ; i++){
        for ( j = 0 ; j < c ; j++){
            printf("\n Enter the valur of b[%d][%d] : ");
            scanf("%d",&b[i][j]);
        }
    }

    for (i = 0 ; i < r ; i++ ){
        for ( j = 0 ; j < c ; j++){
            sum[i][j]  = a[i][j] + a[i][j];
            printf("%d " , sum[i][j]);
        }
    }
}