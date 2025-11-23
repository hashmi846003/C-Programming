#include <stdio.h>

int main() {
    int choice;

    printf("Welcome to our shop!!!\n");
    printf("Select the color you want (1-12):\n");
    printf("1. Red\n2. Blue\n3. Green\n4. Yellow\n5. Orange\n6. Purple\n");
    printf("7. Pink\n8. Black\n9. White\n10. Gray\n11. Brown\n12. Cyan\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You selected Red!\n");
            break;
        case 2:
            printf("You selected Blue!\n");
            break;
        case 3:
            printf("You selected Green!\n");
            break;
        case 4:
            printf("You selected Yellow!\n");
            break;
        case 5:
            printf("You selected Orange!\n");
            break;
        case 6:
            printf("You selected Purple!\n");
            break;
        case 7:
            printf("You selected Pink!\n");
            break;
        case 8:
            printf("You selected Black!\n");
            break;
        case 9:
            printf("You selected White!\n");
            break;
        case 10:
            printf("You selected Gray!\n");
            break;
        case 11:
            printf("You selected Brown!\n");
            break;
        case 12:
            printf("You selected Cyan!\n");
            break;
        default:
            printf("Invalid choice! Please select a number between 1 and 12.\n");
    }

    return 0;
}
