/* 
 * File:   main.c
 * Author: baoquandinh
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
