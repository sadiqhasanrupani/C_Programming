#include<stdio.h>
int main(){
    int a = 10 ; 
    int *ptr;
    ptr = &a;
    
    printf("\n Pointer Value = %d \n",ptr);
    printf("\n Pointer Address = %d \n ",&ptr);
    printf("\n Pointer Content = %d \n",*ptr);
    
    return 0;
}