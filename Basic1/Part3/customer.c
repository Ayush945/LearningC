#include <stdio.h>

int main(){

    int ctr;
    int idSearch;
    int found=0;

    int custID[6]={313,453,502,101,892,475};
    float custBal[6]={0.00,45.43,301.56,9.08,192.41,229.67};

    printf("\n\n*** Customer Balance Lookup ***\n");
    printf("What customer number do you need to check? ");
    scanf("%d",&idSearch);

    for(ctr=0;ctr<6;ctr++){
        if(idSearch==custID[ctr])
        {
            found=1;
            break;
        }
    }

    if(found){
        if(custBal[ctr]>100.00){
            printf("\n** That customer's balance is $%.2f.\n",custBal[ctr]);
            printf("No additional credit.\n");
        }
        else{
            printf("\n **The customer's credit is good!\n");
        }
    }
    else{
        printf("*** You must have typed an incorrect customer ID.");
        printf("\n ID %3d was not found in list.\n",idSearch);
    }

    return 0;
}