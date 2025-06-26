#include <stdio.h>

int StudentId(){
    int studentId;
    printf("Enter studentId: ");
    scanf("%d",&studentId);
    return studentId;
}
int main(){

    printf("Hello, I am back, now will be start of next season of C");
    printf("\nStudying DS Now\n");
    printf("Student ID : %d ", StudentId());
}