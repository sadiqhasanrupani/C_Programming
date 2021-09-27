#include<stdio.h>
float square(float);
int main(){
    float num , b ;
    printf("\n Input any Number : ");
    scanf("%f",&num);

    printf("\n The Square of %.2f is : %.2f",num,b);
    return 0 ;
}

float square(float num){
    int y ;

    y = num* num ;
    return (y);
}
