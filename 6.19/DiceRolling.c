/* 
 * File:   DiceRolling.c
 * Name: Baoquan Dinh
 * Due Date: June 2, 2014
 * System Used: Mac OSX
 * Algorithm: 
 * Created on June 27, 2014, 3:30 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 7


/*
 * 
 */
int main(int argc, char** argv) {
   
    unsigned int sum;
    size_t face;
    unsigned int roll;
    unsigned int frequency[SIZE] = {0};
    
    srand(time(NULL)); //Random number generator
    
    //Loop will roll the dice 36,000 times
    for (roll = 0; roll <36000; roll++)
    {
        face = ((1 + rand() % 6) + (1 + rand() % 6)); //2 dices
        ++frequency[ face ];
    }
    
    printf("%4s%17s\n", "Face","Frequency");
    

    //Prints out the face and the value
    for (face = 1; face  < SIZE; face++)
    {
        printf("%4lu %17d\n", face, frequency[face]);
    }
    
    return (EXIT_SUCCESS);
}

