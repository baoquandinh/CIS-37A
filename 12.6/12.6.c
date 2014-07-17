/*
Name: Baoquan Dinh
Due Date: July 23, 2014
System Used: Max OSX
Algorithm :
*/

#include <stdio.h>
#include <stdlib.h>

//1
struct listNode
{
	char data;
	struct listNode * nextPtr;
};
typedef struct listNode ListNode;
typedef ListNode *ListNodePtr;

//3
//Function prototypes for first list
void insert ( ListNodePtr *sPtr, char value);
char deleteList ( ListNodePtr *sPtr, char value);
int isEmpty ( ListNodePtr sPtr);
void printList ( ListNodePtr currentPtr);
void instructions ( void );



int main (void)
{
	ListNodePtr startPtr = NULL; //Initalize with no nodes
	//ListNodePtr secondPtr = NULL;

	unsigned int choice; //User choice
	char node;
	instructions();
	scanf("%u", &choice);

	while (choice != 3)
	{
		switch (choice)
		{
			case 1:	
				printf("Enter a character: \n");
				scanf("%c", &node);
				insert(&startPtr, node); //Insert node into list
				//printList(startPtr);
			break; //Add nodes to list
			case 2:	break; //Remove nodes from list
			case 3:	
				break; //Ends the program
			default:
				puts("Invalid choice.");
				instructions();
				break;
		}
	}

	puts("Goodbye.");

	return (EXIT_SUCCESS);
}

void instructions (void)
{
	puts("Enter your choice:");
	puts("1 to insert an element into the list");
	puts("2 to remove an element from the list");
	puts("3 to end");
}

void insert ( ListNodePtr *sPtr, char value)
{
	ListNodePtr newPtr; //Pointer to a new node
	ListNodePtr previousPtr;
	ListNodePtr currentPtr;

	newPtr = (struct listNode *)malloc( sizeof ( ListNode ) );

	if ( newPtr != NULL ) // if space is available
	{
		newPtr->data = value;
		newPtr->nextPtr = NULL;

		previousPtr = NULL;
		currentPtr = *sPtr;

		while(currentPtr != NULL && value > currentPtr->data)
		{
			previousPtr = currentPtr; // walk to . . .
			currentPtr = currentPtr->nextPtr; //next node
		}

		if (previousPtr == NULL)
		{
			newPtr->nextPtr = *sPtr;
			*sPtr = newPtr;
		}
		else
		{
			previousPtr->nextPtr = newPtr;
			newPtr->nextPtr = currentPtr;
		}
	}// End of "if space is available"
	else
	{
		printf("%c not inserted. No memory available.\n", value);
	}
}










