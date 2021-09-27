//Sending and receiving values between funtions.
#include<stdio.h>
int main(){
    int a,b,c,sum ;

    printf("\n Enter any three numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    calsum();
    
    sum = calsum( a , b , c );
    
    printf("\n Sum = %d \n",sum);
    return 0;
}

int calsum(x,y,z)
    int x , y , z;
{
    int d;
    d = x + y + z ;
    return (d);
}
