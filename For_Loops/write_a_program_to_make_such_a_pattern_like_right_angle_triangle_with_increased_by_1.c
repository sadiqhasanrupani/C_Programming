// Write a program to make such a pattern like right angle traingle with increased by 1.

#include<stdio.h>
void main(){
    int row , i , j , increase = 1 , n ;
    printf("\n Input the Number of Rows : ");
    scanf("%d",&n);

    for (i = 1 ; i <= n ; i++){
        for (j = 1 ; j <= i ; j++){
            printf("%d ",increase++); // incresing by one 
                                      // Example :
                                      /*increase = 1 
                                      and then we are doing increase++ i.e ,increase = 1,
                                       increase = 1 + 1 = 2  , increase = 2 + 1 = 3 upto row limit.
                                       */
        }
        printf("\n");
    }
}