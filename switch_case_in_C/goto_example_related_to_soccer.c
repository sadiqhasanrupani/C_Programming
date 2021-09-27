#include<stdio.h>
#include<stdlib.h>
 int main(){
    int goal ;
    printf("\n Enter the number of scores in India : ");
    scanf("%d",&goal);

    if (goal <= 5 ){
        goto defeat ;

    }
    else{
        printf("\n Indian won the match of soccer .\n");
        exit(0);
    }
    defeat:
        printf("\n Indian defeated the match .\n") ;
    return 0;
}