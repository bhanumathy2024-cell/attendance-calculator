#include <stdio.h>

int main() {
    int total, attended;
    float percentage;

    printf("Enter Total Number of Classes: ");
    scanf("%d", &total);

    printf("Enter Number of Classes Attended: ");
    scanf("%d", &attended);

    if (total <= 0) {
        printf("Invalid total number of classes.\n");
        return 0;
    }

    if (attended > total || attended < 0) {
        printf("Invalid attended classes.\n");
        return 0;
    }

    percentage = ((float)attended / total) * 100;

    printf("Attendance Percentage = %.2f%%\n", percentage);

    if (percentage >= 75)
        printf("Status: Eligible for Exam\n");
    else
        printf("Status: Not Eligible for Exam\n");

    return 0;
}
