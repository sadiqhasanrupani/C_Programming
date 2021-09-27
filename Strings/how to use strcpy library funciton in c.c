// How to use strcat(); Library function .

#include<stdio.h>
#include<string.h>
int main()
{

    char str[] = "This is " , str2[] = "C Programe ." ;

    strcat(str,str2);
    printf("\n This is the Combination of two strings : %s\n",str);
    return 0;
}
