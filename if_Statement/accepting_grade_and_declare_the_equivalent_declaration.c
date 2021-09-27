/*
Write a program in C to accept a grade and display the equivalent description:

Grade	    Description
E           Excellent
V	        Very Good
G	        Good
A	        Average
F	        Fail

*/
#include<stdio.h>
#include<string.h>
int main(){
  char grade;
  char note[100];

  printf("\n Enter you Grade : ");
  scanf("%c",&grade);

  switch (grade){
    case 'E':
      strcpy(note,"Excellent");
      break;
    case 'V':
      strcpy(note,"Very Good");
      break;
    case 'G':
      strcpy(note,"Good");
      break;
    case 'A':
      strcpy(note,"Average");
      break;
    case 'F':
      strcpy(note,"Fail");
      break;
    default : 
      strcpy(note , "Ivalid Input");
      break;
  }
  printf("\n You have Chosen : %s \n",note);
  return 0;
}