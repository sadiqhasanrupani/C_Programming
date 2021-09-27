#include<stdio.h>
int function(); // Function Declaration
int main(){
    function(); // Function Call
    return 0;
}

int function(){ // Function Definition
    printf("\n I Called a Function");
    return 0;
}