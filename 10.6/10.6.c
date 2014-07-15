/*
Name: Baoquan Dinh
Due Date:
System Used: Mac OSX
Algorithm:
*/

#include <stdio.h>

struct customer
	{
		char lastname[15];
		char firstname[15];
		unsigned int customerNumber;
	struct
		{
			char phoneNumber [11] = "4088960882" ;
			char address[50] = "490 Cheyenne Lane";
			char city[15] = "San Jose";
			char state[3] = "CA";
			char zipcode[6] = "95123";
		} personal;

}customerRecord, *customerPtr;
	

int main (void)
{
	customer customerRecord = {.lastname = "Dinh", .firstname = "Baoquan", .customerNumber = 7};

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
	printf("Zipcode: %5s\n", customerRecord.personal.zipcode);

	puts("");

	//Customer records using pointers
	/*
	puts("Customer Record");
	puts("---------------");
	printf("Last Name: %5s\n", customerPtr->lastname );
	printf("First Name: %5s\n", customerPtr->firstname );
	printf("Customer Number: %d\n", customerPtr->customerNumber );
	*/
}


/*
b) MemberlastNameofthestructurepointedtobycustomerPtr.
d) MemberfirstNameofthestructurepointedtobycustomerPtr.
f) Member customerNumber of the structure pointed to by customerPtr.
h) MemberphoneNumberofmemberpersonalofthestructurepointedtobycustomerPtr.
j) Member address of member personal of the structure pointed to by customerPtr.
l) Member city of member personal of the structure pointed to by customerPtr.
n) MemberstateofmemberpersonalofthestructurepointedtobycustomerPtr.
p) MemberzipCodeofmemberpersonalofthestructurepointedtobycustomerPtr.
*/