#include <stdio.h>
#include <string.h>

int main(){

    char school[10]="MSJameswer"; //shows answer, but for \0 the adjacent memory may be used.
    strcpy(school,"Nicewewqer"); //over the limit, doesnt show q
    char firstInitial,middleInitial;
    int number_of_pencils;
    int number_of_notebooks;
    float pencils=0.23;
    float notebooks=2.89;
    float lunchbox=4.99;

    //The information of the first child
    firstInitial='J';
    middleInitial='R';

    number_of_pencils=7;
    number_of_notebooks=4;

    printf("%c%c needs %d pencils, %d notebooks, and 1 lunchbox\n", firstInitial,middleInitial,number_of_pencils,number_of_notebooks);
    printf("The total cost is $%.2f\n\n",number_of_pencils*pencils+number_of_notebooks*notebooks+lunchbox);

    //The information for the second child
    firstInitial = 'A';
    middleInitial = 'J';
    number_of_pencils = 10;
    number_of_notebooks = 3;
    printf("%c%c needs %d pencils, %d notebooks, and 1 lunchbox\n",
           firstInitial, middleInitial,number_of_pencils, 
           number_of_notebooks);
    printf("The total cost is $%.2f\n\n", number_of_pencils*pencils 
    + number_of_notebooks*notebooks + lunchbox);
    //The information for the third child
    firstInitial = 'M';
    middleInitial = 'T';
    number_of_pencils = 9;
    number_of_notebooks = 2;
    printf("%c%c needs %d pencils, %d notebooks, and 1 lunchbox\n",
           firstInitial, middleInitial,number_of_pencils, 
           number_of_notebooks);
    printf("The total cost is $%.2f\n",
        number_of_pencils*pencils + number_of_notebooks*notebooks + 
        lunchbox);
    printf("\n\n%s",school);
    return 0;
}