// using swaping of two integer variable using Call by value .
#include<stdio.h>
int swapv();
int main(){
    int a ,b;
    a = 10 , b = 20 ;

    printf("\n a = %d \n b = %d \n ",a , b);
    swapv(a,b);
}
swapv(int x, int y ){
    int t;
    t = x ;
    x = y ;
    y = t ;
    printf("\n Swaping of two integer is : \n");
    printf("\n a = %d \n b = %d \n",x,y);
    
}