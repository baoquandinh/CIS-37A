/* 
 * File:   main.c
 * Name: Baoquan Dinh
 * Due Date:
 * System Used: MAC OSX
 * Algorithm: Prompt user to enter input. Input will be calculated and check
 * if the BMI is under, normal, above, or super above the normal weight limit.
 *
 * Created on June 17, 2014, 10:36 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    float weightInPounds;
    float heightInInches;
    float BMI;
    
    //Prompts user to enter weight
    puts("Enter weight in pounds: ");
    scanf("%f", &weightInPounds);
    
    //Prompts user to enter height
    puts("Enter height in inches: ");
    scanf("%f", &heightInInches);
    
    puts(""); // Line break
    
    //List BMI information
    puts("BMI Values");
    puts("Underweight: less than 18.5");
    puts("Normal: between 18.5 and 24.9");
    puts("Overweight: between 25 and 29.9");
    puts("Obese: 30 or greater");
   
    puts(""); // Line break
    
    
     //Calculate BMI
    BMI = (weightInPounds * 703) / (heightInInches* heightInInches);
    
    if (BMI < 18.5 )
    {
        printf("Since your BMI is %.1f, you are underweight\n", BMI);
    }
    else if (BMI >= 18.5 && BMI <= 24.9)
    {
        printf("Since your BMI is %.1f, you are normal weight\n", BMI);
    }
    else if (BMI >= 25 && BMI <= 29.9)
    {
        printf("Since your BMI is %.1f, you are overweight\n", BMI);
    }
    else 
    {
        printf("Since your BMI is %.1f, you are obese\n", BMI);
    }

    
    return (EXIT_SUCCESS);
}

