//Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.
#include<stdio.h>
int main(){

    int a , b , c ; // sides of the traingle

    printf("\n Input the Three sides of Traingle : ");
    scanf("%d%d%d",&a,&b,&c);

    if ( a == b && b == c ){                                    // if all sides are Equal
        printf("\n This Traingle is Equilateral Traingle.\n"); 
    }
    
    else if ( a == b || b ==c || c == a ){                      // if two sides are equal
        printf("\n This Traingle is Isosceles Trainlge.\n");
    }
    
    else{                                                       // if all sides are not equal
        printf("\n this traingle is Scalene Traingle.\n");
    }
    
    return 0;
}