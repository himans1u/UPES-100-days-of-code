
#include <stdio.h>
#include <string.h>
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

// Function to search for a student by SAP ID
void searchStudent()
{
    char searchID[20];
    int found = 0;

    printf("\nEnter SAP ID to search: ");
    scanf("%19s", searchID);

    for (int i = 0; i < studentCount; i++)
    {
        if (strcmp(students[i].sapID, searchID) == 0)
        {
            printf("\nStudent Found!\n");
            printf("SAP ID: %s\n", students[i].sapID);
            printf("Roll Number: %s\n", students[i].rollNo);
            printf("Name: %s\n", students[i].name);
            printf("Phone: %s\n", students[i].phone);
            printf("Email: %s\n", students[i].email);
            printf("Year: %d\n", students[i].year);
            printf("Semester: %d\n", students[i].semester);

            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("\nStudent not found!\n");
    }
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
printf("2. Search Student\n");
printf("3. Exit\n");
printf("Enter your choice: ");

int choice;
scanf("%d", &choice);

if (choice == 1)
{
    addStudent();
}
else if (choice == 2)
{
    searchStudent();
}
else
{
    printf("Goodbye!\n");
}

    return 0;
}
