/* 
 * File:   6.14Main.c
 * Name: Baoquan Dinh
 * Due Date: July 1, 2014
 * System Used: Mac OSX
 * Algorithm:
 *
 * Created on June 24, 2014, 12:59 PM
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

//Function prototype
void mean(const unsigned int answer[]); //const means the value will not be changed
void median(unsigned int answer[]);
void mode(unsigned int freq[], unsigned const int answer[]);
void bubbleSort(unsigned int a[]);
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
    
    unsigned int response[SIZE] = 
   {1,3,3,4,5,2,7,8,9,1}; 
    
    //process the response
    mean(response);
    puts("");//Line break
    median(response);
    puts("");//Line break
    mode(frequency, response);
 
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
    
    printf("The mean value of the data is the total: %u, divided by amount: %u "
            "which will be %.4f",total,SIZE, (double) total/SIZE);
    
    
}
void median(unsigned int answer[])
{
    puts("**********");
    puts("  Median   ");
    puts("**********");
    
    puts("Here is the unsorted array");
    printArray(answer);
    puts("");
    puts("");
    bubbleSort(answer);
    puts("Here is the sorted array");
    printArray(answer);
    
    //When the length is even
    printf("\n\nThe median is element %u and %u which is %u and %u\n"
            "For this run the median is %.2f\n\n",SIZE /2 - 1 , SIZE / 2 ,
            answer[SIZE /2 -1],answer[SIZE / 2], 
            (double) (answer[SIZE /2 -1] + answer[SIZE / 2] )/ 2 );
   
    /*
     * This statement are for odd problems.
    printf("\n\nThe median is element %u of\n" "the sorted %u element array.\n"
"For this run the median is %u\n\n", SIZE / 2, SIZE, answer[ SIZE / 2 ] );
     */
} 

void mode(unsigned int freq[], unsigned const int answer[])
{
    puts("**********");
    puts("   Mode   ");
    puts("**********");
    
    size_t rating; //counter for accessing elements 1-9 of array freq
    size_t j; //Counter for summarizing elements 0-98 of array answer
    unsigned int h; //Counter for displaying histogram freq array values
    unsigned int largest = 0; //Represent largest frequency
    unsigned int modeValue = 0; //Represent most frequent response
    
    for (rating = 1; rating <= 9; rating++)
    {
        freq[rating] = 0;
    }
    
    for (j = 0; j < SIZE; j++)
    {
        ++freq[answer[j]];
    }
    
    printf( "%s%11s%19s\n\n%54s\n%54s\n\n","Response", "Frequency", "Histogram","1 1 2 2","5 0 5 0 5");
    
 
    for (rating = 1; rating <= 9; rating++)
    {
        printf("%8u%11u         ", rating, freq[rating]);
        
        if (freq[rating] > largest)
        {
            largest = freq[rating];
            modeValue = rating;
        }
        
        
        for (h = 1; h <= freq[rating]; h++)
        {
            printf("%s", "*");
        }
        
        puts("");
    }
    
    printf( "\nThe mode is the most frequent value.\n"
            "For this run the mode is %u which occurred"" %u times.\n", modeValue, largest );
}

void bubbleSort(unsigned int a[])
{
    size_t i; //Declared counter for array
    unsigned int pass;
    unsigned int hold; //Holds an element value
            
    //This loop goes through the array
    for (pass = 1; pass < SIZE; ++pass )
    {
        //This loop performs the switch
        for(i = 0; i < SIZE - 1 ; ++i)
        {
            //Checks if the next element is bigger than previous
            if (a[i] > a[i + 1] )
            {
            /*
             * If value of a[i] > a[i + 1], the value of a[i] is placed in a 
             * temporary variable. Now the value of a[i] is replaced by the 
             * value of a[i + 1]. The value of a[i] now replace the value of
             * a[i +1] from the temp variable.
             */
             hold = a[i];
             a[i] = a[i +1];
             a[i + 1] = hold;
            
            }
           
        }
    }
}
void printArray(const unsigned int a[])
{
    size_t j; //Declared counter

    for (j = 0; j < SIZE ; j++)
    {
        if( j % 20 == 0)
        {
            puts(""); // Line break every 20 elements
        }
            printf("%u ", a[j]);
    }
}
