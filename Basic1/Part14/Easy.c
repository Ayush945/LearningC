#include <stdio.h>

int main(){

    // Question 1 ---- 10
    
    //Question 2
    int x=10,y=20,temp;
    
    // Question 4
    int* pX=&x; 
    int* pY=&y;
    temp=*pX;
    *pX=*pY;
    *pY=temp;

    //Question 3
    printf("Address of X = %p",(void*)pX);

    /* Strings 
        Question --- 11,12,13
    */ 
    char name[]="Ayush";
    char container[6]="";

    int size = sizeof(name)/sizeof(char);
    printf("\nThe size is: %d\n",size);
    for(int i=0; i<size;i++){
        container[i]=name[i];
        
    }
    printf("\nTotal number =%d\n",size-1);
    
    for(int i=0; i<size;i++){
        printf("%c",container[i]);
    }
    printf("\n");
    for(int i=(size-2);i>=0;i--){
        printf("%c",container[i]);
    }


    return 0;
}