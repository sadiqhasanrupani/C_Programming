//Write a program in C to display the cube of the number upto given an integer.
#include<stdio.h>
int main(){
    int j , number;
    printf("\n Input the Number of term you want cube : ");
    scanf("%d",&number);

    for (j = 1 ; j <= number ; j++){
        printf("\n The Number is : %d and the cube of %d is : %d", j , j , (j * j * j ));
    }
    return 0;
}