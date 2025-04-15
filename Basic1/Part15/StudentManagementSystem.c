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
        printf("\nDetail of student %d is:\nName = %s , Age = %d",students[i].id,students[i].name,students[i].age);
    }
}

struct Course* AddCourse(int n){

    struct Course* courses= (struct Course*)malloc(n*(sizeof(struct Course)));
    for(int i=0; i<n;i++){

        printf("\nEnter the detail for course %d",i+1);
        courses[i].id=i+1;
        printf("\nEnter the course's name : ");
        scanf("%s",courses[i].name);
        printf("\nEnter the course's credit hour: ");
        scanf("%d",&courses[i].credit_hours);
    }
    return courses;
}

void DisplayCourse(struct Course* courses, int n ){
    
    for(int i=0;i<n;i++){
        printf("\nDetail of course %d is:\nName = %s , credit hour = %d",courses[i].id,courses[i].name,courses[i].credit_hours);
    }
}

int main(){
    struct Student* students = NULL;
    struct Course* courses = NULL;
    int numberOfStudents = 0, numberOfCourses = 0;
    int mainChoice;
    
   do{

        printf("\n\n\t\t****Welcome to University Dashboard****\n\n");
        printf("For Student Service: 1\n");
        printf("For Course: 2 \n");
        printf("For Enrollment: 3 \n");
        printf("To exit: 4\n");
        printf("\nEnter your Choice: ");
        scanf("%d",&mainChoice);

    
        switch(mainChoice){
            case 1: {
                int studentChoice;
                do {
                    printf("\n\n-- Student Services --\n");
                    printf("1. Add Student\n");
                    printf("2. Display Students\n");
                    printf("3. Go Back\n");
                    printf("Enter your choice: ");
                    scanf("%d", &studentChoice);

                    switch (studentChoice) {
                        case 1:
                            printf("Enter number of students to add: ");
                            scanf("%d", &numberOfStudents);
                            if (students) free(students); // avoid memory leak
                            students = AddStudent(numberOfStudents);
                            break;
                        case 2:
                            if (students)
                                DisplayStudent(students, numberOfStudents);
                            else
                                printf("No students to display.\n");
                            break;
                        case 3:
                            break; // Go back
                        default:
                            printf("Invalid choice.\n");
                    }
                } while (studentChoice != 3);
                break;
            }
            case 2: {
                int courseChoice;
                do {
                    printf("\n\n-- Course Management --\n");
                    printf("1. Add Course\n");
                    printf("2. Display Courses\n");
                    printf("3. Go Back\n");
                    printf("Enter your choice: ");
                    scanf("%d", &courseChoice);

                    switch (courseChoice) {
                        case 1:
                            printf("Enter number of courses to add: ");
                            scanf("%d", &numberOfCourses);
                            if (courses) free(courses); // avoid memory leak
                            courses = AddCourse(numberOfCourses);
                            break;
                        case 2:
                            if (courses)
                                DisplayCourse(courses, numberOfCourses);
                            else
                                printf("No courses to display.\n");
                            break;
                        case 3:
                            break; // Go back
                        default:
                            printf("Invalid choice.\n");
                    }
                } while (courseChoice != 3);
                break;
            }
            case 3:
                printf("Enrollment functionality not implemented yet.\n");
                break;

            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");

        }
    }while (mainChoice!=4);
    
    // int numberOfStudents,numberOfCourses;


    // printf("\nEnter the number of students: ");
    // scanf("%d",&numberOfStudents);
    
    // struct Student* students=AddStudent(numberOfStudents);
    // DisplayStudent(students,numberOfStudents);

    // printf("\n\n");
    // printf("\nEnter the number of Courses: ");
    // scanf("%d",&numberOfCourses);

    // struct Course* courses=AddCourse(numberOfCourses);
    // DisplayCourse(courses,numberOfCourses);
    
    
    free(students);
    free(courses);
    
 
    
    //Add Student
    //View All Students
    //Exit
    return 0;
}