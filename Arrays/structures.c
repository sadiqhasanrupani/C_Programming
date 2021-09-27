#include<stdio.h>
int main()
{
    char nm[40];

    printf("\n Enter your Name : ");
    fgets(nm,sizeof(nm),stdin);

    printf("\n Name : ");
    puts(nm);

    return 0;
}
