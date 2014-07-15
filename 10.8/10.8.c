/*
Name: Baoquan Dinh
Due Date:
System Used: Mac OSX
Algorithm:
*/

#include <stdio.h>
#include <stdlib.h>

union integer {
	char c;
	short s;
	int i;
	long b;
}value, *valuePtr;

int main(void)
{
	union integer value; //Declare union
	valuePtr = &value;
	value.c = 9;
	value.s = 9;
	value.i = 9;
	value.b = 9;

	puts("Integer = 9");
	puts("-----------");
	printf("Value as char: %2d\n", valuePtr->c);
	printf("Value as short: %2d\n", valuePtr->s);
	printf("Value as int: %2d\n", valuePtr->i);
	printf("Value as long: %2ld\n", valuePtr->b);


	return (EXIT_SUCCESS);
}