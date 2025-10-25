#include <stdio.h>

int main() {
    float mp, atd;
    char grade[3];     
    char remarks[20];  

    printf("Enter the Marks percentage: ");
    scanf("%f", &mp);
    if (mp > 100 || mp < 0) {
        printf("---- Invalid input ----\n");
        return 0;
    }
    printf("Enter the Attendance percentage: ");
    scanf("%f", &atd);

    // Attendance check
    if (atd < 75) {
        printf("---- Failed due to low attendance ----\n");
        return 0;
    } 
    else if (atd > 90) {
        if (mp >= 45 && mp <= 49) {
            mp += 5;
            if (mp > 100) mp = 100; 
        }
    }

    // Grade and remark calculation
    if (mp >= 90) {
        sprintf(grade, "A+");
        sprintf(remarks, "Excellent");
    } else if (mp<=89 && mp >= 80) {
        sprintf(grade, "A");
        sprintf(remarks, "Very Good");
    } else if (mp<=79 && mp >= 70) {
        sprintf(grade, "B");
        sprintf(remarks, "Good");
    } else if (mp<=69 && mp >= 60) {
        sprintf(grade, "C");
        sprintf(remarks, "Average");
    } else if (mp<=59 && mp >= 50) {
        sprintf(grade, "D");
        sprintf(remarks, "Pass");
    } else {
        sprintf(grade, "F");
        sprintf(remarks, "Fail");
    }

    // Final Output
    printf("\n=============================\n");
    printf("Marks Percentage   : %.2f\n", mp);
    printf("Attendance          : %.2f\n", atd);
    printf("Grade               : %s\n", grade);
    printf("Remarks             : %s\n", remarks);
    printf("=============================\n");

    return 0;
}
