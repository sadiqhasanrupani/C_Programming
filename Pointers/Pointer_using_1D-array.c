#include<stdio.h>
void main()
{
    int i , x[6] , sum = 0 ;
    printf("\n Enter 6 Numbers : ");
    for ( i = 0 ; i < 6 ; i++){
        //Equivalent to scanf("%d",&a[i])
        scanf("%d",x+i);

        //Equivalent to sum += x[i]
        //sum = sum + i
        sum = sum + *(x+i);
    }
    printf("\n Sum = %d ",sum);
}