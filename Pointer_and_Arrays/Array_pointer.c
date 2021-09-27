// Simple program of Array of Pointer in c .
#include<stdio.h>
int main(){
    int *arr[4] ; // Array of integers pointer.
    int i = 31 ; 
    int j = 5 , k = 19 , I = 71 , m ;

    arr[0] = &i;
    arr[1] = &j;
    arr[2] = &k;
    arr[3] = &I;

    printf("\n The Value of i , j , k , I using pointer is : \n");
    for (m = 0 ; m < 4 ; m++){
        printf("%d ",*(arr[m]));
    }
    return 0 ;
}