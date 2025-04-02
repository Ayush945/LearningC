#include <stdio.h>

int Func(int A[][3] ){ // Argument: 2-D array of intergers 

}

int Funcn(int (*A)[2][2]){ // Argument: 3-D array of intergers

}

int main(){

    int c[3][2][2]={ 
                        {{2,5},{7,9}},
                        {{3,4},{6,1}},
                        {{0,8},{11,13}} 
                    };
    
    printf("%d %d %d %d", c, *c, c[0], &c[0][0]);
    
    printf("\n%d\n", *(c[0][0]+1));
    
    int A ={1,2};
    Func(A);// A returns int* 

    int B[2][3]={{2,4,6},{5,7,8}}; // B returns int (*)[3]
    
    return 0;
}