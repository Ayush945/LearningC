#include <stdio.h>
#include <stdlib.h>
FILE *fptr;

int main(){

    char letter;
    int i;
    fptr=fopen("D:\\Codes\\C\\C Projects\\Part6\\file1.txt","w+");
    if(fptr==0){
        printf("Error--file could not be opened\n");
        exit(1);
    }
    for(letter='A';letter<='Z';letter++){
        fputc(letter,fptr);
    }
    puts("Just wrote the letter A through Z");

    fseek(fptr,-1, SEEK_END);
    printf("Here is the file backwards:\n");

    for(i=26;i>0;i--){
        letter=fgetc(fptr);

        fseek(fptr,-2,SEEK_CUR);
        printf("The next letter is %c.\n",letter);
    }
    fclose(fptr);
    return 0;
}