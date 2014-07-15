/* 
Name: Baoquan Dinh
Due Date:
System Used: Mac OSX
Algorithm:
*/

#include <stdio.h>
#include <stdlib.h>

struct customer
	{
		char lastname[15];
		char firstname[15];
		unsigned int customerNumber;
	struct //Since this structure has no tag, data must be declared in struct definition
		{
			char phoneNumber [11] = "3123134124" ;
			char address[50] = "429 Little Street";
			char city[15] = "San Jose";
			char state[3] = "NY";
			char zipcode[6] = "95243";
		} personal;

 }customerRecord, *customerPtr;
	

int main (void)
{
	//Shortcut way of adding data into structure
	customer customerRecord= {.lastname = "Nguyen", .firstname = "Jacob", .customerNumber = 7};

	customerPtr = &customerRecord;
	//Customer records without using pointers
	puts("Customer Record");
	puts("---------------");
	printf("Last Name: %5s\n", customerRecord.lastname );
	printf("First Name: %5s\n", customerRecord.firstname );
	printf("Customer Number: %d\n", customerRecord.customerNumber );
	printf("Phone Number: %5s\n", customerRecord.personal.phoneNumber);
	printf("Address: %5s\n", customerRecord.personal.address);
	printf("City: %5s\n", customerRecord.personal.city);
	printf("State: %5s\n", customerRecord.personal.state);
	printf("Zip Code: %5s\n", customerRecord.personal.zipcode);
	puts("---------------");
	puts("");

	//Customer records using pointers. There should be no changes
	puts("Customer Record (With pointers)");
	puts("---------------");
	printf("Last Name: %5s\n", customerPtr->lastname );
	printf("First Name: %5s\n", customerPtr->firstname );
	printf("Customer Number: %d\n", customerPtr->customerNumber );
	printf("Phone Number: %5s\n", customerPtr->personal.phoneNumber);
	printf("Address: %5s\n", customerPtr->personal.address);
	printf("City: %5s\n", customerPtr->personal.city);
	printf("State: %5s\n", customerPtr->personal.state);
	printf("Zip Code: %5s\n", customerPtr->personal.zipcode);

	return (EXIT_SUCCESS);

}
