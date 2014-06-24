/* 
 * File:   diamondShape.c
 * Name: Baoquan Dinh
 * Due Date: June 23, 2014
 * System Used: Mac OSX
 * Algorithm: First loop will check for rows, second loop will check for how many
 * empty spaces there are in a row and how many stars in that loop.
 *
 * Created on June 19, 2014, 11:07 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int lines;
    //Prompts user for input
    prompt:
    printf("Enter an odd number of lines you want (From 0 to 2,147,483,647): ");
    scanf("%d", &lines); //input 9
    
    
    int halfway = lines / 2 + 1;
    int spaces = halfway - 1;
    int spacesAfterHalf = 0;
    
    //If input is 0
    if(lines == 0)
    {
        puts("You didn't want any lines");
    }
    
    //If input is correct
    else if (lines > 0 && lines < 2147483647)
    {   
        //Loop for each line
        for (int i = 1; i <= lines; i++)
        {
            //If line is before the halfway point
            if ( i <= halfway)
            {
                //Prints out spaces
                for (int j = 1; j<= spaces; j++)
                {
                    printf(" ");
                }
                //Prints out stars
                for (int k = 1; k <= 2 * i - 1; k++) // i = 2; k = 3
                {
                    printf("*");
                }
                puts("");
                spaces--;
            }

            else //if line is after
            {
                //Prints out spaces
                for (int s = 0; s <= spacesAfterHalf; s++)
                {
                    printf(" ");
                }
                //Prints out stars
                for (int k = 2 * (lines - halfway) ; k >= 2 * (i - halfway ); k--)
                {
                    printf("*");
                }
                puts("");
                spacesAfterHalf++;
            }
        }
    }
    
    // If invalid input is given, give out error message
    else
    {
        puts("Bad number, enter a correct one");
        goto prompt;
    }

    return (EXIT_SUCCESS);
}


