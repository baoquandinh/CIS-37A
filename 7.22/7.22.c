/*
Name: Baoquan Dinh
Due Date: July 9, 2014
System Used: Mac OSX
Algorithm: Move through the maze till the exit in direction of the right wall.
*/

#include <stdio.h>
#include <ctype.h>
#define SIZE 12
int row;
int column;
int tempR;
int tempC;

int main (void)
{
	size_t rows = 0;
	size_t columns = 0;
	char key;

	puts("");//Line break
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

//Print out the original maze
puts("Here is the original array");
for (rows = 0; rows < SIZE; rows++)
	{		
		for (columns = 0; columns < SIZE; columns++)
		{
			printf("%3c", maze[rows][columns]);
		}
		puts("");
	}
	//Start of the maze, prints out the first spot
puts("");
puts("> is where you start");
maze[2][0] = '>';
for (rows = 0; rows < SIZE; rows++)
	{		
		for (columns = 0; columns < SIZE; columns++)
			{
				printf("%3c", maze[rows][columns]);
			
			}
		puts("");
	}
tempR = 2;
tempC = 0;

puts("Key Legend:");
puts("w = up");
puts("a = left");
puts("s = down");
puts("d = right");

while (maze[row][column] != maze[4][11])
	{ 
		row = tempR;
		column = tempC;
		char key = getchar();
		//printf("%d",key);
		if (key == 119) // w
		{
			
				row--;
				maze[row][column] = '^';
				//printf("%d%d\n", row, column);
				tempR = row;
				tempC = column;
				for (row = 0; row < SIZE; row++)
				{		
					for (column = 0; column < SIZE; column++)
					{
						printf("%3c", maze[row][column]);
						
					}
					puts("");

				}
			

		}
		if (key == 97) //a
		{
			column--;
			maze[row][column] = '<';
			printf("%d%d\n", row, column);
			tempR = row;
			tempC = column;
			for (row = 0; row < SIZE; row++)
			{		
				for (column = 0; column < SIZE; column++)
				{
					printf("%3c", maze[row][column]);
					
				}
				puts("");

			}
		}
		if (key == 115) //s
		{
			row++;
			maze[row][column] = 'v';
			//printf("%d%d\n", row, column);
			tempR = row;
			tempC = column;
			for (row = 0; row < SIZE; row++)
			{		
				for (column = 0; column < SIZE; column++)
				{
					printf("%3c", maze[row][column]);
					
				}
				puts("");

			}
		}
		if (key == 100) //d
		{
			column++;
			maze[row][column] = '>';
			//printf("%d%d\n", row, column);
			tempR = row;
			tempC = column;
			for (row = 0; row < SIZE; row++)
			{		
				for (column = 0; column < SIZE; column++)
				{
					printf("%3c", maze[row][column]);
					
				}
				puts("");

			}

		}
	}
	puts("Congrates you have reached the end");
}
