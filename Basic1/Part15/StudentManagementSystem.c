#include <stdio.h>
#include <stdlib.h>
struct Student{
    int id;
    char name[100];
    int age;
};

struct Course{
    int id;
    char name[100];
    int credit_hours;
};

struct Enrollment{
    int student_id;
    int course_id;
    float grade;
};


struct Student* AddStudent(int n){

    
    struct Student* students=(struct Student*)malloc(n*sizeof(struct Student));
    
    if(students==NULL){
        printf("\nMemory allocation failed!\n");
        return NULL;
    }
    
    printf("\n");
    for(int i=0; i<n;i++){
        printf("\nEnter the detail for student %d",i+1);
        students[i].id=i+1;
        printf("\nEnter the student's name: ");
        scanf("%s",students[i].name);
        printf("\nEnter the student's age: ");
        scanf("%d",&students[i].age);
    }
    return students;
}

void DisplayStudent(struct Student* students,int n){

    for(int i=0; i<n;i++){
        printf("\nDetail of student %d is:\n Name = %s, Age = %d",students[i].id,students[i].name,students[i].age);
    }
}

int main(){

    int numberOf;
    printf("\nEnter the number of students: ");
    scanf("%d",&numberOf);
    
    struct Student* students=AddStudent(numberOf);
    DisplayStudent(students,numberOf);
    
    free(students);
    //Add Student
    //View All Students
    //Exit
    return 0;
}