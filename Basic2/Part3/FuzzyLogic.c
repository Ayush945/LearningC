#include <stdio.h>
int main(){

    //Truth value of Fred and John
    float Fred=0.8; //Fred is happy ... Fred is happy most of the time
    float John=0.4; //John is happy ... John is happy slightly less than half the time

    // Find the truth value of "Fred is not happy" and "John is not happy"

    printf("\nFred is not happy's Truth value: %.2f",1-Fred);
    printf("\nJohn is not happy's Truth value: %.2f",1-John);

    //Finding conjunction and disjunction
    printf("\nDisjunction: %.2f",(Fred>John)?Fred:John);
    printf("\nConjunction: %.2f",(Fred>John)?John:Fred);

    return 0;
}