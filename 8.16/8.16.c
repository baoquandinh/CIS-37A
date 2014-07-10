/*
Name: Baoquan Dinh
Due Date: July 10, 2014
System Used: Max OSX
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 100

int main (void)
{
	size_t i;
	char sentence[SIZE] = {};

	//Accepts input of user
	puts("Enter some text below:");
	fgets(sentence, SIZE, stdin);


	//Prints out user input to check
	for (i = 0; i <= strlen(sentence); i++)
	{
		if(isalpha(sentence[i]) || isblank(sentence[i]) || ispunct(sentence[i]))
		{
		printf("%c", sentence[i] );
		}
	}

	puts("");
}