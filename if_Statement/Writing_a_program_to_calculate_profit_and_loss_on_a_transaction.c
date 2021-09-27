#include<stdio.h>
void main(){
    int cost_price , selling_prize ,profit ,loss ;
    printf("\n Input your Cost prize : ");
    scanf("%d",&cost_price);
    
    printf("\n Input your Selling Prize : ");
    scanf("%d",&selling_prize);

    if (selling_prize > cost_price){
        profit = selling_prize - cost_price ;
        printf("\n Your Profit is : %d\n",profit);
    }
    else if (cost_price > selling_prize){
        loss = cost_price - selling_prize;
        printf("\n Your Loss is : %d \n",loss);
    }
    else {
        printf("\n You have no Profit nor Loss.");
    }



}