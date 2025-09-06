// Calculate a Student's Average and Grade
//Adding a report card generatiion function
#include <stdio.h>
//Structure for student details
struct Student{
    char name[50];
    char standard[20];
    int age;
    char gender[10];
    char city[30];
    char state[30];
    char phone[15];
};

void PrintStudent(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Standard: %s\n", s.standard);
    printf("Age: %d\n", s.age);
    printf("Gender: %s\n", s.gender);
    printf("City: %s\n", s.city);
    printf("State: %s\n", s.state);
    printf("Phone: %s\n", s.phone);
}

char Grade(int avg) {
    if (avg >= 90) {
        return 'O';
    } else if (avg >= 75) {
        return 'A';
    } else if (avg >= 65) {
        return 'B';
    } else if (avg >= 55) {
        return 'C';
    } else if (avg >= 35) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    //filling student details
    struct Student s;
    printf("Enter the name of the student: ");
    scanf("%s", s.name);
    printf("Enter the standard of the student: ");
    scanf("%s", s.standard);
    printf("Enter the age of the student: ");
    scanf("%d", &s.age);
    printf("Enter the gender of the student: ");
    scanf("%s", s.gender);
    printf("Enter the city of the student: ");
    scanf("%s", s.city);
    printf("Enter the state of the student: ");
    scanf("%s", s.state);
    printf("Enter the phone number of the student: ");
    scanf("%s", s.phone);


    //filling marks
    printf("Enter the marks of 5 subjects out of 100: \n");
    int sum = 0;
    char* subject[5] = {"Maths", "English", "Science", "Social Studies", "Hindi"};
    int marks[5]; // Array to store individual subject marks
    
    for(int i=0;i<5;i++){
        printf("Enter the marks of %s: ", subject[i]);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    printf("Total marks: %d\n", sum);   
    int avg = sum / 5;
    printf("Average marks: %d\n", avg);
    char grade = Grade(avg);
    printf("Grade overall: %c\n", grade);
    //Now printing report card
    printf("\n==================== REPORT CARD ====================\n");
    PrintStudent(s); //Student details
    for(int i = 0; i < 5; i++) {
        printf("%s: %d/100\n", subject[i], marks[i]);
    }
    printf("----------------------------------------------------\n");
    printf("Total Marks     : %3d/500\n", sum);
    printf("Average Marks   : %3d%%\n", avg);
    printf("Grade           : %3c\n", grade);
    printf("====================================================\n");

    return 0;
}
