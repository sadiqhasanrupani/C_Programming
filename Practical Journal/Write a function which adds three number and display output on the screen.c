/*  Name : Sadiqhasan Rupani.
    Roll no. : 06
*/

// Write a function which adds three number and display output on the screen

#include<stdio.h>
int add (int a , int b , int c);
int main()
{
    int a , b , c , sum;

    printf("\n Enter 3 Numbers : ");
    scanf("%d %d %d",&a , &b, &c);

    sum = add (a , b , c);
    printf("\n sum = %d", sum);

};
int add(int a , int b ,int c)
{
    int sum ;
    sum = a + b + c;
    return sum;
}

