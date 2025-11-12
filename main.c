#include <stdio.h>
#include <string.h>

struct Stu {
    int id;
    char name[50]; 
};

struct Stu students[100];
int count = 0;

void newStudent() {
    printf("Enter student id: ");
    scanf("%d", &students[count].id);

    printf("Enter student name: ");
    scanf(" %[^\n]", students[count].name);

    count++;
    printf("\nStudent Added Successfully ✅\n");
}

void enquiry() {
    int id;
    printf("Enter student id to search: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++) {
        if (students[i].id == id) {
            printf("\nStudent Found ✅\n");
            printf("ID   : %d\n", students[i].id);
            printf("Name : %s\n", students[i].name);
            return;
        }
    }

    printf("\nStudent Not Found ❌\n");
}

void report() {
    printf("\n---- Student List ----\n");
    for(int i = 0; i < count; i++) {
        printf("ID: %d, Name: %s\n", students[i].id, students[i].name);
    }
}

int main() {
    int choice;

    while(1) {
        printf("\n\n----- STUDENT MANAGEMENT SYSTEM -----\n");
        printf("1. New Student\n");
        printf("2. Enquiry\n");
        printf("3. Report\n");
        printf("4. Exit\n");
        printf("Enter your option: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: newStudent(); break;
            case 2: enquiry(); break;
            case 3: report(); break;
            case 4: return 0;
            default: printf("Invalid Option\n");
        }
    }
}
