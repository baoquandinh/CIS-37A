#include <stdio.h>
#define STUDENTS 3
#define EXAMS 4

//Function prototypes
int minimum(int grades[][EXAMS], size_t teens, size_t tests);
int maximum(int grades[][EXAMS], size_t teens, size_t tests);
double average(const int setOfGrades[], size_t tests);
void printArray(int grades[][EXAMS], size_t teens, size_t tests);

int main (void)
{
	size_t student ; //Student counter

	//Initialize multi-d array for 3 students
	int studentGrades[STUDENTS][EXAMS] = 
	{ {77,68,86,73},
	  {96,87,89,78},
	  {79,90,86,81}};

	  //Output array studentGrades
	  puts("The array is:" );
	  printArray(studentGrades,STUDENTS,EXAMS);

	  //Detemine smallest and largest grade values

	  printf("\n\nLowest grade: %d\nHighest grade: %d\n", 
	  	minimum(studentGrades,STUDENTS,EXAMS),
	  	maximum(studentGrades,STUDENTS,EXAMS));

	  //Calculate average for each student
	  for (student = 0; student < STUDENTS; student++)
	  {
	  	printf("The average grade for student %lu is %.2f\n",student,average(studentGrades[student],EXAMS) );
	  }
}

void printArray(int grades[][EXAMS], size_t teens, size_t tests)
{
	size_t i;
	size_t j;

	for (i = 0; i < teens; i++)
	{
		printf("\nstudentGrades[%lu] ", i);
		for (j = 0; j< tests; j++)
		{
			printf("%-5d", grades[i][j]);
		}
	}
}

int minimum(int grades[][EXAMS], size_t teens, size_t tests)
{
	size_t i;
	size_t j;

	int lowestGrade = 0;

	for(i = 0; i < teens; i++)
	{
		for (j = 0; j < tests; j++)
		{
			if(grades[i][j] > lowestGrade)
			{
				lowestGrade  = grades[i][j];
			}
		}
	}
	return lowestGrade;
}

int maximum(int grades[][EXAMS], size_t teens, size_t tests)
{
	
}


