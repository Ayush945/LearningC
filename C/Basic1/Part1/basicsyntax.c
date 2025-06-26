/* Prints a message on the screen */
#include <stdio.h> 
int main()
{
    //int intType=2147483652; overflows
    int intType=21;
    int octal=053;
    int hexadecimal=0x53;
    printf("%d\n",octal);//shown in decimal
    printf("%d",hexadecimal);//shown in decimal

    printf("I am learning the %c programming language\n", 'C');
    printf("I have completed Chapter %d\n",2);
    printf("I am %.f percent ready to move on\n",99.4); //Round off
    printf("I am %.f percent ready to move on",99.8); //Round off

    // Escape sequence
    printf("\n\nColumn A\tColumn B\tColumn C");
    printf("\nMy Computer\'s Beep Sound Like This: \a!\n");
    printf("\"Letz\b\'s fix the typo and then show the backslash ");
    printf("character \\\" she said\n");
    printf("Size of int: %zu bytes\n",sizeof(intType));
    printf("Value of intType: %d\n",intType);
    printf("\\%c Escape Character\n",'b');
    return 0;

}


