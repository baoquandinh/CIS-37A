/*
Name: Baoquan Dinh
Due Date: July 13, 2014
System Used: Mac OSX
Algorithm:
*/

#include <stdio.h>
#include <string.h>
#define SIZE 100

int main (void)
{
	char string1[SIZE] = {};
	char string2[SIZE] = {};

	char *string1Ptr;
	char *string2Ptr;

	int compareAmount;

	puts("Please enter 1st string:");
	gets(string1);


	puts("Please enter 2nd string");
	gets(string2);

	string1Ptr = string1;
	string2Ptr = string2;


	puts("How many characters do you want to compare?");
	scanf("%d", &compareAmount);

	printf("%s\n", string1Ptr);
	printf("%s\n", string2Ptr);
	
	printf("%d\n" ,strncmp(string1Ptr,string2Ptr, compareAmount));
}
