#include <stdio.h>
#include <string.h>

//global
char *subject[5] = {"Maths", "English", "Science", "Social Studies", "Hindi"};
// structure
struct Student
{
    int roll;
    char name[50];
    int marks[5];
    int total;
    float avg;
    char grade;
};

// calculations
char calculateGrade(float avg)
{
    if (avg >= 90)
        return 'O';
    else if (avg >= 75)
        return 'A';
    else if (avg >= 60)
        return 'B';
    else if (avg >= 45)
        return 'C';
    else if (avg >= 35)
        return 'D';
    else
        return 'F';
}

// adding function, writing struct to binary file studnets.dat
void addStudent()
{
    struct Student s;
    s.total = 0;

    printf("Roll No: ");
    scanf("%d", &s.roll);
    
    // Clear input buffer after scanf
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
 
    printf("Name: ");
    fgets(s.name, sizeof(s.name), stdin);
    // Remove newline if present
    s.name[strcspn(s.name, "\n")] = 0;

    printf("Enter marks for 5 subjects: ");
    for (int i = 0; i < 5; i++)
    {   
        printf("%s: ",subject[i]);
        scanf("%d", &s.marks[i]);
        s.total += s.marks[i];
    }

    s.avg = s.total / 5.0;
    s.grade = calculateGrade(s.avg);

    FILE *f = fopen("students.dat", "ab"); // append binary
    // fwrite(pointer_to_data, size_of_each_item, number_of_items, file_pointer)
    fwrite(&s, sizeof(s), 1, f);
    fclose(f);

    printf("Student record added successfully!\n");
}

void generateReport(int roll)
{
    struct Student s;
    FILE *f = fopen("students.dat", "rb");
    if (!f)
    {
        printf("No student data found!\n");
        return;
    }
    int found = 0;

    while (fread(&s, sizeof(s), 1, f))
    {
        if (s.roll == roll) // searching for the specific student
        {
            printf("\n===== Report Card =====\n");
            printf("Roll No: %d\n", s.roll);
            printf("Name   : %s\n", s.name);
            printf("Marks  : ");
            for (int i = 0; i < 5; i++)
            {
                printf("%s: %d/100\n", subject[i], s.marks[i]);
            }
            printf("\nTotal  : %d\n", s.total);
            printf("Average: %.2f\n", s.avg);
            printf("Grade  : %c\n", s.grade);
            printf("=======================\n");
            found = 1;
            break;
        }
    }
    fclose(f); // closing file

    if (!found)
        printf("No student found with Roll No %d\n", roll);
}
