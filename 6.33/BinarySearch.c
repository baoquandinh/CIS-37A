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
    int key;
    
    unsigned int a[] = {3,4,8,12,13,14,15,17,23,25,26,27,31,42,50};
    
    
    /*
     * This print statement is to check how the array is setup
     */
    printf("%4s%16s\n", "Element", "Value" );
    for (i = 0; i < SIZE; i++)
    {
        printf("%4d%16d\n", i, a[i]);
    }
    
    puts("Enter a number between 0 - 51:");
    scanf("%d",&key);
    
    
    return (EXIT_SUCCESS);
}




