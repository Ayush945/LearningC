#include <stdio.h>
float compNet(float atomWeight, float factor);



int main(){

    float atomWeight, factor,netWeight;
    puts("What is the atomic weight? ");
    scanf(" %f", &atomWeight);
    puts("What is the factor? ");
    scanf(" %f", &factor);
    netWeight =compNet(atomWeight,factor);
    printf("The net weight is %.4f.\n",netWeight);
    return 0;
}

float compNet(float atomWeight, float factor){
    float netWeight;
    netWeight=(atomWeight-factor)*.8;
    return netWeight;
}
