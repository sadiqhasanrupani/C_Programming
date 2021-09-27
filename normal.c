/*// Make your own length library Functions.
#include<stdio.h>
int xstrlen();
int xstrcat();
int main(){
    char arr[] = "Bamboozled";
    int len1 , len2 ;

    len1 = xstrlen(arr);
    len2 = xstrlen("ShRupani"); 

    printf("\n Your 1st String is : '%s' And it's length is : '%d'",arr,len1);
    
    printf("\n Your 2st String is : '%s' And it's length is : '%d'","ShRupani",len2);
    return 0;
}
int xstrlen(char *s){
    int length = 0;

    while (*s != '\0')
    {
        length++;
        s++;
    }
    return(length);
}*/

#include<stdio.h>
#include<string.h>
int xstrcat();
int main(){
    char source[] = "Hasan Rupani";
    char Target[100] = "Sadiq";

    xstrcat(Target,source);
    printf("\n Your Source file is : %s and your Target file is : %s",source,Target);
    return 0 ;
}
int xstrcat(char *t , char *s){
    while (*s != '\0'){
        *t = *s ;
        t++;
        s++;
        
    }
    return(0);
    
}