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

	char *string;
	char *stringSearch;

	char *searchPtr;

	//Retrieve user input
	puts("Enter some text below");
	fgets(text, SIZE,stdin);

	//Retrieve the search string from user
	puts("");
	puts("Enter the search string");
	fgets(search, SIZE, stdin);
	puts("");

	searchPtr = search; //Set address
	printf("%s\n",strstr(text, searchPtr));
}




