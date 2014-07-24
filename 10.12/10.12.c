/* 
Name: Baoquan Dinh
Due Date:
System Used: Mac OSX
Algorithm:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void displayBits( unsigned int value );
unsigned packCharacters( char c1, char c2 );

int main (void)
{
	//Declared local variables
	unsigned int c1;
	unsigned int c2;
	unsigned int c3;
	unsigned int c4;

	//prompt
	puts("Enter four characters below");
	c1 = getchar();
	c2 = getchar();
	c3 = getchar();
	c4 = et
	printf("1) %c", putchar(c1));
	puts("");

	return (EXIT_SUCCESS);
}


/*
int main( void )
{

	unsigned int result;
	unsigned int result2;
	char *a = 0;
	char *b = 0;
	char *c = 0;
	char *d = 0;

	printf( "Enter first character: " );
	scanf("%c", a);
	printf( "Enter second character: " );
	scanf("%c" ,b);
	printf( "Enter thrid character: " );
	scanf("%c" ,c );
	printf( "Enter fourth character: " );
	scanf("%c" ,d);


	// display first character in bits
	printf( "%c in bit format is: \n", *a );
	displayBits( a );

	printf( "%c in bit format is: \n", *b );
	displayBits( b );

	printf( "%c in bit format is: \n", *c );
	displayBits( c );

	printf( "%c in bit format is: \n", *d );
	displayBits( d );

	result = packCharacters( a, b );
//	printf( "%c and %c packed into an unsigned integer are:\n", a, b );
//	displayBits( result );

	result2 = packCharacters( c, d );
//	printf( "%c and %c packed into an unsigned integer are:\n", c, d );
//	displayBits( result2 );

	printf( "\nThe combined unsigned integer is:\n" );
	result <<= 16;
	displayBits( result | result2 );

	return (EXIT_SUCCESS);

}

void displayBits( unsigned int value )
{
	unsigned int c;

	unsigned int displayMask = 1 << 31;

	printf( "%10u = ", value );

	for ( c = 1; c <= 32; ++c ) {
		putchar( value  displayMask ? '1' : '0' );
		value <<= 1;

		if ( c % 8 == 0) {
			putchar( ' ' );
		}
	}
	putchar( '\n' );
}

unsigned packCharacters( char c1, char c2 )
{
	unsigned pack = c1;

	pack <<= 8;
	pack |= c2;

	return pack;
}
*/