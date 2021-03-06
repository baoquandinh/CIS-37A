/* 
Name: Baoquan Dinh
Due Date:
System Used: Mac OSX
Algorithm:
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

int power2(int number, int power);

int main (void)
{
	int num,numPow;

	puts("Enter a number:");
	scanf("%d", &num);

	puts("Enter the power:");
	scanf("%d", &numPow);

	printf("Answer is: %d\n", power2(num, numPow));
	printf("Bit size: %lu\n",CHAR_BIT * sizeof( power2(num, numPow)));

	return (EXIT_SUCCESS);
}

int power2(int number, int power)
{
	return number << power;
}

/*
Left shifting an unsigned int by 1 bit is equivalent to multiplying the value by 2. 
Write function power2 that takes two integer arguments number and pow and calculates
number * 2pow
Use the shift operator to calculate the result. Print the values as integers and as bits.
*/