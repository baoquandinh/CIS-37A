/*
Name: Baoquan Dinh
Due Date: July 13, 2014
System Used: Mac OSX
Algorithm:
*/

#include <stdio.h>

int main (void)
{
	int counter = 1;

	printf("%d) %.1g\n",counter++, 9876.12345);
	printf("%d) %.2g\n",counter++, 9876.12345);
	printf("%d) %.3g\n",counter++, 9876.12345);
	printf("%d) %.4g\n",counter++, 9876.12345);
	printf("%d) %.5g\n",counter++, 9876.12345);
	printf("%d) %.6g\n",counter++, 9876.12345);
	printf("%d) %.7g\n",counter++, 9876.12345);
	printf("%d) %.8g\n",counter++, 9876.12345);
	printf("%d) %.9g\n",counter++, 9876.12345);
}
