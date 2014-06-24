/* 
 * File:   5.24.c
 * Name: Baoquan Dinh
 * Due Date: July 1, 2014
 * System Used: Mac OSX
 * Algorithm: A for loop will loop through specific degrees and call on the
 * functions to print out the proper results.
 *
 * Created on June 24, 2014, 9:40 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
     // Input is a Fahrenheit and result will be Celsius equivalent
    float celsius(int fahrenheitTemperature); 
    // Input is a Celsius and result will be Fahrenheit equivalent
    float fahrenheit(int celsiusTemperature); 
    
    //Loop for Celsius
    puts("Fahrenheit to Celsius");
    puts("---------------------");
    for (int i = 0; i <= 100; i++)
    {
        printf("Fahrenheit degree: %d, Celsius degree: %.2f\n",i,celsius(i));
        
    }
    puts("");
    puts("Celsius to Fahrenheit");
    puts("---------------------");
    //Loop for Fahrenheit
    for (int j = 32; j <= 212; j++)
    {
        printf("Celsius degree: %d, Fahrenheit degree: %.2f\n",j,fahrenheit(j));
    }
    

    return (EXIT_SUCCESS);
}

float celsius(int fahrenheitTemperature)
{
    return (fahrenheitTemperature - 32) * 5/9;
}

float fahrenheit(int celsiusTemperature)
{
    return (celsiusTemperature * 9/5) + 32;
}

