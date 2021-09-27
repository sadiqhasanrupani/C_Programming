#include<stdio.h>
void increment();
void decrement();
int i;
int main(){
    printf("\n i = %d \n",i);
    
    increment();
    increment();
    increment();
    decrement();
    decrement();
    decrement();

    return 0;
}
void increment(){
    i = i + 1 ;
    printf("\n The Increment of i is : %d",i);
}
void decrement(){
    i = i - 1 ;
    printf("\n The Decrement of i is : %d",i);
}