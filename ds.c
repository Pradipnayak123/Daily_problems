#include <stdio.h>
#include <string.h>

#define MAX 100
#define LEN 50

int main() {
    int n, m;
    char all[MAX][LEN];
    char present[MAX][LEN];
    int found;

    // Input all students
    printf("Enter total number of students: ");
    scanf("%d", &n);
    getchar();  // consume newline

    printf("\nEnter names of all students:\n");
    for (int i = 0; i < n; i++) {
        fgets(all[i], LEN, stdin);
        all[i][strcspn(all[i], "\n")] = '\0';  // remove newline
    }

    // Input present students
    printf("\nEnter number of students already present: ");
    scanf("%d", &m);
    getchar();  // consume newline

    printf("\nEnter names of present students:\n");
    for (int i = 0; i < m; i++) {
        fgets(present[i], LEN, stdin);
        present[i][strcspn(present[i], "\n")] = '\0';
    }

    // Find and print remaining students
    printf("\nStudents NOT present:\n");
    for (int i = 0; i < n; i++) {
        found = 0;
        for (int j = 0; j < m; j++) {
            if (strcmp(all[i], present[j]) == 0) {
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("%s\n", all[i]);
        }
    }

    return 0;
}