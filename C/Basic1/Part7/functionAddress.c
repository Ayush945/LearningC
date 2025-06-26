#include <stdio.h>

void half(int *i) {
    *i = *i / 2; 
    printf("Your value halved is %d.\n", *i);
}

/********************************************** */

int main() {
    int i;
    printf("Please enter an integer... ");
    scanf("%d", &i);
    printf("The address is: %p\n ",&i);
    half(&i);

    printf("In main(), i is now %d.\n", i);
    return 0;
}
