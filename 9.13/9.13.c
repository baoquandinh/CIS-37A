/*
Name: Baoquan Dinh
Due Date: July 10, 2014
System Used: Max OSX
*/

#include <stdio.h>

int main (void)
{
	int a,b,c,d,e;

	puts("Enter the number 437, 5times");
	scanf("%d",&a);
	scanf("%i",&b);
	scanf("%o",&c);
	scanf("%u",&d);
	scanf("%x",&e);

	printf("%5d%5i%5o%5u%5x\n",a,b,c,d,e);
}