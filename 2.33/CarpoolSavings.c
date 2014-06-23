/* 
 * File:   CarpoolSavings.c
 * Name: Baoquan Dinh
 * Due Date: June 24, 2014
 * System Used: Max OSX
 * Algorithm: Prompt user for information and record the information in 
 *            variables. Total cost per day will be calculated.
 * 
 *
 * Created on June 23, 2014, 10:01 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    float milesPerDay,costPerGallon, milesPerGallon, parkingFee, tolls, totalCost;
    
    
    //Prompt
    printf("How many miles do you drive to work per day? Enter (xx.xx or xx)\n");
    scanf("%f", &milesPerDay);
    printf("What is the cost to drive per gallon? Enter ($xx.xx)\n");
    scanf("%f", &costPerGallon);
    printf("What are the average miles you get per gallon? Enter ($xx.xx)\n");
    scanf("%f", &milesPerGallon);
    printf("How much are parking fees per day? Enter ($xx.xx)\n");
    scanf("%f", &parkingFee);
    printf("How much are tolls per day? Enter ($xx.xx)\n");
    scanf("%f", &tolls);
    
    //Display information
    puts("Daily Driving cost");
    puts("-------------------");
    printf("Miles driven per day: %.2f\n",milesPerDay); // 10
    printf("Cost to drive per gallon: $%.2f\n",costPerGallon); //5
    printf("Average miles per gallon: $%.2f\n",milesPerGallon); //2
    printf("Parking fees: $%.2f\n",parkingFee);
    printf("Tolls: $%.2f\n",tolls);
    
    //Calculate the cost of driving per day
    printf("Average cost per day per driver (Assuming same information provided)$%.2f\n" 
            ,totalCost =  ((milesPerDay / milesPerGallon) * costPerGallon)+ parkingFee + tolls);
    printf("If you Car-pool, each person would save $%.2f", totalCost);
    
    
    


    return (EXIT_SUCCESS);
}

