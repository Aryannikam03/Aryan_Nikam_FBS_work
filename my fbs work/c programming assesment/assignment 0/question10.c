#include <stdio.h>
int main() {
    int marks1, marks2, marks3, marks4, marks5;
    int total;
    float percentage;
    marks1 = 85;
    marks2 = 90;
    marks3 = 78;
    marks4 = 92;
    marks5 = 88;
    total = marks1 + marks2 + marks3 + marks4 + marks5;
    percentage = (total / 500.0) * 100;
    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
