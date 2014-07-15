/* 
 * File:   checkBoardPattern.c
 * Name: Baoquan Dinh
 * Due Date:
 * System Used: Max OSX
 * Algorithm: Creates a while loop to create 8 lines. Check if the row is odd 
 * or even. If the row is even, then it will print out * without a space in front
 * if it's odd, then the row will have a space follow by a * printed out. 
 *
 * Created on June 18, 2014, 10:09 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int i = 0 ;
    int j = 0;
    
    while ( i <= 8)
    {
        //Even row
        while(i % 2 == 0)
        {
            for (j = 1; j <= 8; j++)
            {
                printf( "%s", "* " );
            }
            i++;
            puts("");
        }
        
        //Odd row
        while (i %2 != 0)
        {
            printf( "%s", " " );
            for(j = 1; j <= 8; j++)
            {
                printf( "%s", "* " );
            }
            
            i++;
        }   
        puts( "" ); // outputs a newline
    }

    return (EXIT_SUCCESS);
}

