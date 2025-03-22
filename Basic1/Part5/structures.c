#include <stdio.h>


struct invStruct{
    char manuf[25]; //Manufacture name
    char model[15]; //Model code
    int diskSpace; // Disk size in Gigabytes
    int memSpace; // Memory Space in Gigabytes
    int ports; // The number of USB ports on the system
    int quantity; // Number in inventory
    float cost; // Cost of computer
    float price; // Retail price of computer
};

int main(){

    struct invStruct *items1,*items2,*items3;
    items1=(struct invStruct *)malloc(sizeof(invStruct));
    items2=(struct invStruct *)malloc(sizeof(invStruct));
    items3=(struct invStruct *)malloc(sizeof(invStruct));
    return 0;
}