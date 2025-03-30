#include <stdio.h>
#include <string.h>


void print(char* ch)
{
    int i=0;

    // while (*(ch+i)!='\0'){ // ch[i] and *(ch+1) is same
    //     printf("%c",ch[i]);
    //     i++;
    // }
    while (*ch!='\0'){
        printf("\n%p\n",ch);
        printf("%c",*ch);
        ch++;
    }
    printf("\n");

}

int main(){

    char ch[20]="Hello";
    print(ch);
    char C[20]="JOHN";
    printf("Size in bytes = %d\n",sizeof(C));
    // C[0]='J';
    // C[1]='O';
    // C[2]='H';
    // C[3]='N';
    // C[4]='\0';

    // int len =strlen(C);
    // printf("%s",C);
    // printf("\nLength = %d\n",len);

    return 0;
}