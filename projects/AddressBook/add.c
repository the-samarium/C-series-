#include <stdio.h>
// A small program to store and manage people’s contact details (name, phone, email, etc.).

struct Info
{
    int num;
    char* name;
    char*mail;
};

void PrintInfo(struct Info c) {
    printf("Number is: %d\n", c.num);
    printf("Name is: %f\n", c.name);
    printf("Mail is: %s\n", c.mail);
}

#include <stdio.h>

void Entry(int num, char *name, char *mail) {
    FILE *ptr = fopen("Address.txt", "a"); // open in append mode
    if (ptr == NULL) {
        printf("Error opening file!\n");
        return;
    }
    // Write entry
    fprintf(ptr, "ID: %d\nName: %s\nEmail: %s\n\n", num, name, mail);

    fclose(ptr); 
}

void ViewEntries() {
    FILE *ptr = fopen("Address.txt", "r"); //opening in read mode
    if (ptr == NULL) {
        printf("No address book found!\n");
        return;
    }

    char ch;
    printf("\n====== Address Book Contents ======\n\n");
    while ((ch = fgetc(ptr)) != EOF) {
        putchar(ch);
    }
    fclose(ptr);
    printf("\n==================================\n");
}


int main(){
    //creating a menu driven code to add entries and exit program
    int flag=0;
    int id=1;
    while(1){
       
       printf("\n====== Address Book ======\n");
        printf("1. Add Entry\n2. Exit\n3.Format");
        printf("Select operation to perform (1/2/3): ");

        scanf("%d", &flag);

        if (flag == 2) {
            printf("Exiting...\n");
            break;
        } 
        else if (flag == 1) {
            char name[50], mail[50]; //string arrays

            printf("Enter Name: ");
            scanf("%s", name);

            printf("Enter Email: ");
            scanf("%s", mail);

            Entry(id, name, mail);
            printf("Entry added successfully!\n");
            id++;
        } 
        else if(flag==3)
        {
           printf("Format the file?(1/0)\n");
           int s;
           scanf("%d",&s);
           if(s==1){
            FILE*ptr = fopen("Address.txt","w");
            fclose(ptr);
            //file truncated
            printf("\nAddress file empty!\n");
           }
        }
        
        else {
            printf("Invalid option, try again.\n");
        }
    }
    return 0;
}