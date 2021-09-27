#include<stdlib.h>
#include<stdio.h>
int main()
{
    int a;
    float x;
    int qwe[10];
    float *p;

    p = (float*)malloc(20);

    *p = 5.6;

    printf("%u \n%f \n %u \n  ",p,*p,&p);

    free (p);

    return 0;
}
