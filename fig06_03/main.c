/* 
 * File:   main.c
 * Author: baoquandinh
 *
 * Created on June 24, 2014, 12:50 PM
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

/*
 * 
 */ 
int main(int argc, char** argv) {
    
    int n[] = {4, 2 ,4 ,1 ,4 ,5,3};
    size_t i; //counter
    int total = 0;
    
    
    printf("%s%13s\n", "Element", "Value");
    
    for (i = 0; i < SIZE; ++i)
    {
        printf("%7lu%13d\n",i ,n[i]);
    }
    
     //Find the sum of the array
    for (i = 0; i < SIZE; i++)
    {
        total = total + n[i];
    }
    
    printf("The total sum in the array is %d", total);
   

    return (EXIT_SUCCESS);
}

