#include<stdio.h>
int main(){
    int temp ;
    printf("\n Input days temparature : ");
    scanf("%d",&temp);

    if (temp < 0){
        printf("\n Freezing wheater.\n");
    }
    else if (temp <= 10){
        printf("\n Very Cold Weather.\n");
    }
    else if (temp <= 20){
        printf("\n Cold wheather.\n");
    }
    else if (temp <= 30){
        printf("\n Normal in temparature .\n");
    }
    else if (temp <= 40){
        printf("\n Hot Temparature .\n");
    }
    else {
        printf("\n It's very Hot temparature .\n");
    }
    return 0;
}