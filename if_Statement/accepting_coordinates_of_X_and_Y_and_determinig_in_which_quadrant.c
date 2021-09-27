//Writing a C program to accept a coordinate point in a XY coordinate system and determine in which quadrant the coordinate point lies
#include<stdio.h>
int main(){
    int col1 , col2 ;
    printf("\n Enter the value of X and Y co-ordinates simultanously : ");
    scanf("%d %d",&col1 ,&col2);

    if(col1 > 0 && col2 > 0){
        printf("\n the co-ordinate points (%d,%d) lies in the First Quadrant .\n",col1,col2);
    } 
    else if (col1 < 0 && col2 > 0){
        printf("\n The Co-ordinate point (%d,%d) lies in the Second Quadrant .\n",col1,col2);
    }
    else if (col1 < 0 && col2 < 0){
        printf("\n The Co-ordintate point (%d,%d) lies in the third Quadrant.\n",col1,col2);
    }
    else if (col1 > 0 && col2 < 0){
        printf("\n The Co-ordinate point (%d,%d) lies in the Fourth Quadrant.\n",col1,col2);
    }
    else if (col1 == 0 && col2 == 0){
        printf("\n The Co-ordinate point (%d,%d) lies in the Origin.\n",col1,col2);
    }
    return 0;
}