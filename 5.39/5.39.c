/*
5.39
Name: Baoquan Dinh
Due Date: July 6, 2014
System Used: Mac OSX
Algorithm: 
*/

#include <stdio.h>


//Functino prototype
int gcd(int x, int y);

int main (void)
{
	int x,y;

	printf("Please enter an integer: ");
	scanf("%d", &x);
	printf("Please enter a second integer: ");
	scanf("%d", &y);

	gcd(x,y);

	printf("The common divisor between %d and %d is %d.\n", x, y, gcd(x,y));
}

//Function definition for gcd
int gcd	(int x, int y)
{
	if ( y == 0)
	{
		return x;
	}

	else
	{
		return (gcd(y, x % y));
	}
}