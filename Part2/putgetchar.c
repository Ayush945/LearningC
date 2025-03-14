#include <stdio.h>
#include <string.h>
#include <conio.h>
int main(){

    // int i;
    // char msg[]="C is fun";

    // for(i=0; i<strlen (msg);i++){
    //     putchar(msg[i]);
    // }
    // putchar('\n');

    // printf("Type up to 5 character and press enter...\n");
    // for (i=0;i<5;i++){
    //     msg[i]=getchar();
    //     if(msg[i]=='\n'){
    //         i--;
    //         break;
    //     }
    // }

    // putchar('\n');

    // for(;i>=0;i--){
    //     putchar(msg[i]);
    // }

    // putchar('\n');
    char firstInit, lastInit;
    

    printf("Enter first character: ");
    firstInit=getch();
    putch(firstInit);

    printf("Enter second character: ");
    lastInit=getch();
    putch(lastInit);

    return 0;
}