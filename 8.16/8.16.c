/*
Name: Baoquan Dinh
Due Date: July 10, 2014
System Used: Max OSX
*/

#include <stdio.h>
#include <string.h>

#define SIZE 100

int main (void)
{
	char text[SIZE] = {};
	char search[SIZE] = {};

	char *searchPtr;

	//Retrieve user input
	puts("Enter some text below");
	gets(text);

	//Retrieve the search string from user
	puts("");
	puts("Enter the search string");
	gets(search);
	puts("");

	//Retrieve the first occurence
	searchPtr = search; //Set address
	puts("First occurence:");
	printf("%s\n",strstr(text, searchPtr));


	//Retrieves the second occurence
	if (strstr(strstr(text, searchPtr), searchPtr) )
	{
		puts("Second occurence:");
		printf("%s\n", strstr(strstr(text, searchPtr + 1), searchPtr));
	}
}




