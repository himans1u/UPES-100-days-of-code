
#include <stdio.h>

#define MAX_STUDENTS 100
#define SEMESTERS 8

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

struct Student students[MAX_STUDENTS];

int studentCount = 0;

int main()
{
    int choice;

    do
    {
        printf("\n===== STUDENT RECORD MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Search Student\n");
        printf("3. Calculate CGPA\n");
        printf("4. Year-wise Average CGPA\n");
        printf("5. Display All Students\n");
        printf("6. Delete Student\n");
        printf("7. Sort by SAP ID\n");
        printf("8. Sort by Name\n");
        printf("0. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Add Student feature coming soon.\n");
                break;

            case 2:
                printf("Search Student feature coming soon.\n");
                break;

            case 3:
                printf("CGPA feature coming soon.\n");
                break;

            case 4:
                printf("Year-wise Average feature coming soon.\n");
                break;

            case 5:
                printf("Display feature coming soon.\n");
                break;

            case 6:
                printf("Delete feature coming soon.\n");
                break;

            case 7:
                printf("Sort by SAP ID coming soon.\n");
                break;

            case 8:
                printf("Sort by Name coming soon.\n");
                break;

            case 0:
                printf("Thank you!\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 0);

    return 0;
}
