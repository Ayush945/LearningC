#include <stdio.h>
#include <string.h>

int main(){

    char kid1[12];
    char kid2[]="Maddie";
    char kid3[7]="Andrew";

    char Hero1[]="Batman";
    char Hero2[34]="Spiderman";
    char Hero3[25];

    kid1[0]='K';
    kid1[1]='a';
    kid1[2]='t';
    kid1[3]='i';
    kid1[4]='e';
    kid1[5]='\0';

    strcpy(Hero3,"The Incredible Hulk");
    printf("%s\'s favorite hero is %s.\n", kid1, Hero1);
    printf("%s\'s favorite hero is %s.\n", kid2, Hero2);
    printf("%s\'s favorite hero is %s.\n", kid3, Hero3);
    return 0;
}