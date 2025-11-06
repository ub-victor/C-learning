#include <stdio.h>

int main() {
    int terms = 2;
    int students = 3;
    int subjects = 3;

    float marks[2][3][3]; // [term][student][subject]
    float termAverage, overallAverage;

    // Input marks
    for (int t = 0; t < terms; t++) {
        printf("\n--- Enter marks for Term %d ---\n", t + 1);
        for (int s = 0; s < students; s++) {
            printf("Student %d:\n", s + 1);
            for (int sub = 0; sub < subjects; sub++) {
                printf("  Subject %d: ", sub + 1);
                scanf("%f", &marks[t][s][sub]);
            }
        }
    }

    printf("\n=========== STUDENT AVERAGES ===========\n");

    // Calculate averages
    for (int s = 0; s < students; s++) {
        overallAverage = 0.0;

        for (int t = 0; t < terms; t++) {
            float termSum = 0.0;
            for (int sub = 0; sub < subjects; sub++) {
                termSum += marks[t][s][sub];
            }
            termAverage = termSum / subjects;
            overallAverage += termAverage;

            printf("Student %d - Term %d Average: %.2f\n", s + 1, t + 1, termAverage);
        }

        overallAverage /= terms;
        printf("Student %d - Overall Average (2 terms): %.2f\n\n", s + 1, overallAverage);
    }

    return 0;
}
