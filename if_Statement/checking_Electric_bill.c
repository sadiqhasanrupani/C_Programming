//Write a program in C to calculate and print the Electricity bill of a given customer.
// The customer id., name and unit consumed by the user should be taken from the 
//keyboard and display the total amount to pay to the customer. 

/*

Unit	                                Charge/unit
upto 199	                                @1.20
200 and above but less than 400	            @1.50
400 and above but less than 600	            @1.80
600 and above	                            @2.00

*/

#include<stdio.h>
int  main(){
    int customer_id , customer_unit ;
    char customer_name[100];
    float charge , surchage_amount , gramt , net_amount ; 
    
    printf("\n Input Customer Id : ");
    scanf("%d",&customer_id);
    printf("\n Enter Customer Name : ");
    getchar(); 
    gets(customer_name) ;
    printf("\n Input the unit consumed by the Customer : ");
    scanf("%d", &customer_unit);

    if (customer_unit < 200) 
        charge = 1.20 ;
        else if (customer_unit >= 200 && customer_unit < 400)
            charge = 1.50 ;
            else if (customer_unit >= 400 && customer_unit <600)
                charge = 1.80 ;
                else 
                    charge = 2.00 ; 
    
    gramt = customer_unit * charge ;
    
    if (gramt > 300)
        surchage_amount = gramt * 15.0 / 100.0;
        net_amount = gramt + surchage_amount ;
        
        if (net_amount < 100)
            net_amount = 100;
    
    printf("\n Electricity Bill : \n");
    printf("\n Customer ID NO.                      : %d \n",customer_id);
    printf("\n Customer Name                        : %s ",customer_name);
    printf("\n Unit Cunsumed                        : %d \n",customer_unit);
    printf("\n Amount Charges @Rs. %4.2f per unit   : %.2f \n",charge, gramt);
    printf("\n Surchage Amount                      : %.2f \n",surchage_amount);
    printf("\n Net Amount Paid by the customer      : %.2f \n",net_amount);
    return 0;
}