/* 
 * File:   main.c
 * Author: baoquandinh
 *
 * Created on June 24, 2014, 12:50 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */ 
int main(int argc, char** argv) {
    
    int n[10]; // Array name is 'n' and contains 10 integers
    size_t i; //counter
    
    //initialize elements of array n to 0
    for(i = 0; i < 10 ; i++)
    {
        n[i] = 0; //Set elements at i = 0
    }
    
    printf("%s%13s\n", "Element", "Value");
    
    for (i = 0; i < 10; ++i)
    {
        printf("%7lu%13d\n",i ,n[i]);
    }

    return (EXIT_SUCCESS);
}

