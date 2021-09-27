//Examples of String Library Function.
// 1. strlen = String length , it find the string's length .
#include<stdio.h> 
#include<string.h>
int string_length();
int string_copy();
int string_cat();
int string_compare();
int main(){
    string_length();
    string_copy();
    string_cat();
    string_compare();kt
    return 0;
}
int string_length(){
    char arr[] = "Bamboozled!!!";
    int len1 , len2 ;

    len1 = strlen(arr);
    len2 = strlen("Sadiqhasan Rupani.");



    

    printf("\n your First String is : %s And it's Length is : %d\n",arr,len1);
    printf("\n Your Second String is : %s And it's Length is : %d\n","Sadiqhasan Rupani",len2);
    return 0;
}
/*Note that in the first call to the function strlen( ), we are passing 
the base address of the string, and the function in turn returns the 
length of the string. While calculating the length it doesn’t count 
‘\0’. Even in the second call*/

// 2. strcpy = String copy , it copy's the contents of two strings into another
// String.

int string_copy(){
    char source[] = "Sadiqhasan Rupani.";
    char target[100];

    strcpy(target,source); 
    printf("\n Your Source File Name is : %s\n",source);
    printf("\n Your Target File Name is : %s\n",target);
    return 0;
}
int string_compare(){
    char string1[] = "Jerry" ; 
    char string2[] = "Ferry" ; 
    
    int i, j, k ; 
    
    i = strcmp ( string1, "Jerry" ) ; 
    j = strcmp ( string1, string2 ) ; 
    k = strcmp ( string1, "Jerry boy" ) ; 
    
    printf ( "\n%d %d %d", i, j, k ) ; 
    
    return 0 ;
}