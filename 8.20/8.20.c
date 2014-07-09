#include <stdio.h>
#include <ctype.h>
#include <string.h>

//Function prototype
void countWord(const char sentence[]);

int sentenceCounter;


int main (void)
{
	puts("Here are some inputed sentences:");

	const char s1[] = "Hey look, I am writing a sentence with a lot of words!";
	const char s2[] = "Oh no, I have so so so so so so so so so so so so much words.";
	const char s3[] = " Hey look I have little words.";

	printf("Sentence 1 is: %s\nSentence 2 is: %s\nSentence 3 is; %s\n", s1,s2,s3);
	puts("");
	countWord(s1);
	countWord(s2);
	countWord(s3);
}	

void countWord(const char sentence[])
{
	++sentenceCounter;
	int wordCounter = 0;

	for (int i = 0; i <= strlen(sentence); i++)
	{
		if ((isalpha(sentence[i - 1]) || ispunct(sentence[i-1])) && isblank(sentence[i]))
		{
			wordCounter++;
		}
		if (sentence[i] == '\0')
		{
			wordCounter++;
		}
	}

	printf("%lu\n", strlen(sentence));
	printf("Sentence %d:\n%s\n", sentenceCounter, sentence);
	printf("There are %d words in this sentence.\n", wordCounter );
	puts("");
}