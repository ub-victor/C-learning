/* security_access_control.c
   Security Access Control using bitwise flags

   Permissions (using bit masks):
     READ    = 1  (binary 0001)
     WRITE   = 2  (binary 0010)
     EXECUTE = 4  (binary 0100)
     ADMIN   = 8  (binary 1000)

   - Use bitwise & to check permissions
   - Deny access if none are active
   - Display all active permissions
   - Add a 'Super Admin' toggle using XOR that flips all permissions
*/

#include <stdio.h>

int main(void) {
    int permissions = 0;   // initially no permissions
    int choice;

    // Bitmask constants
    const int READ = 1;       // 0001
    const int WRITE = 2;      // 0010
    const int EXECUTE = 4;    // 0100
    const int ADMIN = 8;      // 1000

    printf("=== Security Access Control ===\n\n");
    printf("Initial permissions (none): 0\n");

    // Menu to set some permissions
    // In a real system, you'd read from some existing data or input
    printf("Enter permission flags to set (sum of):\n");
    printf(" 1 = READ, 2 = WRITE, 4 = EXECUTE, 8 = ADMIN\n");
    printf("Example: 5 means READ + EXECUTE\n");
    printf("Your input (0 to skip): ");
    scanf("%d", &permissions);

    // Check if at least one permission is active
    if (permissions == 0) {
        printf("\nNo permissions active -> Access Denied.\n");
    } else {
        printf("\nActive Permissions:\n");
        if (permissions & READ) {
            printf("- READ\n");
        }
        if (permissions & WRITE) {
            printf("- WRITE\n");
        }
        if (permissions & EXECUTE) {
            printf("- EXECUTE\n");
        }
        if (permissions & ADMIN) {
            printf("- ADMIN\n");
        }
    }

    // Demonstrate 'Super Admin' toggle using XOR
    // XOR with 15 (binary 1111) toggles the bits for READ, WRITE, EXECUTE, ADMIN
    printf("\nEnter 1 to toggle Super Admin, 0 to skip: ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Toggle with XOR
        permissions ^= (READ | WRITE | EXECUTE | ADMIN);
        printf("\nAll permissions toggled via Super Admin.\n");

        if (permissions == 0) {
            printf("No permissions active -> Access Denied.\n");
        } else {
            printf("Active Permissions after toggle:\n");
            if (permissions & READ)    printf("- READ\n");
            if (permissions & WRITE)   printf("- WRITE\n");
            if (permissions & EXECUTE) printf("- EXECUTE\n");
            if (permissions & ADMIN)   printf("- ADMIN\n");
        }
    }

    return 0;
}

