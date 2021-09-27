//Write a C program to check whether a triangle can be formed by the given value for the angles.
#include<stdio.h>
int main(){
    int a , b , c ,sum;
    printf("\n Input the three angles of the traingle : ");
    scanf("%d%d%d",&a,&b,&c);

    // Calcualting the sum of given three angle values.

    sum =  a + b + c;

    if (sum == 180){
        printf("\n The Traingle is valid.");
    }
    else {
        printf("\n The Traingle is not valid. ");
    }
    return 0 ;
}