
/*
COP 3502‐ Week 2 lab on Dynamic Memory Allocation
In this problem, you will read a set of student data and their grading information from a file and then
process them and then write the requested data to another file.
In a course, there are N number of students. Each student has to complete one assignment, appear M
number of quizzes and a final exam. The total score of the student is calculated as follows:
The total score = sum of scores from M quizzes + score in the assignment + score in the final exam
Write a program that will perform the following operation:

-Define a student structure to store student’s last name (one word), scores for one assignment, M
quizzes (M is a user input), final exam, and total.

-Take number of students N and number of quizzes M as the input from the file. 
Then Dynamically allocate memory for N students. 
For each student, dynamically allocate memory to store scores of M quizzes. 
Take input for all the scores for quizzes, assignments, and final exams for all the students.
Calculate the total scores for each student and store it in the corresponding structure. Do this whole
task in a separate method and return the appropriate pointer.

The function header should look like this:
students* readData(FILE *in, int *noOfRecords, int *noofquiz)
-Display the student(s) details who achieved the highest total score. Also write the same student details
into file output.txt
Sample Input: All the inputs, including N and M will come from an input file called input.txt The input file is
structured as follows:
4 2 (N and M)
adam 10 12 9 45 (last name, assignment score, scores for M number of quizzes, and final exam score)
Smith 6 8 9 39
Muhammad 10 12 10 45
jones 8 11 7 41
Sample output.txt:
Name: Muhammad
Assignment: 10
Quizzes: 12 10
Final exam: 45
Total: 77
*/
#include <stdio.h>
#include<stdlib.h>

#define SIZE 100

struct student {
        char *lastName;
        int assignmentScore;
        int M1score;
        int M2score;
        int finalScore;
        int totalScore;
    };

student* readData(FILE *in, int *noOfRecords, int *noofquiz);

int main(){

    int N;
    int M;

    struct student student1;
    struct student student2;
    struct student student3;
    struct student student4;
    
    student1.lastName = (char*)malloc(sizeof(student1.lastName));
    student2.lastName = (char*)malloc(sizeof(student1.lastName));
    student3.lastName = (char*)malloc(sizeof(student1.lastName));
    student4.lastName = (char*)malloc(sizeof(student1.lastName));
    
    FILE *inFile;
    inFile = fopen("input.txt", "r");
    fscanf(inFile, "%d", &N);
    fscanf(inFile, "%d", &M);
    
    // student 1
    fscanf(inFile, "%s", student1.lastName);
    fscanf(inFile, "%d", &student1.assignmentScore);
    fscanf(inFile, "%d", &student1.M1score);
    fscanf(inFile, "%d", &student1.M2score);
    fscanf(inFile, "%d", &student1.finalScore);
    student1.totalScore = student1.M1score + student1.M2score + student1.assignmentScore + student1.finalScore;

    printf("Name: %s\n", student1.lastName);
    printf("Assignmnt: %d\n", student1.assignmentScore);
    printf("Quizzes: %d %d\n", student1.M1score, student1.M2score);
    printf("Final exam: %d\n", student1.finalScore);
    printf("Total: %d\n", student1.totalScore);

    // student 2
    fscanf(inFile, "%s", student2.lastName);
    fscanf(inFile, "%d", &student2.assignmentScore);
    fscanf(inFile, "%d", &student2.M1score);
    fscanf(inFile, "%d", &student2.M2score);
    fscanf(inFile, "%d", &student2.finalScore);
    student2.totalScore = student2.M1score + student2.M2score + student2.assignmentScore + student2.finalScore;

    printf("Name: %s\n", student2.lastName);
    printf("Assignmnt: %d\n", student2.assignmentScore);
    printf("Quizzes: %d %d\n", student2.M1score, student2.M2score);
    printf("Final exam: %d\n", student2.finalScore);
    printf("Total: %d\n", student2.totalScore);

    // student 3
    fscanf(inFile, "%s", student3.lastName);
    fscanf(inFile, "%d", &student3.assignmentScore);
    fscanf(inFile, "%d", &student3.M1score);
    fscanf(inFile, "%d", &student3.M2score);
    fscanf(inFile, "%d", &student3.finalScore);
    student3.totalScore = student3.M1score + student3.M2score + student3.assignmentScore + student3.finalScore;

    printf("Name: %s\n", student3.lastName);
    printf("Assignmnt: %d\n", student3.assignmentScore);
    printf("Quizzes: %d %d\n", student3.M1score, student3.M2score);
    printf("Final exam: %d\n", student3.finalScore);
    printf("Total: %d\n", student3.totalScore);

    // student 4
    fscanf(inFile, "%s", student4.lastName);
    fscanf(inFile, "%d", &student4.assignmentScore);
    fscanf(inFile, "%d", &student4.M1score);
    fscanf(inFile, "%d", &student4.M2score);
    fscanf(inFile, "%d", &student4.finalScore);
    student4.totalScore = student4.M1score + student4.M2score + student4.assignmentScore + student4.finalScore;
    
    printf("Name: %s\n", student4.lastName);
    printf("Assignmnt: %d\n", student4.assignmentScore);
    printf("Quizzes: %d %d\n", student4.M1score, student4.M2score);
    printf("Final exam: %d\n", student4.finalScore);
    printf("Total: %d\n", student4.totalScore);
    
    system("pause");
    return 0;
}
// how to I use students as return type?
students* readData(FILE *in, int *noOfRecords, int *noofquiz){

    
}
