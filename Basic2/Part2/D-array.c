#include <stdio.h>

int main(){

    int array [2][2]  ={{9,14},{24,15}};

    printf("\nThe first element:  %d",*(*(array)));
    printf("\nThe second element: %d",*(*(array)+1));
    printf("\nThe third element:  %d",*(*(array+1)));
    printf("\nThe fourth element: %d",*(*(array+1)+1));

    // Now lets study others

    return 0;
}