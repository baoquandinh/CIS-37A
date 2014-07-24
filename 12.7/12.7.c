/*
Name: Baoquan Dinh
Due Date: July 24, 2014
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
void insert ( ListNodePtr *sPtr, int value);
char deleteList ( ListNodePtr *sPtr, int value);
int isEmpty ( ListNodePtr sPtr);
void printList ( ListNodePtr currentPtr);
void instructions ( void );



int main (void)
{
	ListNodePtr startPtr = NULL; //Initalize 1st list with no nodes
	ListNodePtr secondPtr = NULL; //Initilizes 2nd list with no nodes

	unsigned int choice; //User choice
	int node;
	instructions();
	printf("%s", "? ");
	scanf("%u", &choice);

	while (choice != 3)
	{
		switch (choice)
		{
			case 1:	
					printf("Enter an integer: ");
					scanf("\n%d", &node);
					insert(&startPtr, node); //Insert node into list
					printList(startPtr);
					break;
			case 2:	
					if(!isEmpty(startPtr))
					{
						printf("%s","Enter integer to be deleted: ");
						scanf("\n%d", &node);
						if (deleteList(&startPtr, node))
						{
							printf("%d deleted.\n", node );
							printList(startPtr);
						}
						else
						{
							printf("%d not found.\n\n", node);
						}
						
					}
					else
					{
						puts("The list is empty.\n");
					}
					break; //Remove nodes from list
			default:
					puts("Invalid choice.");
					instructions();
					break;
		}

		printf("?");
		scanf("%u", &choice);
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

//Insert function
void insert ( ListNodePtr *sPtr, int value)
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


char deleteList ( ListNodePtr *sPtr, int value)
{
	ListNodePtr previousPtr;
	ListNodePtr currentPtr;
	ListNodePtr tempPtr;


	//delete first node
	if (value == (*sPtr)->data)
	{
		tempPtr = *sPtr; //Holds onto node being removed
		*sPtr = (*sPtr)->nextPtr; //de-thread the node
		free(tempPtr); //Free the de-threaded node
		return value;
	}
	else
	{
		previousPtr = *sPtr;
		currentPtr = (*sPtr)->nextPtr;

		while (currentPtr != NULL && currentPtr->data != value)
		{
			previousPtr = currentPtr; 
			currentPtr = currentPtr->nextPtr;
		}

		//delete node at currentPtr
		if (currentPtr != NULL)
		{
			tempPtr = currentPtr;
			previousPtr->nextPtr = currentPtr->nextPtr;
			free(tempPtr);
			return value;
		}
	}
	return '\0';
}

int isEmpty (ListNodePtr sPtr)
{
	return sPtr == NULL;
}

void printList (ListNodePtr currentPtr)
{
	//if list is empty
	if (isEmpty (currentPtr))
	{
		puts("List is empty");
	}
	else 
	{
		puts("The list is: ");
		while (currentPtr != NULL)
		{
			printf("%d --> ", currentPtr -> data );
			currentPtr = currentPtr->nextPtr;
		}

		puts("NULL\n");
	}
}






