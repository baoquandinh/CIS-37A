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
}; // end structure clientData


int main( void ) 
{
	FILE *filePtr; // credit.dat file pointer
	int result; 

	struct clientData client = { 0, "", "", 0.0 };
	// clientData structure definition

	// fopen opens the file; exits if file cannot be opened
	if ( ( filePtr = fopen( "credit.dat", "rb" ) ) == NULL ) 
		{ 
			puts( "File could not be opened." );
		}
	else 
	{
		printf( "%-16s%-16s%-11s%10s\n", "Account", "Last Name", "First Name", "Balance" );

	while ( !feof( filePtr ) )
	{
		result = fread( &client, sizeof( struct clientData ), 1, filePtr );
		if( result != 0 && client.accountNumber != 0 ) 
         {
         	printf( "%-16d%-16s%-11s%10.2f\n",client.accountNumber, client.lastName,client.firstName, client.balance );
         } 
	} 
      fclose( filePtr ); // fclose closes the file
  }
}//endmain