/* 
 * File:   salaryCalculator.c
 * Name: Baoquan Dinh
 * Due Date:
 * System Used: Mac OSX
 * Algorithm: Ask for hours work and hourly pay. Program will check for "-1"
 * which will end the program. If it's not -1, the program will run and check if
 * hours worked is over 40. If it's over 40, the correct calculations will be ran
 * and if it's under 40, the correct calculations will be ran for that scenario
 *
 * Created on June 18, 2014, 9:53 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Algorithm: Ask for hours worked and rate
 *              check if hours worked = -1
 *              if not -1, check if hours worked is over 40
 *              if over 40, do the correct time and half calculation
 *              else do regular calculation
 *              if -1, cancel
 */
int main(int argc, char** argv) {
    
    int hoursWorked;
    float hourlyRate;
    
    puts("Enter -1 to stop");
    
    while( hoursWorked != -1)
    {
        //Check to see if -1 EOF signed was given
        printf("Enter # of hours worked: ");
        scanf("%d", &hoursWorked);
        if(hoursWorked == -1)
        {
            break;
        }
        else
        {
            printf("Enter hourly rate of the worker ($00.00): $");
            scanf("%f",&hourlyRate);
            
            if(hoursWorked <= 40)
            {
                printf("Salary is $%.2f\n", hourlyRate * hoursWorked);
            }
            else
            {
                printf("Salary is $%.2f\n", (hourlyRate * hoursWorked) + (hoursWorked - 40) * (hourlyRate / 2));
                
            }
        }
    }

    return (EXIT_SUCCESS);
}

