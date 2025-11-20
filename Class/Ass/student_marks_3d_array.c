#include <stdio.h>
/*
This program uses a 3D array to store and process marks for:

2 students,

3 subjects,

2 school terms.

It inputs, displays, and computes:

Each student’s average per term

Each student’s overall average	
*/
int main() {
    int marks[2][2][3]; // [term][student][subject]
    int term, student, subject;
    float termAverage[2][2] = {0}; // [term][student]
    float overallAverage[2] = {0};

    // Input section
    printf("Enter marks for 2 students, 3 subjects, over 2 terms:\n\n");
    for (term = 0; term < 2; term++) {
        printf("=== Term %d ===\n", term + 1);
        for (student = 0; student < 2; student++) {
            printf("Enter marks for Student %d:\n", student + 1);
            for (subject = 0; subject < 3; subject++) {
                printf("  Subject %d: ", subject + 1);
                scanf("%d", &marks[term][student][subject]);
            }
        }
    }

    // Display section
    printf("\n================= MARKS DATA =================\n");
    for (term = 0; term < 2; term++) {
        printf("\nTERM %d:\n", term + 1);
        for (student = 0; student < 2; student++) {
            printf("Student %d -> ", student + 1);
            for (subject = 0; subject < 3; subject++) {
                printf(" %d ", marks[term][student][subject]);
            }
            printf("\n");
        }
    }

    // Compute averages
    for (term = 0; term < 2; term++) {
        for (student = 0; student < 2; student++) {
            int sum = 0;
            for (subject = 0; subject < 3; subject++) {
                sum += marks[term][student][subject];
            }
            termAverage[term][student] = sum / 3.0;
            overallAverage[student] += termAverage[term][student];
        }
    }

    // Display averages
    printf("\n================= AVERAGES =================\n");
    for (student = 0; student < 2; student++) {
        printf("Student %d:\n", student + 1);
        for (term = 0; term < 2; term++) {
            printf("  Term %d Average: %.2f\n", term + 1, termAverage[term][student]);
        }
        printf("  Overall Average: %.2f\n", overallAverage[student] / 2.0);
    }

    return 0;
}

