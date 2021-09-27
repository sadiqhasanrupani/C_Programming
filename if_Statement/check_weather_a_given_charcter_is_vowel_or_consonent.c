#include<stdio.h>
int main(){
    
    char ch ;
    printf("\n Enter a Alphabet : ");
    scanf("%c",&ch);
    if (ch == 'a' || ch == 'A' || ch == 'E' || ch == 'e' || ch == 'i' || ch == 'I' || ch =='o' || ch == 'O' || ch == 'U' || ch == 'u'){
        printf("\n This Alphabet is a vowel.");
    }
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
        printf("\n The given Alphabet is a consonent.");
    }
    else {
        printf("\n this character is not a Alphabet.");
    }
    return 0;
}