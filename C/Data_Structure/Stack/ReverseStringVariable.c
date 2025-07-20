#include <stdio.h>
#include <string.h>


//Space complexity, 0(1)
void Reverse(char C[],int n){
    int i=0,j=n-1;
    while(i<j){
        char temp;
        temp=C[i];
        C[i]=C[j];
        C[j]=temp;
        i++;
        j--;
    }
}


int main(){
    char C[51];
    printf("Enter a string: ");
    fgets(C,sizeof(C) ,stdin);
    Reverse(C,strlen(C));
    printf("output = %s",C);
    return 0;
}