#include <stdio.h>

int main(){

    int c[3][2][2]={ 
        {{2,5},{7,9}},
        {{3,4},{6,1}},
        {{0,8},{11,13}} 
    };
    /*-----------------------------------------------------------------*/
    printf("\nAddress of whole array = %p\n",c);

    /*-----------------------------------------------------------------*/
    printf("\nAddress of 1st 2-D array = %p\n",*c);

    printf("\nAddress of 1st 1-D array = %p\n",**c);
    printf("\n 1st Element of 1st 1-D array = %d\n",***c);
    printf("\n 2nd Element of 1st 1-D array = %d\n",*(*(*c)+1));

    printf("\nAddress of 2nd 1-D array = %p\n",*(*c+1));
    printf("\n 1st Element of 1st 1-D array = %d\n",*(*(*c+1)+0));
    printf("\n 2nd Element of 1st 1-D array = %d\n",(*(*(*c+1))+1));


    /*-----------------------------------------------------------------*/
    printf("\nAddress of 2nd 2-D array = %p\n",*(c+1));

    printf("\nAddress of 1st 1-D array = %p\n",*(*(c+1)));
    printf("\n 1st Element of 1st 1-D array = %d\n",*(*(*(c+1))+0));
    printf("\n 2nd Element of 2nd 1-D array = %d\n",*(*(*(c+1))+1));

    printf("\nAddress of 2nd 1-D array = %p\n",*(*(*(c+1)+1)));
    printf("\n 1st Element of 1st 1-D array = %d\n",*(*(*(c+1)+1)+0));
    printf("\n 2nd Element of 2nd 1-D array = %d\n",*(*(*(c+1)+1)+1));
    

    /*-----------------------------------------------------------------*/
    printf("\nAddress of 3rd 2-D array = %p\n",*c);
    printf("\nAddress of 2nd 2-D array = %p\n",*(c+2));
    printf("\nAddress of 1st 1-D array = %p\n",*(*(c+2)));
    printf("\nElement of 1st 1-D array = %d\n",*(*(*(c+2))+0));
    printf("\nElement of 1st 1-D array = %d\n",*(*(*(c+2))+1));

    printf("\nAddress of 2nd 1-D array = %p\n",*(*(*(c+2)+1)));
    printf("\nAddress of 1st 1-D array = %d\n",*(*(*(c+2)+1)+0));
    printf("\nAddress of 1st 1-D array = %d\n",*(*(*(c+2)+1)+1));

    
    return 0;
}