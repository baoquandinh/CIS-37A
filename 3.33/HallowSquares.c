/* 
 * File:   HallowSquares.c
 * Name: Baoquan Dinh
 * Due Date: June 24, 2014
 * System Used: Max OSX
 * Algorithm: Prompt user to enter the same length and width of their square.
 *            For the first and last row, entire length will be printed, everything
 *            in between will only have the first and last star printed.
 *
 * Created on June 23, 2014, 10:41 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int sideLength;
    
    //Prompt
    printf("Enter side length: (From 1 - 20) ");
    scanf("%d", &sideLength);
    
    //For loop for the rows, only prints 2 because it prints first and last
    for (int i = 1; i <= sideLength; i++ )
    {
    //For loop for the columns
        if (i == 1 || i == sideLength)
        {
            for (int z = 1; z <= sideLength; z++)
            {
                printf("*");
            }
            puts("");
        }
        else
        {
            for (int j = 1; j <= sideLength; j++)
            { 
                if (j == 1 || j == sideLength)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }       
            }
            puts("");
        }

    }
    
    
    

    return (EXIT_SUCCESS);
}

