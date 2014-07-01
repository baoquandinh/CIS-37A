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
    
    srand( time(NULL)); //seed random number generator
    
    //Roll dice 60000 time
    for (roll = 1; roll <= 36000; roll++)
    {
        face =  1 + rand()% 6;
        ++frequency[face];
    }
    
    for ( face = 1; face < SIZE; ++face ) {
        printf( "%4u%17d\n", face, frequency[ face ] );
    }
    
    printf( "%s%17s\n", "Face", "Frequency" );

    return (EXIT_SUCCESS);
}

