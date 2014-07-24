/*
Name: Baoquan Dinh
Due Date: July 24, 2014
System Used: Max OSX
*/

#include <stdio.h>
#include <stdlib.h>

void displayBits(unsigned int value);
void reverseBits(unsigned int value);

int main (void)
{
	unsigned int x;
	printf("%s\n", "Enter a nonnegative int: ");
	scanf("%u", &x);

	puts("In normal order:");
	displayBits(x);
	puts("In reverse order:");
	reverseBits(x);

	return (EXIT_SUCCESS);
}

void displayBits (unsigned int value)
{
	unsigned counter;

	unsigned int displayMask = 1 << 31;
	printf("%10u = ", value);

	for ( counter = 1; counter <= 32; counter++)
	{
		putchar (value & displayMask ? '1' : '0');
		value <<= 1; //shift value left by 1

		if (counter % 8 == 0)
		{
			putchar(' ');
		}
	}

	putchar('\n');
}

void reverseBits (unsigned int value)
{
	unsigned counter;

	unsigned int displayMask = 1 << 31;
	printf("%10u = ", value);

	for ( counter = 1; counter <= 32; counter++)
	{
		putchar (value & displayMask ? '0' : '1');
		value <<= 1; //shift value left by 1

		if (counter % 8 == 0)
		{
			putchar(' ');
		}
	}

	putchar('\n');
}