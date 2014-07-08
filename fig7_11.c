#include <stdio.h>

void printCharacters(const char *sPtr);

int main (void)
{
	char String[] = "print characters of a string";

	puts("The string is:");
	printCharacters(String);
	puts("");
}

void printCharacters(const char *sPtr)
{
	for (; *sPtr != '\0'; ++sPtr) //No intialization
	{
		printf("%c", *sPtr);
	}
}