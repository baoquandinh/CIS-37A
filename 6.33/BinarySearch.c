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

/*
 * 
 */
int main(int argc, char** argv) {
    
    size_t i; //Counter for array
    int searchKey; //Value to locate in array
    size_t result; //Variable to hold location of searchKey
    
    const int a[] = {3,4,8,12,13,14,15,17,23,25,26,27,31,42,50};
    
    
    /*
     * This print statement is to check how the array is setup and used to compare to answer later
     */
    printf("%4s%16s\n", "Element", "Value" );
    for (i = 0; i < SIZE; i++)
    {
        printf("%4lu%16d\n", i, a[i]);
    }
    
    puts(""); // Line break
    
    printf("Enter a number between 0 - 51: ");
    scanf("%d",&searchKey);
    
    
    result = binarySearch(a, searchKey, 0 , SIZE - 1);
    
    if (result != -1)
    {
    printf("Value found in element %lu\n", result);
    }
    else
    {
        puts("No value found");
    }
    
    
    return (EXIT_SUCCESS);
}

size_t binarySearch(const int b[], int searchKey, size_t low, size_t high)
{
    int middle; //Variable to hold middle element of array

    while( low <= high)
    {
        middle = (low + high) / 2;

        //If the searched number is the middle element, then return the middle element
        if (searchKey == b[middle])
        {
            return middle;
        }
        else if (searchKey <= b[middle])
        {
            return binarySearch(b, searchKey,0, middle -1);
           // high = middle -1 ; //Search low end of array
        }

        else
        {
            return binarySearch(b, searchKey, middle + 1, SIZE - 1); 
           // low = middle + 1; //Search high end of array
        }
    }

    return -1; //Search key not found
}





