#include<stdio.h>

int main(){
    printf("\n Iam in the main ");
    italy();   //calling funtion italy
    printf("\n Iam finally back in the main");
}

int italy(){
    printf("\n Iam in the italy ");
    brazil();   //calling function brazil
    printf("\n Iam back in the italy ");
}

int brazil(){
    printf("\n Iam in the brazil ");
    India();    //calling function India
    printf("\n Iam back in the brazil ");
}

int India(){
    printf("\n Iam in the India ");
    //back to the main funtion.
}
