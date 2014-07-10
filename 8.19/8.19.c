#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 25

//Function prototype
void countLetter(const char sentence[]);

int sentenceCounter = 0;

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
	int aCounter = 0;
	int bCounter = 0;
	int cCounter = 0;
	int dCounter = 0;
	int eCounter = 0;
	int fCounter = 0;
	int gCounter = 0;
	int hCounter = 0;
	int iCounter = 0;
	int jCounter = 0;
	int KCounter = 0;
	int lCounter = 0;
	int mCounter = 0;
	int nCounter = 0;
	int oCounter = 0;
	int pCounter = 0;
	int qCounter = 0;
	int rCounter = 0;
	int sCounter = 0;
	int tCounter = 0;
	int uCounter = 0;
	int vCounter = 0;
	int wCounter = 0;
	int xCounter = 0;
	int yCounter = 0;
	int zCounter = 0;

	++sentenceCounter = 0;
	char alphabet[SIZE] = {};

	printf("Sentence %d:\n%s\n", sentenceCounter, sentence);
	puts("");

	for (int i = 0; i <= strlen(sentence); i++)
	{
		if (isalpha(sentence[i]))
		{
			switch (sentence[i])
			{
				case 'A':
				case 'a':   aCounter++;
							break;
				case 'B':
				case 'b':   bCounter++;
							break;
				case 'C':
				case 'c':   cCounter++;
							break;
				case 'D':
				case 'd':   dCounter++;
							break;			
				case 'E':
				case 'e':   eCounter++;
							break;									
				case 'F':
				case 'f':   fCounter++;
							break;	
				case 'G':
				case 'g':   gCounter++;
							break;
				case 'H':
				case 'h':   hCounter++;
							break;
				case 'I':
				case 'i':   iCounter++;
							break;
				case 'J':
				case 'j':   jCounter++;
							break;
				case 'K':
				case 'k':   KCounter++;
							break;
				case 'L':
				case 'l':   lCounter++;
							break;
				case 'M':
				case 'm':   mCounter++;
							break;	
				case 'N':
				case 'n':   nCounter++;
							break;	
				case 'O':
				case 'o':   oCounter++;
							break;
				case 'P':
				case 'p':   pCounter++;
							break;
				case 'Q':
				case 'q':   qCounter++;
							break;
				case 'R':
				case 'r':   rCounter++;
							break;
				case 'S':
				case 's':   sCounter++;
							break;
				case 'T':
				case 't':   tCounter++;
							break;
				case 'U':
				case 'u':   uCounter++;
							break;		
				case 'V':
				case 'v':   vCounter++;
							break;
				case 'W':
				case 'w':   wCounter++;
							break;
				case 'X':
				case 'x':   xCounter++;
							break;
				case 'Y':
				case 'y':   yCounter++;
							break;
				case 'Z':
				case 'z':   zCounter++;
							break;
			}
		}
	}

	printf("A: %d\n", aCounter );
	printf("B: %d\n", bCounter );
	printf("C: %d\n", cCounter );
	printf("D: %d\n", dCounter );
	printf("E: %d\n", eCounter );
	printf("F: %d\n", fCounter );
	printf("G: %d\n", gCounter );
	printf("H: %d\n", hCounter );
	printf("I: %d\n", iCounter );
	printf("J: %d\n", jCounter );
	printf("K: %d\n", KCounter );
	printf("L: %d\n", lCounter );
	printf("M: %d\n", mCounter );
	printf("N: %d\n", nCounter );
	printf("O: %d\n", oCounter );
	printf("P: %d\n", pCounter );
	printf("Q: %d\n", qCounter );
	printf("R: %d\n", rCounter );
	printf("S: %d\n", sCounter );
	printf("T: %d\n", tCounter );
	printf("U: %d\n", uCounter );
	printf("V: %d\n", vCounter );
	printf("W: %d\n", wCounter );
	printf("X: %d\n", xCounter );
	printf("Y: %d\n", yCounter );
	printf("Z: %d\n", zCounter );

	
}