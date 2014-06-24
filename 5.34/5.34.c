/* 
 * File:   5.34.c
 * Name: Baoquan Dinh
 * Due Date: July 1, 2014
 * System Used: Mac OSX
 * Algorithm:
 *
 * Created on June 24, 2014, 9:41 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

unsigned long long int power (unsigned int base, unsigned int exponent);
int exponent;
int base;

int main(int argc, char** argv) {

    //prompt for user input
    printf("Enter a base and exponent.\n");
    printf("Base: ");
    scanf("%d", &base);
    printf("Exponent: ");
    scanf("%d", &exponent);
    
    power(base,exponent);
    
    printf("Base is %d, exponent is %d and result is %llu",base, exponent, power(base,exponent));
    
    return (EXIT_SUCCESS);
}

unsigned long long int power (unsigned int base, unsigned int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }
    if (exponent == 1)
    {
        return base;
    }
    else
    {
        return base * power(base, exponent - 1); //power(base,exponent) is going to return the base each time
        
    }
}

