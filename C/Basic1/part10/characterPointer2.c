#include <stdio.h>

int main(){
     // String gets stored in the space allocated for array (stack of array 20)
    char C[20]="Hello";
    
    
    // String gets stored as compile time constant. (Text segment of application memeory)
    //Pointer doesn't allow modification
    // ch[0]='A' - Invalid
    char *ch ="Hello"; C[0]='A';
    for(int i=0; i<5;i++){
        //printf("\nHello");
        //printf("%s",*(ch+i));
        printf("%c",*(C+i));
        
    }
    return 0;
}