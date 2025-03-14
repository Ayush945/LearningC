#include<stdio.h>
#include <string.h>
#include<ctype.h>

int main(){
    char inChar='a';
    if(isalpha(inChar)){
        printf("Your input was a letter.\n");
    }
    if(isdigit(inChar)){
        printf("Your input was a number.\n");
    }
    if(isupper(inChar)){
        printf("The letter was uppercase\n");
    }
    if(islower(inChar)){
        printf("The letter was lowercase\n");
    }

    char first[25]="Ayush ";
    char last[25]="Thapa";
    strcat(first,last);
    printf("I am %s\n",first);
    return 0;

    
}