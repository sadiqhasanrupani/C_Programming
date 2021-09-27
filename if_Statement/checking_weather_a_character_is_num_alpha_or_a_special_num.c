#include<stdio.h>
int main(){
    char ch ; 
    printf("\n Enter a Character : ");
    scanf("%c",&ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >='A' && ch <='Z')){
        printf("\n This Character is Alphabet.\n");
    }
    else if (ch >= '0' && ch <= '9'){
        printf("\n This Character is Number.\n");
    }
    else{
        printf("\n This Character is Special Character.\n");
    }
    return 0;
}