//Write a C program to find the eligibility of admission for a professional course based on the following criteria.

/*Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 
or Total in Maths and Physics >=140 ------------------------------------- 
Input the marks obtained in Physics :65 Input the marks obtained in Chemistry :51 Input the marks obtained in Mathematics :
72 Total marks of Maths, Physics and Chemistry : 188 Total marks of Maths and Physics : 137 The candidate is not eligible.*/

#include<stdio.h>
int main(){
    int math , phy , chem , total_in_all_three_subject , total_in_maths_and_physics ;

    printf("\n Input your marks of maths : ");
    scanf("%d",&math);

    printf("\n Input your marks of Physics : ");
    scanf("%d",&phy);

    printf("\n Input your marks in Chemistry : ");
    scanf("%d",&chem);

    printf("\n Total Marks of Maths : %d \n Total Marks of Physics : %d \n Total Marks of Chemistry : %d \n",math,phy,chem);

    total_in_maths_and_physics = math + phy ;

    total_in_all_three_subject = math + phy + chem ;

    printf("\n Total in Maths and Physics : %d out of 140 .\n Total Marks of all three subjects : %d out of 300. \n",total_in_maths_and_physics,total_in_all_three_subject);

    if (math >= 65 && phy >= 55 && chem >=50 && total_in_all_three_subject >=190 && total_in_maths_and_physics >= 140){
        printf("\n The Candidate is Eligible for Admission !!\n");
    }
    else {
        printf("\n The candidate is not Eligible for Admission.\n");
    }

    return 0 ;
}