 #include <stdio.h>

 int main(){

    int vals[5]={10,20,30,40,50};
    
    printf("The first value is %d.\n",*vals);
    printf("The first value is %d.\n",*(vals+1));
    printf("The first value is %d.\n",*(vals+2));
    printf("The first value is %d.\n",*(vals+3));
    printf("The first value is %d.\n",*(vals+4));
    
    return 0;
 }