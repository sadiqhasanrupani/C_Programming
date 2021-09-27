//Used Functions.
#include<stdio.h>
int integer();
int null();
int pointers();
int main(){
    integer();
    printf("\n");   
    null();
    printf("\n");
    pointers();
    return 0;
}

// we done this program using the final value 9.

int integer(){
    char nm [] = "Sadiqhasan";
    int i = 0;

    printf("\n Using Integers : \n Your Name is : ");
    while (i <= 9){
        printf("%c",nm[i]);
        i++;
    }
    return 0 ;
}   

// Can we use this same program without using 9 ?
// Yes we can . let us see in this Function .

int null(){
    char name[] = "Sadiqhasan";
    int i = 0;

    printf("\n Using Null : \n Your Name is : ");
   
    while( name[i] != '\0'){       //using without final value 9
        printf("%c",name[i]);
        i++;
    }
    return 0;

}

/*This program doesn’t rely on the length of the string (number of 
characters in it) to print out its contents and hence is definitely 
more general than the earlier one. Here is another version of the 
same program; this one uses a pointer to access the array elements.*/

//program using pointers.
int pointers(){
    char nm[] = "Sadiqhasan";
    char *ptr ;

    ptr = nm ; //stored the address of String.
    
    printf("\n Using Pointers :\n Your Name is : ");
    
    while (*ptr != '\0'){
        printf("%c",*ptr);
        ptr++;
    }
    return 0 ;    
}

/*As with the integer array, by mentioning the name of the array we 
get the base address (address of the zeroth element) of the array. 
This base address is stored in the variable ptr using, 

ptr = name ; 

Once the base address is obtained in ptr, *ptr would yield the 
value at this address, which gets printed promptly through, 

printf ( "%c", *ptr ) ; 

Then, ptr is incremented to point to the next character in the 
string. This derives from two facts: array elements are stored in 
contiguous memory locations and on incrementing a pointer it 
points to the immediately next location of its type. This process is 
carried out till ptr doesn’t point to the last character in the string, 
that is, ‘\0’. 

In fact, the character array elements can be accessed exactly in the 
same way as the elements of an integer array. Thus, all the 
following notations refer to the same element: 
name[i] 
*( name + i ) 
*( i + name ) 
i[name]*/