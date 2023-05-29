#include <stdio.h>

int main() {
    int mark;
    char grade;
    printf("Enter the mark obtained: ");
    scanf("%d", &mark);

    if (mark >= 90)
        grade = 'X';
    else if (mark >= 80 && mark <= 89)
        grade = 'A';
    else if (mark >= 70 && mark <= 79)
        grade = 'B';
    else if (mark >= 60 && mark <= 69)
        grade = 'C';
    else if (mark >= 50 && mark <= 59)
        grade = 'D';
    else if (mark >= 35 && mark <= 49)
        grade = 'P';
    else
        grade = 'F';

    printf("Grade: %c\n", grade);

    return 0;
}
