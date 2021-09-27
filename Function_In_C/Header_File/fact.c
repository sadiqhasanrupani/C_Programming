#include<stdio.h>
int factorial();
int main(){
    int n ;
    scanf("%d",&n);
    int fact = 1 ;
    for (int i = 1 ; i <= n ; i++){
        fact = fact * i ;
    }
    return fact;
}