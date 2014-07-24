/*
Name: Baoquan Dinh
Due Date: July 24, 014
System Used: Max OSX
Algorithm:
*/

#include <stdio.h>
struct clientData 
{
	unsigned int accountNumber; // account number 
	char lastName[ 30 ]; // account last name 
	char firstName[ 30 ]; // account first name 
	double balance; // account balance
};

int main( void ) 
{
	FILE *filePtr; // credit.dat file pointer
	struct clientData client = { 0, "", "", 0.0 };
	// fopen opens the file; exits if file cannot be opened
	if ( ( filePtr = fopen( "credit.dat", "rb+" ) ) == NULL ) 
	{
 		puts( "File could not be opened." );
	}
	else 
	{
		 // require user to specify account number
		 printf( "%s", "Enter account number\n" );
		 scanf( "%d", &client.accountNumber );

		 // user enters information, which is copied into file
		while ( client.accountNumber != 0 ) 
		{
			 // user enters last name, first name and balance
			printf( "%s", "Enter lastname, firstname, balance\n? " );

			 // set record lastName, firstName and balance value
			 fscanf( stdin, "%14s%9s%lf", client.lastName,
			 	client.firstName, &client.balance );
			 fseek( filePtr, ( client.accountNumber - 1 ) * sizeof( struct clientData ), SEEK_SET );
			 fwrite( &client, sizeof( struct clientData ), 1, filePtr);

			 // enable user to input another account number
			 printf( "%s", "Enter account number\n? " );
			 scanf( "%d", &client.accountNumber );
	 } // end while

	 fclose( filePtr ); // fclose closes the file
	} // end else
}
