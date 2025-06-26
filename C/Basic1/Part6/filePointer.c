#include <stdio.h>
#include "bookinfo.h"
#include <stdlib.h>

FILE *fptr;
int main(){
    int ctr;
    struct bookInfo books[3];

    for(ctr=0;ctr<3;ctr++){
        printf("What is the name of the book #%d?\n",(ctr+1));
        gets(books[ctr].title);
        puts("Who is the author?");
        gets(books[ctr].author);
        puts("How much did the book cost?");
        scanf(" $%f", &books[ctr].price);
        puts("How many pages in the book?");
        scanf(" %d", &books[ctr].pages);
        getchar();
    }
    fptr=fopen("D:\\Codes\\C\\C Projects\\Part6\\file.txt","w");
    if(fptr==0){
        printf("Error--file could not be opened\n");
        exit(1);
    }

    fprintf(fptr,"\n\nHere is the collection of books: \n");
    for(ctr=0;ctr<3;ctr++){

        fprintf(fptr,"#%d: %s by %s",(ctr+1),books[ctr].title,
        books[ctr].author);
        fprintf(fptr, "\nIt is %d pages and cost $%.2f",
            books[ctr].pages, books[ctr].price);
        fprintf(fptr, "\n\n");
    }
    fclose(fptr);

    return 0;
}