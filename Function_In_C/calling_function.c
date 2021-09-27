#include<stdio.h>
int main(){ //if a program contains only one funtion , it must be main().
            
            /* if a C program contains more than one function , than one of these function must be main() ,
                because program execution always begins with main()*/

    printf("\n This function is in int main () ");
    second_main(); //Any C programe contains at least one function .
    third_main();
    fourth_main();  // Each funtion in a program is called in the sequence specified by the funtion
                    // calls in main().
                    /* for Example :
                                    fourth_main() => here this funtion is called because with the help of 
                                    the main , see => fourth_"main()"; */
    fivth_main();
    printf("\n Iam finally back to the int main funtion .");
    
    // There is no limit on the number of function that might be present in a C program .

    return 0;
}


int second_main(){
    printf("\n This funtion is in int second_main() ");
}

int third_main(){
    printf("\n This function is in int third_main() ");
}

int fourth_main(){
    printf("\n This Funtion is in int fourth_main() ");
}

int fivth_main(){
    printf("\n This funtion is in int fivth_main() ");

    //After each function has done its thing, control returns to main() . When main() runs out of function calls , the program ends.

}
