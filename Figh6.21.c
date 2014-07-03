#include <stdio.h>

void printArray (int a[][3]);

int main (void)
{
	int array1[2][3] = {{1,2,3}, {4,5,6}};
	int array2[2][3] = {1,2,3,4,5,6};
	int array3[2][3] = {{1,2}, {4}};

	puts("Values in array1 by row are:");
	printArray(array1);

	puts("Values in array2 by row are:");
	printArray(array2);

	puts("Values in array3 by row are:");
	printArray(array3);

}

void printArray (int a[][3])
{
	size_t i; //Counter for rows
	size_t j; //Counter for columns

	//loop through the rows
	for(i = 0; i <=1 ; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}