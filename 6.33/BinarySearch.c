/* 
 * File:   BinarySearch.c
 * Name: Baoquan Dinh
 * Due Date: July 1, 2014
 * System Used: Mac OSX
 * Algorithm:
 *
 * Created on June 27, 2014, 3:30 PM
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 15

//Function prototype
size_t binarySearch(const int b[], int searchKey, size_t low, size_t high);
void printHeader(void);
void printRow(const int b[], size_t low, size_t mid, size_t high);

/*
 * 
 */
int main(int argc, char** argv) {
    
    int a[SIZE]; //Create array a
    size_t i; //Counter for initializing elements for array a
    int key; //Value to locate array a
    size_t result; // Variable to hold location of key or -1
    
    //Create data
    for (i = 0; i < SIZE; i++)
    {
        a[i] = 2 * i;
    }
    
    printf( "%s", "Enter a number between 0 and 28: " );
    scanf( "%d", &key );
    
    printHeader();
    
    //search for key in array a by calling the binarySearch function
    result = binarySearch(a, key, 0, SIZE - 1);
    
    //display result
    if(result != -1)
    {
        printf( "\n%d found in array element %d\n", key, result );
    }
    else
    {
        printf( "\n%d not found\n", key );
    }
    
    return (EXIT_SUCCESS);
}

//function to perform binary search

size_t binarySearch(const int b[], int searchKey, size_t low, size_t high)
{
    int middle; //Variable to hold middle element of array
    
    //loop until low subscript is greater than high subscript
    while (low <= high)
    {
        middle = (low + high ) / 2;
        printRow(b,low,middle,high);
                
        if (searchKey == b[middle]) 
        {
            return middle;
        }
        else if(searchKey < b[middle])
        {
            high = middle -1;
        }
        else 
        {
            low = middle + 1;
        }
        
   }
    return -1; //Search key not found
}


void printHeader(void)
{
    unsigned int i; //Counter
    puts( "\nSubscripts:" );
    
    //Output column head
    for (i = 0; i< SIZE; ++i)
    {
        printf("%3u ", i);
    }
    puts(""); //Start a new line
    
    //Output line of - character
    for (i = 1; i <= 4 * SIZE; ++i)
    {
        printf( "%s", "-" );
    }
    
    puts("");
    
    
}

void printRow(const int b[], size_t low, size_t mid, size_t high)
{
    size_t i;
    
    for (i = 0; i <SIZE; i++)
    {
        if (i < low || i > high )
        {
            printf("%s", "      ");
        }
        
        else if (i == mid)
        {
            printf("%3d ", b[i]);
        }
        else
        {
            printf("%3d ", b[i]);
        }
    }
    
    puts("");
}




