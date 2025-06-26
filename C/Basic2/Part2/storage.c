#include <stdio.h>
#define MAX_SIZE 100

int main(){
    FILE *file=fopen("D:\\Codes\\C\\C Projects\\Basic2\\Part2\\file.txt","r");
    if(file==NULL){
        printf("File cannot be opened\n");
        return 1;
    }
    printf("File opened successfully\n\n");
    int arr[MAX_SIZE];
    int count=0;
    int *ptr=arr;

    //Read numbers from file and store them in array 
    while(fscanf(file,"%d",ptr+count)!=EOF && count < MAX_SIZE ){
        count++;
    }

    for(int i=0;i<count;i++){
        printf("%d",*(ptr+i));
    }
    fclose(file);

    printf("\n\nFinding the average of the numbers: \n");
    int sum=0;
    printf("%d count",count);
    for(int i=0;i<count;i++){
        sum=sum+*(ptr+i);
    }
    printf("\nThe average is: %.2f", (float)sum/(count+1));

    return 0;
}