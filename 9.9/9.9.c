/*
Name: Baoquan Dinh
Due Date: July 10, 2014
System Used: Max OSX
*/

#include <stdio.h>

int main (void)
{
	float number = 100.453627;

	printf("Here is the given number: ");
	printf("%f\n", number);
	puts("");
	printf("Rounded to nearest digith: %.0f\n",number);
	puts("");
	printf("Rounded to nearest tenth: %.1f\n",number);
	puts("");
	printf("Rounded to nearest hundredth: %.2f\n",number);
	puts("");
	printf("Rounded to nearest thousandth: %.3f\n",number);
	puts("");
	printf("Rounded to nearest ten-thousandth: %.4f\n",number);
}


/*
Write a program that prints the value 100.453627
rounded to the nearest digit, tenth, hundredth, thousandth and ten-thousandth.
*/