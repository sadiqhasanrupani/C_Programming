#include<stdio.h>
int main(){
    int i , j , r , c , a[100] , b[100] , sum[100] ;

    printf("\n Enter number of rows : ");
    scanf("%d",&r);

    printf("\n Enter number of column : ");
    scanf("%d",&c);

    printf("\n Enter element of first matrix : \n");
    for ( i = 0 ; i < r ; i++){
        for (j = 0 ; j <c ; j++){
            printf("\n Enter the value of a[%d][%d] : ", i+1 , j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n Enter element of second matrix : \n");
    for ( i = 0 ; i < r ; i++){
        for ( j = 0 ; j < c ; j++){
            printf("\n Entr the value of b[%d][%d] : ",i+1 , j+1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n Sum of Two Matrix are : \n");
    for (i = 0 ; i < r ; i++){
        for (j = 0 ; j < c ; j ++){
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ",sum[i][j]);
        }
        printf("\n\n");
    }
    return 0 ;
}