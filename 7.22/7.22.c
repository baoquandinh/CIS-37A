/*
Name: Baoquan Dinh
Due Date: July 9, 2014
System Used: Mac OSX
Algorithm: Move through the maze till the exit in direction of the right wall.
*/

#include <stdio.h>
#define SIZE 12

int main (void)
{
	size_t rows;
	size_t columns;

	char maze[SIZE][SIZE] = {
		'#','#','#','#','#','#','#','#','#','#','#','#',
		'#','.','.','.','#','.','.','.','.','.','.','#',
		'.','.','#','.','#','.','#','#','#','#','.','#',
		'#','#','#','.','#','.','.','.','.','#','.','#',
		'#','.','.','.','.','#','#','#','.','#','.','.',
		'#','#','#','#','.','#','.','#','.','#','.','#',
		'#','.','.','#','.','#','.','#','.','#','.','#',
		'#','#','.','#','.','#','.','#','.','#','.','#',
		'#','.','.','.','.','.','.','.','.','#','.','#',
		'#','#','#','#','#','#','.','#','#','#','.','#',
		'#','.','.','.','.','.','.','#','.','.','.','#',
		'#','#','#','#','#','#','#','#','#','#','#','#'
	};

	for (rows = 0; rows < SIZE; rows++)
	{
		
		for (columns = 0; columns < SIZE; columns++)
		{
			printf("%c ", maze[rows][columns]);
		}
		puts("");

	}
}