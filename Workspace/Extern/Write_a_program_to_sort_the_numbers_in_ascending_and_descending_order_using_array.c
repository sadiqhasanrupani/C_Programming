/*Write a program to sort the numbers in ascending and descending order using
array.*/

#include<stdio.h>           //Header file
void main()                 // main Declaration 
{
    int temp /*temparary variable */ , i , j , num[100] , n ; 

    printf("\n Enter input for n : ");
    scanf("%d",&n); 

    printf("\n Enter %d number : \n",n);
    for ( i = 0 ; i < n ; i++){
        scanf("%d",&num[i]);
        // 13,47,87,98,67
    }

    for ( i = 0 ; i < n ; i++){
        for ( j = i + 1 ; j < n ; j++){
            if (num[i] < num[j])
            {

                temp = num[i];
                num[i] = num[j];
                num[j] = temp;  
                //output : 98  87  
            }
        }
    }

    printf("\n Desending Order : \n");
    for ( i = 0 ; i < n ; i++){
        printf(" %d\n",num[i]);
    }
    printf("\n Ascending Order : \n");
    for ( i = n-1 ; i >= 0 ; i-- ){
        printf(" %d\n",num[i]);
    }
}