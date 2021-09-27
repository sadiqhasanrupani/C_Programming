/* Name : Sadiqhasan Rupani.
    Roll no.: 06.
*/

//Write a program to sort the number in ascending and descending order using array .

#include<stdio.h>  //standard input output header file
void main()
{
    int i , j , n , temp;
    int num[100];

    printf("\n Enter your Input for n : "); //5
    scanf("%d",&n);

    printf("\n Enter %d number : \n",n);

    for (i = 0 ; i < n ; i++)
    {
        scanf("%d",&num[i]);
    }

    for (i = 0 ; i < n ; i++){
        for (j = i + 1 ; j < n ; j++){
                if (num[i] < num[j])
                    {   // 0    1
                        // 13, 78,98,96,54
                        temp = num[i];
                        num[i] = num [j];
                        num[j] = temp;
                    }//output 98
        }
    }
    printf("\n Ascending Order : \n");
    for(i = n-1 ; i >= 0 ; i--)
    {
        printf("%d\n " ,num[i]);
    }

    printf("\n Descending Order : \n");
    for (i = 0 ; i <= n ; i++)
    {
        printf("%d\n",num[i]);
    }
}
