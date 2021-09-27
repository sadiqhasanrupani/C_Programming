#include<stdio.h>
int main(){
    int n , i ;
    float sum = 0.0 ;
    printf("\n Input the number of terms you want to : ");
    scanf("%d",&n);
    printf("\n"); 
    for(i = 1 ; i<= n ; i++){
       if ( i < n ){
           printf(" 1/%d + ",i);
           sum = sum + 1 / (float)i ;
       } 
       if (i == n){
           printf("1/%d ",i);
           sum = sum + 1 / (float)i ;
       }
    }
    printf("\n");
    printf("\n Sum of Series upto %d terms : %.2f \n",n,sum);
    return 0;
}