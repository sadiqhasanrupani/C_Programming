// Passing 2-D arrays to a Funtion by using pointers.
// There are three ways in which we can pass Two-Dimensional Array using pointers.

#include<stdio.h>
int first_method();
int second_method();
int third_method();
int i, j;
int main(){
    int i , j , s[5][2] = {{1234, 45} , {9834 , 89} , {9048 , 90}, {8765 , 45} , {9075 , 32}};
    first_method(s,5,2);
    second_method(s,5,2);
    third_method(s,5,2);
}

int first_method(int *q , int row , int col){
    printf("\n First Method is : \n");
    for ( i = 0 ; i < row ; i++){
        for ( j = 0 ; j < col ; j++){ 
            printf("%d ",*(q + i * col + j));
        }
        printf("\n");
    }
    printf("\n");
    return 0 ;
}

int second_method(int (*q)[2] , int row , int col){
    int *p ;
    printf("\n Second Method is : \n");
    for ( i = 0 ; i < row ; i++){
        p = q + i  ; 
        for ( j = 0 ; j < col ; j++){
            printf("%d ",   *(p + j));
        }
        printf("\n");
    } 
    printf("\n");
    return 0 ;
}

int third_method(int q[][2] , int row , int col){
    printf("\n Third Mehtod is : \n");
    for ( i = 0 ; i < row ; i++){
        for ( j = 0 ; j < col ; j++){
            printf("%d ",q[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}    