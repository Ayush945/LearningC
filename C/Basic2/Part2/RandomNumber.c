#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    printf("10 Random Numbers between 1 and 100:\n");

    for(int i = 0; i < 10; i++) {
        int randomNumber = (rand() % 100) + 1;
        printf("%d\n", randomNumber);
    }

    return 0;
}
