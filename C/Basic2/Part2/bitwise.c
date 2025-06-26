#include <stdio.h>
#include <ctype.h>

int main(){

    int length;

    
    printf("Enter the length of string: ");
    scanf("%d",&length);

    char firstString[length+1];
    char secondString[length+1];
    char resultString[length+1];
    
    printf("\nEnter the first string of %d length (only 1s and 0s) : ",length);
    scanf("%s",firstString);

    printf("\nEnter the second string of %d length (only 1s and 0s) : ",length);
    scanf("%s",secondString);

    //bitwise OR
    for(int i=0;i<length;i++){
        if(firstString[i]=='0'&& secondString[i]=='0'){
            resultString[i]='0';
        }
        else{
            resultString[i]='1';
        }
    }

    resultString[length]='\0';
    printf("\nThe resulting string is : %s\n",resultString);
       

    //bitwise XOR
    for(int i=0;i<length;i++){
        if(firstString[i]=='1'&& secondString[i]=='1'||firstString[i]=='0'&& secondString[i]=='0' ){
            resultString[i]='0';
        }
        else{
            resultString[i]='1';
        }
    }
    resultString[length]='\0';
    printf("\nThe resulting string is : %s\n",resultString);
    
    //bitwise AND
    for(int i=0;i<length;i++){
        if(firstString[i]=='1'&& secondString[i]=='1'){
            resultString[i]='1';
        }
        else{
            resultString[i]='0';
        }
    }
    resultString[length]='\0';
    printf("\nThe resulting string is : %s\n",resultString);

    return 0;
}