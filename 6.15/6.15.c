/*
6.15
Name: Baoquan Dinh
Due Date: July 6, 2014
System Used: Mac OSX
Algorithm: 
*/

#include <stdio.h>
#define SIZE 20

int main (void)
{
	size_t i;
	unsigned int a[SIZE] = {};

	printf("Please enter in 20 numbers from 10-100:\n");

	
		for (i = 1; i <= SIZE; i++)
		{
			printf("%lu)", i);
			scanf("%d", &a[i]);

			//Check if the value enter is inside the range
			if(a[i] > 100 || a[i] < 10)
			{
				i = 21;
				puts(""); //Line break
				printf("Sorry, the number you enter was outside of the designated range\n");
			}
			
		}
		
		//Print out the array, if number entered is larger than field, array will print out 0 for remaining
		puts("Here is your printed array");
		for (i = 1; i <= SIZE; i++)
		{
			printf("%d\n", a[i]);
		}
	
	
}
