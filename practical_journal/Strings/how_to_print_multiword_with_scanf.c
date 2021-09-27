#include<stdio.h>
int main()
{
    char nm[25];
    
    printf("\n Enter your Full Name : ");
    scanf("%[^\n]s",nm);

    printf("\n Your Name is (using scanf) : %s",nm);
   
    return 0;
}