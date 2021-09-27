#include<stdio.h>
int main(){
    char *p = "Hello";
    *p = 'M';
    p = "Bye";

    printf("%c",*p);
    printf("%u",p);
    return 0;
}