#include <stdio.h>
#include <string.h>
#include <ctype.h>
/*
This program reads up to 100 emails, normalizes, validates, masks usernames, and generates a domain report with counts.

*/
#define MAX_EMAILS 100
#define MAX_LEN 100

// Function prototypes
void trim(char *str);
void toLowerCase(char *str);
int validateEmail(char *email);
void maskUsername(char *username, char *masked);

int main() {
    int n, valid = 0, invalid = 0;
    char emails[MAX_EMAILS][MAX_LEN];
    char domains[MAX_EMAILS][MAX_LEN];
    int domainCount[MAX_EMAILS] = {0};
    int uniqueDomains = 0;

    printf("Enter number of emails (1–100): ");
    scanf("%d", &n);
    getchar(); // consume newline

    printf("Enter %d email(s):\n", n);
    for (int i = 0; i < n; i++) {
        fgets(emails[i], MAX_LEN, stdin);
        trim(emails[i]);
        toLowerCase(emails[i]);
    }

    printf("\n=== Masked Valid Emails ===\n");
    for (int i = 0; i < n; i++) {
        if (!validateEmail(emails[i])) {
            invalid++;
            continue;
        }

        // Split into username and domain
        char *at = strchr(emails[i], '@');
        char username[MAX_LEN], domain[MAX_LEN];
        strncpy(username, emails[i], at - emails[i]);
        username[at - emails[i]] = '\0';
        strcpy(domain, at + 1);

        // Mask username
        char masked[MAX_LEN];
        maskUsername(username, masked);
        printf("%s@%s\n", masked, domain);
        valid++;

        // Add domain to analytics
        int found = 0;
        for (int j = 0; j < uniqueDomains; j++) {
            if (strcmp(domains[j], domain) == 0) {
                domainCount[j]++;
                found = 1;
                break;
            }
        }
        if (!found) {
            strcpy(domains[uniqueDomains], domain);
            domainCount[uniqueDomains] = 1;
            uniqueDomains++;
        }
    }

    // Sort domain report
    for (int i = 0; i < uniqueDomains - 1; i++) {
        for (int j = i + 1; j < uniqueDomains; j++) {
            if (domainCount[j] > domainCount[i] ||
               (domainCount[j] == domainCount[i] && strcmp(domains[j], domains[i]) < 0)) {
                int temp = domainCount[i];
                domainCount[i] = domainCount[j];
                domainCount[j] = temp;

                char tmp[MAX_LEN];
                strcpy(tmp, domains[i]);
                strcpy(domains[i], domains[j]);
                strcpy(domains[j], tmp);
            }
        }
    }

    // Domain Report
    printf("\n=== Domain Report ===\n");
    for (int i = 0; i < uniqueDomains; i++) {
        printf("%s : %d\n", domains[i], domainCount[i]);
    }

    // Totals
    printf("\n=== Totals ===\n");
    printf("Valid: %d\n", valid);
    printf("Invalid: %d\n", invalid);
    printf("Unique Domains: %d\n", uniqueDomains);

    return 0;
}

// Helper: Trim spaces and newline
void trim(char *str) {
    int start = 0, end = strlen(str) - 1;
    while (isspace((unsigned char)str[start])) start++;
    while (end >= start && isspace((unsigned char)str[end])) end--;
    memmove(str, str + start, end - start + 1);
    str[end - start + 1] = '\0';
}

// Helper: Convert to lowercase
void toLowerCase(char *str) {
    for (int i = 0; str[i]; i++) str[i] = tolower((unsigned char)str[i]);
}

// Helper: Validate email
int validateEmail(char *email) {
    int atCount = 0;
    char *at = NULL;
    for (int i = 0; email[i]; i++) {
        if (email[i] == '@') {
            atCount++;
            at = &email[i];
        }
    }
    if (atCount != 1 || !at) return 0;
    if (!strchr(at, '.')) return 0;
    return 1;
}

// Helper: Mask username
void maskUsername(char *username, char *masked) {
    int len = strlen(username);
    if (len == 1) strcpy(masked, "*");
    else if (len == 2) sprintf(masked, "%c*", username[0]);
    else {
        masked[0] = username[0];
        for (int i = 1; i < len - 1; i++) masked[i] = '*';
        masked[len - 1] = username[len - 1];
        masked[len] = '\0';
    }
}

