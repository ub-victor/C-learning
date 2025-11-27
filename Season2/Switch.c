#include <stdio.h>

int main() {
    int slice;

    do {
        printf("Please choose a slice of pizza (1-4), or press 0 to exit:\n");
        scanf("%d", &slice);

        switch (slice) {
            case 1:
                printf("You chose the first slice.\n");
                break;
            case 2:
                printf("You chose the second slice.\n");
                break;
            case 3:
                printf("You chose the third slice.\n");
                break;
            case 4:
                printf("You chose the fourth slice.\n");
                break;
            case 0:
                printf("Exiting program... Goodbye!\n");
                break;
            default:
                printf("Bad choice! You must select 1–4 or 0 to exit.\n");
                break;
        }

    } while (slice != 0);

    return 0;
}

