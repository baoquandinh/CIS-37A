/*
6.15
Name: Baoquan Dinh
Due Date: July 6, 2014
System Used: Mac OSX
Algorithm: 
*/

#include <stdio.h>
#define SIZE 20

//Function prototype
void sortArray( unsigned int a[SIZE]);

int main (void)
{
	size_t i;
	unsigned int array1[SIZE] = {};

	printf("Please enter in 20 numbers from 10-100:\n");

	
		for (i = 1; i <= SIZE; i++)
		{
			printf("%lu)", i);
			scanf("%d", &array1[i]);

			//Check if the value enter is inside the range
			if(array1[i] > 100 || array1[i] < 10)
			{
				i = 21;
				puts(""); //Line break
				printf("Sorry, the number you enter was outside of the designated range\n");
			}
			
		}
		
		//Print out the array, if number entered is larger than field, array will print out 0 for remaining
		puts("Here is your original printed array");
		for (i = 1; i <= SIZE; i++)
		{
			printf("%d\n", array1[i]);
		}
	
		puts("Here is the arry with no duplicates");
		sortArray(array1[SIZE]);
	
}

void sortArray(unsigned int a[])
{

}
