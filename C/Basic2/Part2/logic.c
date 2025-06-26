#include <stdio.h>
#include <ctype.h>

int main(){

    char p,q;

    printf("Enter the truth value for P (T/F): ");
    scanf("%c",&p);

    printf("\nEnter the truth value for Q (T/F): ");
    scanf(" %c",&q);

    char conjunction,disjunction,exclusive,conditional,biconditional;
    
    // For conjunction
    if(tolower(p)=='f' && tolower(q)=='f'){
        disjunction='F';
        conjunction='F';
        biconditional='T';
        exclusive='F';
        conditional='T';
    }
    else if(tolower(p)=='t' && tolower(q)=='t'){
        disjunction='T';
        conjunction='T';
        biconditional='T';
        exclusive='F';
        conditional='T';
    }
    else if(tolower(p)=='t' && tolower(q)=='f'){
        conditional='F';
        disjunction='T';
        conjunction='F';
        exclusive='T';
        biconditional='F';

    }
    else{
        conditional='T';
        disjunction='T';
        conjunction='F';
        exclusive='T';
        biconditional='F';
    }


    printf("\nThe truth value of conjunction: %c, disjunction: %c, exclusive: %c,\n conditional statement: %c, biconditional statement: %c",conjunction,disjunction,exclusive,conditional,biconditional);
}