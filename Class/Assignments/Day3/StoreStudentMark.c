#include <stdio.h>

int main() {
    int marks[2][3][3]; // [terms][students][subjects]
    int term, student, subject;

    // Input marks
    for (term = 0; term < 2; term++) {
        printf("\n--- Enter marks for Term %d ---\n", term + 1);
        for (student = 0; student < 3; student++) {
            printf("Student %d:\n", student + 1);
            for (subject = 0; subject < 3; subject++) {
                printf("  Subject %d: ", subject + 1);
                scanf("%d", &marks[term][student][subject]);
            }
        }
    }

    printf("\n===== AVERAGE MARKS =====\n");

    // Calculate and display averages
    for (student = 0; student < 3; student++) {
        float termTotal[2] = {0, 0};
        float overallTotal = 0;

        // For each term
        for (term = 0; term < 2; term++) {
            for (subject = 0; subject < 3; subject++) {
                termTotal[term] += marks[term][student][subject];
            }
            float termAverage = termTotal[term] / 3.0;
            overallTotal += termAverage;
            printf("Student %d - Term %d Average: %.2f\n", student + 1, term + 1, termAverage);
        }

        // Overall average across both terms
        float overallAverage = overallTotal / 2.0;
        printf("Student %d - Overall Average: %.2f\n\n", student + 1, overallAverage);
    }

    return 0;
}
