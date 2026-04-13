#include <stdio.h>

int main()
{
    char mname[10][50], fname[10][50], address[10][100];
    int choice, code = 1010;
    int i = 0, index;
    float fat[10] = {0}, amount[10] = {0}, mq[10] = {0};

    do
    {
        printf("\n\n===== WELCOME TO DEV DAIRY =====\n");
        printf("1. Add Member\n");
        printf("2. Delete Member\n");
        printf("3. Update Member Data\n");
        printf("4. Create Milk Entry\n");
        printf("5. Show All Entries\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            if (i >= 10)
            {
                printf("Member limit reached!\n");
                break;
            }

            printf("Member name: ");
            scanf("%s", mname[i]);

            printf("Father name: ");
            scanf("%s", fname[i]);

            printf("Address: ");
            scanf("%s", address[i]);

            code++;
            printf("Member code: %d\n", code);
            i++;
            break;

        case 4:
            if (i == 0)
            {
                printf("No members available!\n");
                break;
            }

            printf("Enter member index (0 to %d): ", i - 1);
            scanf("%d", &index);

            if (index >= 0 && index < i)
            {
                printf("Milk quantity (liters): ");
                scanf("%f", &mq[index]);

                printf("Fat: ");
                scanf("%f", &fat[index]);

                amount[index] = fat[index] * 9 * mq[index];

                printf("Amount: %.2f rupees\n", amount[index]);
            }
            else
            {
                printf("Invalid member index!\n");
            }
            break;

        case 5:
            if (i == 0)
            {
                printf("No entries available!\n");
                break;
            }

            printf("\n----- ALL ENTRIES -----\n");
            for (int j = 0; j < i; j++)
            {
                printf("\nMember: %s\n", mname[j]);
                printf("Father: %s\n", fname[j]);
                printf("Address: %s\n", address[j]);
                printf("Milk: %.2f\n", mq[j]);
                printf("Fat: %.2f\n", fat[j]);
                printf("Amount: %.2f\n", amount[j]);
            }
            break;

        case 0:
            printf("Thank you for using Dev Dairy!\n");
            break;

        default:
            printf("Invalid choice!\n");
        }

    } while (choice != 0);

    return 0;
}
