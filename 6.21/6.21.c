/*
6.21
Name: Baoquan Dinh
Due Date: July 6, 2014
System Used: Mac OSX
Algorithm
*/

#include <stdio.h>
#define SIZE 10

int main (void)
{
	int x;
	int i = 1;
	int j = 1;
	unsigned int FirstClass[SIZE] = {0};
	unsigned int Economy[SIZE] = {0};
	int reply;

	puts("Welcome to Unknown Airline, which seats would you want to reserve?");
	Prompt:
	puts("Choose a seat to reserve:");
	puts("1) First Class");
	puts("2) Economy");
	scanf("%d",&x);

	switch (x)
	{
		FirstClass:
		case 1: 
				for( i = i; i <= SIZE ; ++i)
				{
					//Add 1 seat to the array class
					puts("You reserved a seat for First Class");
					FirstClass[i] = 1;
					printf("%d out of %d taken for First Class.\n", i, SIZE);
					puts("Would you like to reserve another seat? (y = 0; n = 1)");
					scanf("%d", &reply);
					i++;

					if (i > SIZE )
					{
						puts("Seats for First Class is full, would you like to register for Economy?(y = 0; n = 1)");
						scanf("%d", &reply);

						if( reply == 0)
						{

							goto Economy;
						}
						else if ( reply == 1)
						{
							puts("Next flight leaves in 3 hours");
							goto end;
						}
						else
						{
							puts("Invalid reply");
						}
					}
					if (i > SIZE && j > SIZE)
					{
						puts("All flights are full, sorry!");
					}

					if( reply == 0)
					{
						goto Prompt;
					}
					else if ( reply == 1)
					{
						puts("Next flight leaves in 3 hours");
						goto end;

					}
					else
					{
						puts("Invalid reply.");
					}
				} //End of for loop

				if ( j < SIZE)
				{
					puts("Sorry First Class seats are full, please reserve in Economy.");
					goto Prompt;
				}
				if (i > SIZE && j > SIZE)
				{
					goto noMoreRoom;
				}
				break;
		Economy:		
		case 2: for( j = j; j <= SIZE ; ++j)
				{
					puts("You reserved a seat for Economy");
					//Add 1 seat to the array class
					Economy[j] = 1;
					printf("%d out of %d taken for Economy.\n", j, SIZE);
					puts("Would you like to reserve another seat? (y = 0; n = 1)");
					scanf("%d", &reply);
					j++;

					if (j > SIZE)
					{
						puts("Seats for Economy is full, would you like to register for First Class?(y = 0; n = 1)");
						scanf("%d", &reply);

						if( reply == 0)
						{

							goto FirstClass;
						}
						else if ( reply == 1)
						{
							puts("Next flight leaves in 3 hours");
							goto end;
						}
						else
						{
							puts("Invalid reply");
						}
					}

					if( reply == 0)
					{
						goto Prompt;
					}
					else if ( reply == 1)
					{
						puts("Next flight leaves in 3 hours");
						goto end;

					}
					else
					{
						puts("Invalid reply.");
					}
				} //End of for loop

				//Loop to check if both class is taken
				if (i < SIZE)
				{
					puts("Sorry, seats for Economy are full, please reserve in First Class");
					goto Prompt;
				}
				if (i > SIZE && j > SIZE)
				{
					goto noMoreRoom;
				}
				break;
		end:
		case -1: break;
		noMoreRoom:
		case -2:
			puts("Sorry there are no more room available for either class.");
			break;
		default: puts("Invalid input, enter correct number.");
				goto Prompt;
	}
	
}