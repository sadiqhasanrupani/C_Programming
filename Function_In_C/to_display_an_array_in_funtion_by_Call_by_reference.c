//Display the output using nesting call by reference and also nesting funtion

#include<stdio.h>
void show();
void disp();
void main(){
    int marks[] = {55,65,78,56,98,90,89} , i ;

    for (i = 0 ; i < 7 ; i++){
        disp(&marks[i]);
    }
}
void disp(int *m){
    show(&m);
    }
void show(int **n){
    printf("%d ",**n);
    }