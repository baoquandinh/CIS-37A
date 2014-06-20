/* 
 * File:   populationCalculator.c
 * Name: Baoquan Dinh
 * Due Date:
 * System Used: Max OSX
 * Algorithm: Loops will create 75 row for the 75 years. For each row there are 3
 * columns to represent current population, population at end of year, and how much 
 * the population increased by. Program will also record and print out when 
 * the population doubled in comparison to the inital year.
 *
 * Created on June 18, 2014, 1:28 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    //Default value of year at 1
    int year = 2014;
    float initialWorldPopulation = 7241218250;
    float annualGrowthRate = 0.0114; //Growth is 1.14%
    
    //Default table layout
    puts("Year\tOriginal Population\tEnd of year population\t\tIncreased by");
    
    //Loop will continue until the 75th year
    while (year <= 2089 )
    {
        float endOfYearPopulation;
        float originalPopulation;
        //First column printed will be the year
        printf("%d\t", year);

        
        //Third column printed is the population at the end of current year
        if(year == 2014) //Sets the population to the initial value
        {
            originalPopulation = initialWorldPopulation;
           // currentYearPopulation = initialWorldPopulation;
        }
        else
        {
            originalPopulation = endOfYearPopulation;
        }
                
        //SECOND COLUMN list the original
        printf("%.0f\t\t",originalPopulation);
        
        
        printf("%.0f\t\t\t",endOfYearPopulation = originalPopulation + (annualGrowthRate * originalPopulation));
    
        //Fourth column printed is how much the population increase from beginning to end of year
        printf("%.0f",endOfYearPopulation - originalPopulation);
        
        
        
        //New line starts and increment the year
        puts("");
        year++;
        
    }
    


    return (EXIT_SUCCESS);
}

