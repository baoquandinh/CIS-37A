#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 25

//Function prototype
void countLetter(const char sentence[]);

int sentenceCounter;

int main (void)
{
	puts("Here are some inputed sentences:");

	const char s1[] = "Hey look, I am writing a sentence with a lot of words!";
	const char s2[] = "Oh no, I have so so so so so so so so so so so so much words.";
	const char s3[] = " Hey look I have little words.";

	printf("Sentence 1 is: %s\nSentence 2 is: %s\nSentence 3 is; %s\n", s1,s2,s3);
	puts("");
	countLetter(s1);
	countLetter(s2);
	countLetter(s3);
}	

void countLetter(const char sentence[])
{
	++sentenceCounter;
	char alphabet[SIZE] = {};
	size_t freq;

	printf("Sentence %d:\n%s\n", sentenceCounter, sentence);
	puts("");

	for (int i = 0; i <= strlen(sentence); i++)
	{
		if (isalpha(sentence[i]))
		{
			printf("%3c", sentence[i]);
			++alphabet[sentence[i]];
		}
	}
	puts("");

	for (int  j = 0; j < freq; j++)
	{
		printf("%5lu%10c\n", freq, alphabet[j]);
	}
	
}