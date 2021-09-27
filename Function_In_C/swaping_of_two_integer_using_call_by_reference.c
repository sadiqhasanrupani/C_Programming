#include<stdio.h>
int swapv();
int main(){
    int a = 10 , b = 20;
    printf("\n a = %d \n b = %d \n",a,b);
    printf("\n Swapping of two integer by using call by reference .\n");
    swapv(&a,&b);
    printf("\n a = %d \n b = %d \n",a,b);
}
int swapv(int *a , int *b){
    int t;
    t = *a ;
    *a = *b ;
    *b = t ;
    return 0;
}