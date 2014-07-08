#include <stdio.h>

int main (void)
{
	int a; // integer variable
	int *aPtr; //Pointer to an integer

	a = 7;
	aPtr = &a; //Set aPtr to the address of a

	printf("The address of a is %p\nThe value of aPtr is %p\n", &a, aPtr );
	printf("The value of a is %d\nThe value of aPtr is %d\n",a, *aPtr );
	printf("Showing that * and & are complements of each other\n&*aPtr = %p\n*&aPtr = %p\n", &*aPtr, *&aPtr );
}