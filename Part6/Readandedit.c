#include <stdio.h>
#include <stdlib.h>

FILE *fptr;

int main(){

    char letter;
    int i;

    fptr=fopen("D:\\Codes\\C\\C Projects\\Part6\\file1.txt","r+");
    if(fptr==0){
        printf("Error--file could not be opened\n");
        exit(1);
    }

    printf("Which # letter would you like to change (1-26)?: ");
    scanf(" %d",&i);

    fseek(fptr,(i-1),SEEK_SET);

    fputc('*',fptr);

    fseek(fptr,0,SEEK_SET);
    printf("Here is the file now:\n");

    for(i=0;i<26;i++){

        letter=fgetc(fptr);
        printf("The next letter is %c.\n",letter);
    }

    fclose(fptr);
    return 0;
}