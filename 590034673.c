
#include <stdio.h>

#define MAX_STUDENTS 100
#define SEMESTERS 8

// Structure to store student information
struct Student
{
    char sapID[20];
    char rollNo[20];
    char name[50];
    char phone[20];
    char email[60];

    int year;
    int semester;

    float sgpa[SEMESTERS];
};

// Create storage for 100 students
struct Student students[MAX_STUDENTS];

// Count the number of students
int studentCount = 0;

int main()
{
    printf("====================================\n");
    printf(" STUDENT RECORD MANAGEMENT SYSTEM\n");
    printf("====================================\n");

    printf("\nStudent database initialized!\n");
    printf("Maximum students: %d\n", MAX_STUDENTS);
    printf("SGPA semesters: %d\n", SEMESTERS);

    return 0;
}
