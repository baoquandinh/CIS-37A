/*
Name: Baoquan Dinh
Due Date: July 24, 2014
System Used: Max OSX
Algorithm:
*/

#include <stdio.h>

// clientData structure definition
struct clientData 
{
	unsigned int accountNumber; // account number
	char lastName[ 30 ]; // account last name char 
	char firstname[ 30 ]; // account first name 
	double balance; // account balance
}; // end structure clientData

int main (void )
{

unsigned int i; 

struct clientData blankClient = { 0, "", "", 0.0 }; 

FILE *filePtr; // credit.dat file pointer

// fopen opens the file; exits if file cannot be opened
if ( ( filePtr = fopen( "credit.dat", "wb" ) ) == NULL ) 
{
	puts( "File could not be opened." ); } // end if
	else 
	{
		for(i=1;i<=100;++i){
		fwrite( &blankClient, sizeof( struct clientData ), 1, filePtr ); }//endfor
      	fclose ( filePtr ); // fclose closes the file
    } // end else
}//endmain