/*  Name : Sadiqhasan Rupani.
    Roll no. : 06
*/

//Write a program to add two Matrices Use two Dimensional arrays

#include<stdio.h>
int main()
{
    int r , c , a[100][100] , b[200][200] , sum [100][100] , i , j ;

    printf("\n Enter the rows : ");
    scanf("%d",&r);

    printf("\n Enter the Number of Columns : ");
    scanf("%d",&c);

    printf("\n Enter elements of first matrix : ");
    for (i = 0 ; i <= r-1 ; i++)
    {

        for (j = 0 ; j <= c-1 ; j++)
        {
                printf("\n Enter value of a[%d][%d] : ", i+1 , j+1);
                scanf("%d",&a[i][j]);
        }
    }

    printf("\n Enter the elements of second matrix : \n");
        for (i = 0 ; i < r ; i++){
            for (j = 0 ; j < c ; j++){

                printf("\n Enter value of b[%d][%d] : ",i+1 , j+1);
                scanf("%d",&b[i][j]);
            }
        }

        printf("\n Sum of two Matrix is : \n");
        for (i = 0 ; i < r ; i++){
                for (j = 0 ; j < c ; j++){

                    sum [i][j] = a[i][j] + b [i][j];
                    printf("%d ", sum[i][j]);
                }
                printf("\n\n");
        }
        return 0 ;
}



