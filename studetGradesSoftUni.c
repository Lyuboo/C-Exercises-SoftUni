#include <stdio.h>
#include <math.h>

#define TASK_NUMBER 8
#define NUMBER_OF_STUDENTS 10

void studentMarkPrint(double studentMark);
double calcStudentMark(int studentNumber);
int main()
{
 double studentsMarks[NUMBER_OF_STUDENTS], sumOfAllPoints;
 for(int inputMarks = 0; inputMarks < NUMBER_OF_STUDENTS; inputMarks++)
 {
     studentsMarks[inputMarks] = calcStudentMark(inputMarks);
     sumOfAllPoints += studentsMarks[inputMarks];
 }
 for(int printMarks = 0; printMarks < NUMBER_OF_STUDENTS; printMarks++)
 {
     printf("Final result for student %d : %0.2f - ", printMarks + 1, studentsMarks[printMarks]);
     studentMarkPrint(studentsMarks[printMarks]);
 }
 printf("The average mark of the class is : %0.2f - ", (double)sumOfAllPoints/NUMBER_OF_STUDENTS);
 studentMarkPrint((double)sumOfAllPoints/NUMBER_OF_STUDENTS);
 return 0;
}
double calcStudentMark(int studentNumber)
{
    double studentPoints[TASK_NUMBER], finalPoints = 0;
    printf("Please enter the points for student %d : ", studentNumber + 1);
    scanf("%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf", &studentPoints[0], &studentPoints[1], &studentPoints[2], &studentPoints[3], &studentPoints[4], &studentPoints[5], &studentPoints[6], &studentPoints[7]);
    for(int i = 0; i < TASK_NUMBER; i++)
    {
        finalPoints += studentPoints[i];
        //printf("%f \n\n\n %f", finalPoints, studentPoints[i]);
    }
    return finalPoints;
}
void studentMarkPrint(double studentMark)
{
    if(studentMark >= 0 && studentMark < 45) {printf("Poor.\n");}
    else if(studentMark >= 45 && studentMark < 60) {printf("Average.\n");}
    else if(studentMark >= 60 && studentMark < 75) {printf("Good.\n");}
    else if(studentMark >= 75 && studentMark < 80) {printf("Very Good.\n");}
    else if(studentMark >= 80 && studentMark < 101) {printf("Excellent.\n");}
    else {printf("Invalid data!\n");}
    //printf("%f\n", studentMark);
}
