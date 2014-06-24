/* 
 * File:   6.14Main.c
 * Name: Baoquan Dinh
 * Due Date:
 * System Used:
 * Algorithm:
 *
 * Created on June 24, 2014, 12:59 PM
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 99

//Function prototype
void mean(const unsigned int answer[]); //const means the value will not be changed
void median(unsigned int answer[]);
void mode(unsigned int freq[], unsigned const int answer[]);
void bubbleSort(int a[]);
void printArray(unsigned const int a[]);

/*
 * 
 */
int main(int argc, char** argv) {

    /*
    Declare and initialize array name "frequency" to have 10 elements with 
    value of 0.
    */
    unsigned int frequency[10] = {0}; 
    
    /*
     * Declare and initialize array name "response" with size of SIZE and the
     * value specified
     */
    
    unsigned int response[SIZE] = {6,7,8,9,8,7,8,9,8,9,
    7,8,9,5,9,8,7,8,7,8,
    6,7,8,9,3,9,8,7,8,7,
    7,8,9,8,9,8,9,7,8,9,
    6,7,8,7,8,7,9,8,9,2,
    7,8,9,8,9,8,9,7,5,3,
    5,6,7,2,5,3,9,4,6,4,
    7,8,9,6,8,7,8,9,7,8,
    7,4,4,2,5,3,8,7,5,6,
    4,5,6,1,6,5,7,8,7};
    
    //process the response
    mean(response);
    puts("")//Line break
    median(response);
   // mode(frequency, response);
 
    return (EXIT_SUCCESS);
}

void mean(const unsigned int answer[])
{
    size_t j;
    unsigned int total = 0; //Variable to hold the sum of the array elements
    
    //Printing out heading
    puts("**********");
    puts("   Mean   ");
    puts("**********");
    
    for (j = 0; j < SIZE; j++)
    {
        total = total + answer[j]; 
    }
    
    printf("The mean value of the data is the total: %u , divided by amount: %u "
            "which will be %.4f",total,SIZE, (double) total/SIZE);
    
    
}
void median(unsigned int answer[])
{
    puts("**********");
    puts("  Median   ");
    puts("**********");
    
    puts("Here is the unsorted array");
   // printArray(response[SIZE]);
}
void mode(unsigned int freq[], unsigned const int answer[])
{
    puts("**********");
    puts("   Mode   ");
    puts("**********");
}
void bubbleSort(int a[]);
void printArray(unsigned const int a[]);