//Write a C program to calculate the root of a Quadratic Equation. 
#include<stdio.h>
#include<math.h>
void main(){
    int a , b , c , d;
    float x1 , x2 ;

    printf("\n Enter the value of a , b , c : ");
    scanf("%d%d%d",&a,&b,&c);
    d = b*b - 4*a*c;
    
    if(d == 0 ){
        printf("\n Both roots are equal .\n");
        x1 = -b / (2.0*a);
        x1 = x2 ;
        printf("\n First Root Root1 = %.2f\n",x1);
        printf("\n Second root , Root2 = %.2f\n",x2);
    }
    else if (d > 0){
        printf("\n Both roots are real and diff-2 \n ");

        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b + sqrt(d)) / (2 * a);

        printf("\n First Root , Root1 = %.2f \n",x1 );
        printf("\n First Root , Root2 = %.2f \n",x2);
    }
    else {
        printf("\n Root are imaginary , \n No Solution .\n");
    }

}