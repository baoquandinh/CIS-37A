#include <stdio.h>
#define SIZE 10

void bubbleSort(int * const array, size_t size);

int main (void)
{
	//Initializing array called a
	int a[SIZE] = {4, 1, 52, 1, 7, 9, 4, 3 , 3 , 1};

	size_t i; //Counter for array

	puts("Data in the original order");
	for (i = 0; i < SIZE; i++)
	{
		printf("%4d", a[i]);
	}
	puts("");//Line break

	bubbleSort(a, SIZE);

	puts("Data in sorted order");

	for (i = 0; i < SIZE; i++)
	{
		printf("%4d", a[i]);
	}
	puts("");

}

void bubbleSort(int * const array, size_t size)
{
	void swap(int * element1, int * element2);

	unsigned int pass; //Counter for array
	size_t k;

	//Loop to control the passes
	for (pass = 0; pass < size - 1; ++pass)
	{
		//Loop to control comparison for each pass
		for (k = 0; k < size -1; k++)
		{
			if (array[k] > array[k + 1])
			{
				swap(&array[k], &array[k + 1]);
			}
		}
	}
}

void swap(int * element1, int * element2)
{
	int hold = *element1;
	*element1 = *element2;
	*element2 = hold;
}













