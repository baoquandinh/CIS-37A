/* 
 * File:   DiceRolling.c
 * Author: baoquandinh
 *
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
   
    size_t face;
    unsigned int roll;
    unsigned int frequency[SIZE] = {0};
    
    srand(time(NULL)); //Random number generator
    
    for (roll = 0; roll <6000000; roll++)
    {
        face = 1 + rand() % 6;
        ++frequency[ face ];
    }
    
    printf("%4s%17s\n", "Face","Frequency");
    
    for (face = 1; face  < SIZE; face++)
    {
        printf("%4d %17d\n", face, frequency[face]);
    }
    
    return (EXIT_SUCCESS);
}

