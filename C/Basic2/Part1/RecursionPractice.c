#include <stdio.h>
#include <ctype.h>
int Recursion(int num){
    if(num==0){
        return 1;
    }
    return num*Recursion(num-1);
}

int PermutationResult(){
    int totalNumber,place,totalValue;
    printf("Enter the total number of people: ");
    scanf("%d",&totalNumber);
    printf("Enter the guest you want: ");
    scanf("%d",&place);
    totalValue=Recursion(totalNumber)/Recursion(totalNumber-place);
    return totalValue;

}


int CombinationResult(){
    int totalNumber,place,totalValue;
    printf("Enter the total number of people: ");
    scanf("%d",&totalNumber);
    printf("Enter the guest you want: ");
    scanf("%d",&place);
    totalValue=Recursion(totalNumber)/((Recursion(place))*Recursion(totalNumber-place));
    return totalValue;
}

int main(){

    char choice;

    printf("Do you want to find permutation or combination: (c or p)");
    scanf("%c",&choice);
    printf("\n");
    if(tolower(choice)=='p'){
        int permutation=PermutationResult();
        printf("The Permutation value is : %d ",permutation);
        return permutation;
    }
    else if(tolower(choice)=='c'){
        int combination=CombinationResult();
        printf("The Combination value is : %d ",combination);
        return combination;
    }
    else{
        printf("Only permutation or combination allowed.");
    }
    return 0;
}