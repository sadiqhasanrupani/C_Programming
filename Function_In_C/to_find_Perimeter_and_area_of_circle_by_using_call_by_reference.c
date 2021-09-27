//By using Call by Reference we will find out the area of circle and the Perimeter of Circle by using C language
#include<stdio.h>
int areaperi();
int main(){
    int r;
    float p , c;

    printf("\n Input the Radius of Circle : ");
    scanf("%d",&r);

    areaperi(r,&p,&c);
    printf("\n The Perimeter of Circle is : %.2f\n",p);
    printf("\n The Area of Circle is : %.2f",c);
}
int areaperi(int r , float *p , float *c){
    *p = 3.142  * r * r ;
    *c = 2 * 3.142 *r ;
    return 0;
}