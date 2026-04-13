#include <stdio.h>
#include <string.h>

// 1. Define all structures at the top
struct member {
    char mname[20], fname[20], address[50], delname[20];
};

int main() {
    struct member m[10];      // Added 'struct' keyword
    int choice;
    int i = 0;                // Used as a loop counter
    int member_count = 0;     // Tracks how many members actually exist

    do {
        printf("\n\n--- Welcome to Dev Dairy ---");
        printf("\n1. Add Member");
        printf("\n2. Delete Member (Placeholder)");
        printf("\n3. Update Member (Placeholder)");
        printf("\n4. Show All Members");
        printf("\n0. Exit");
        printf("\n\nEnter your choice: ");
        
        // Added a space before %d to help clear the buffer
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (member_count < 10) {
                    printf("\nAdding member #%d", member_count + 1);
                    printf("\nMember name: ");
                    scanf("%s", m[member_count].mname);
                    printf("Father name: ");
                    scanf("%s", m[member_count].fname);
                    printf("Address: ");
                    scanf("%s", m[member_count].address);
                    
                    printf("\nMember %s added successfully!\n", m[member_count].mname);
                    member_count++; // Move to the next slot for the next member
                } else {
                    printf("\nError: Member list is full!");
                }
                break;
            case 4:
                if (member_count == 0) {
                    printf("\nNo members found.");
                } else {
                    printf("\n--- All Members ---");
                    for(i = 0; i < member_count; i++) {
                        printf("\n[%d] Name: %s | Father: %s | Address: %s", 
                                i+1, m[i].mname, m[i].fname, m[i].address);
                    }
                }
                break;

            case 0:
                printf("\nExiting program...");
                break;

            default:
                printf("\n");
        }
    } while (choice != 0);

    return 0;
}