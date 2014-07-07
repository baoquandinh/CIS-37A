/*
6.15
Name: Baoquan Dinh
Due Date: iuly 6, 2014
System Used: Mac OSX
Algorithm: 
*/

#include <stdio.h>
#define SIZE 20

int main (void)
{
	size_t i;
	int hold;
	int counter = 1;
	unsigned int a[SIZE] = {};
	unsigned int b[] = {};

	printf("Please enter in 20 numbers from 10-100:\n");

	while ( i < SIZE)
	{
		for (i = 0; i < SIZE; i++)
		{
				printf("%d) ", counter);
				scanf("%d", &a[i]);
			//Check if the value enter is inside the range
			if(a[i] > 100 || a[i] < 10)
			{
				i = 22;
				//puts(""); //Line break
				goto Fail;
			}	
			else if (a[i] == a[i - 1] || hold == a[i])
			{
				puts("Number has already been printed once.");
				counter++;
				hold = a[i];
			}
			else
			{
				printf("Print: %d\n", a[i]);
				counter++;
				
			}
		}
	}

	Fail:
	if ( i == 22)
	{
		puts("Sorry you have entered a number that was outsde the designated range");
	}
	
}
