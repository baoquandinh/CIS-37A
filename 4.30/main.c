/* 
 * File:   main.c
 * Name: Baoquan Dinh
 * Due date: 
 * System Used: Max OSX
 * Algorithm: Check if letter grade is not EOF. If not, loop will continue until
 * the EOF is given. At each correct letter grade, the correct counter will increase
 * and total results will be given when the program ends. If the letter is invalid,
 * the program will prompt for another correct input. 
 *
 * Created on June 18, 2014, 11:57 AM
*/

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int letterGrade;
    int aCount,bCount,cCount,dCount,fCount;
    
    
    //Prompts user to enter grade
    puts("Enter the letter grades.");
    puts("Enter EOF character to end");
    
    
    while ((letterGrade = getchar()) != EOF)
    {
        if( letterGrade == 'a' || letterGrade == 'A')
        {
            aCount++;

        }
        else if (letterGrade == 'b' || letterGrade == 'B')
        {
            bCount++;
        }
        else if (letterGrade == 'c' || letterGrade== 'C')
        {
            cCount++;
        }
        else if (letterGrade == 'd' || letterGrade == 'D')
        {
            dCount++;
        }
        else if (letterGrade == 'f' || letterGrade == 'F')
        {
            fCount++;
        }
       
        else if (letterGrade == '\n') 
        {
            
        }
        
        else
        {
            puts("Not a real grade, input another grade");
        }
    }
    puts("Total grade inputted");
    printf("\nA: %d\n", aCount);
    printf("B: %d\n", bCount);
    printf("C: %d\n", cCount);
    printf("D: %d\n", dCount);
    printf("F: %d\n", fCount);
    
    return (EXIT_SUCCESS);
}
