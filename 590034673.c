
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
// Function to add a new student
void addStudent()
{
    if (studentCount >= MAX_STUDENTS)
    {
        printf("\nStudent database is full!\n");
        return;
    }

    printf("\nEnter SAP ID: ");
    scanf("%19s", students[studentCount].sapID);

    printf("Enter Roll Number: ");
    scanf("%19s", students[studentCount].rollNo);

    printf("Enter Name (without spaces): ");
    scanf("%49s", students[studentCount].name);

    printf("Enter Phone Number: ");
    scanf("%19s", students[studentCount].phone);

    printf("Enter Email: ");
    scanf("%59s", students[studentCount].email);

    printf("Enter Year: ");
    scanf("%d", &students[studentCount].year);

    printf("Enter Semester: ");
    scanf("%d", &students[studentCount].semester);

    printf("\nEnter SGPA for 8 semesters:\n");

    for (int i = 0; i < SEMESTERS; i++)
    {
        printf("Semester %d SGPA: ", i + 1);
        scanf("%f", &students[studentCount].sgpa[i]);
    }

    studentCount++;

    printf("\nStudent record added successfully!\n");
}
int main()
{
    printf("====================================\n");
    printf(" STUDENT RECORD MANAGEMENT SYSTEM\n");
    printf("====================================\n");

    printf("\nStudent database initialized!\n");
    printf("Maximum students: %d\n", MAX_STUDENTS);
    printf("SGPA semesters: %d\n", SEMESTERS);
    printf("\n1. Add Student\n");
printf("2. Exit\n");
printf("Enter your choice: ");

int choice;
scanf("%d", &choice);

if (choice == 1)
{
    addStudent();
}
else
{
    printf("Goodbye!\n");
}

    return 0;
}
