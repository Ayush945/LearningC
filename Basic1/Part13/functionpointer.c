#include <stdio.h>

int Add(int a, int b){

    return a+b;
}

void PrintHello(char* name){
    printf("Hello %s\n",name);
}

//int* Func(int,int); // Declearing a function that would return int*
//int (*Func) (int,int); // Declearing function pointer

int main(){

    // pointer to function that should take
    //(int, int) as argument/ parameter and return int

    int c;
    int (*p) (int,int); // Function pointer declarartion
    //p=&Add; //----- p=Add ....its the same
    //c=(*p)(2,3); // p(2,3)......its the same
                //dereferencing and executing the function
    p=Add;
    c=p(2,3);
    printf("%d\n",c);

    void (*ptr)(char*);
    ptr=PrintHello;
    ptr("Ayush");
    return 0;
}