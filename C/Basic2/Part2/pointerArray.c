#include <stdio.h>



int main(){~
    char name[20];
    char* pName=name; // Pointer to beginning of the array
    char ch;

    printf("Enter your name: ");
    
    while((ch=getchar())!='\n' && ch!=EOF){
        *pName=ch;
        pName++;
    }
    *pName='\0';
    printf("\nThe name is: %s\n",name);
    return 0;
}