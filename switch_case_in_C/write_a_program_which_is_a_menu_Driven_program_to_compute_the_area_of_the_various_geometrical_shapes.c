//Write a program in C which is a Menu-Driven Program to compute the area of the various geometrical shape.

#include<stdio.h>
void main(){
    int choice , r , l , w , b , h ;
    float area ; 

    printf("\n Input 1 for Area of Circle  \n Input 2 for Area of Rectangle  \n Input 3 for Area of Traingle \n Input you choice : ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1 :
        printf("\n Input Radius of the Circle : ");
        scanf("%d",&r);
        area = 3.142 * r * r;
        break;
    case 2 :
        printf("\n Input Length and width of the Rectangle : ");
        scanf("%d%d",&l,&w);
        area = l * w ;
        break;
    case 3 :
        printf("\n Input the Base and the Height of the Traingle : ");
        scanf("%d%d",&b,&h);
        area = 1.5 * b * h ;
        break;
    
    default:
        printf("\n Invalid Input !!!!! ");
        break;
    }
    printf("\n The Area is : %.2f \n",area);
}