#include <stdio.h>
#include <math.h>

#define STUDENT_NUMBER 3
#define MARKS_NUMBER 6
typedef enum
{
    Poor = 2,
    Average = 3,
    Good = 4,
    VeryGood = 5,
    Excellent = 6
} Mark;

void printDataForStudent(int numberOfStudent, Mark studentGrade);

int main()
{
    Mark studentGrades[STUDENT_NUMBER];
    int sumOfAllGrades = 0, numberOfAllGrades = 0;
    for(int i = 0; i < STUDENT_NUMBER; i++)
    {
        Mark grades[MARKS_NUMBER];
        int sum = 0;
        printf("Please enter the marks for student %d : ", i+1);
        scanf("%d,%d,%d,%d,%d,%d", &grades[0], &grades[1], &grades[2], &grades[3], &grades[4], &grades[5]);
        for(int j = 0; j < MARKS_NUMBER; j++)
        {
            sum += grades[j];
            sumOfAllGrades += grades[j];
            numberOfAllGrades++;
        }
        studentGrades[i] = round((float)sum / MARKS_NUMBER);
    }
    for(int i = 0; i <STUDENT_NUMBER; i++)
    {
        printDataForStudent(i, studentGrades[i]);
    }
    printf("The average Grade of  the class : %0.2f", (float)sumOfAllGrades / numberOfAllGrades);
    return 0;
}

void printDataForStudent(int numberOfStudent, Mark studentGrade)
{
    printf("Grade of student %d : ", numberOfStudent + 1);
    switch(studentGrade)
    {
    case Poor:
        printf("Poor \n");
        break;
    case Average:
        printf("Average \n");
        break;
    case Good:
        printf("Good \n");
        break;
    case VeryGood:
        printf("VeryGood \n");
        break;
    case Excellent:
        printf("Excellent \n");
        break;
    default:
        break;
    }
}
