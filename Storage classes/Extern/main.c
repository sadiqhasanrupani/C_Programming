#include<stdio.h>
void main()
{
    register int n , sum = 0 , i ;
    printf("\n Enter n : ");
    scanf("%d",&n);

    for ( i = 1 , i <= n , i++)
    {
        sum = sum + i ;
    }
    printf("\n sum = %d \n",sum);
}
