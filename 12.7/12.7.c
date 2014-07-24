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
	ListNodePtr mergerPtr = NULL; //Initilizes 3rd list that is merged

	unsigned int choice; //User choice
	int node;
	instructions();
	printf("%s", "Choice: ");
	scanf("%u", &choice);

	while (choice != 4)
	{
		switch (choice)
		{
			case 1:	
					printf("Enter an integer into 1st List: ");
					scanf("\n%d", &node);
					insert(&startPtr, node); //Insert node into first list
					insert(&mergerPtr, node); //Insert node into merge list
					printList(startPtr);
					break;
			case 2:
					printf("Enter an integer int 2nd List: ");
					scanf("\n%d", &node);
					insert(&secondPtr, node); //Insert node into second list
					insert(&mergerPtr, node);
					printList(secondPtr);
					break;
			case 3:	
					puts("Here is the merged list: ");
					printList(mergerPtr);
					break; //Remove nodes from list
			default:
					puts("Invalid choice.");
					instructions();
					break;
		}

		printf("Choice: ");
		scanf("%u", &choice);
	}

	puts("Goodbye.");

	return (EXIT_SUCCESS);
}

void instructions (void)
{
	puts("Enter your choice:");
	puts("1 to insert an element into the first list");
	puts("2 to insert an element into the second list");
	puts("3 to merge");
	puts("4 to end");
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






