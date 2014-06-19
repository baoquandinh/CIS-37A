/* 
 * File:   CreditLimitCalculator.c
 * Author: baoquandinh
 *
 * Created on June 17, 2014, 1:01 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int accountNumber;
    float balance;
    float newBalance;
    float totalCharges;
    float creditCharges;
    float creditLimit;
    
    puts("Hint: Enter -1 to end");
    
    /*
     * This section prompts user to enter information
     */
    
   while ( accountNumber != -1)
    {
        printf("Enter account number: ");
        scanf("%d",&accountNumber);
        
        if (accountNumber == -1)
        {
            break;
        }
    
        printf("Enter beginning credit balance: $");
        scanf("%f",&balance);
    
        printf("Enter total charges: $");
        scanf("%f",&totalCharges);
    
        printf("Enter total credit: $");
        scanf("%f",&creditCharges);
    
        printf("Enter credit limit: $");
        scanf("%f",&creditLimit);
    
        newBalance = balance + totalCharges - creditCharges;
    
        printf("Account: %d\n",accountNumber);
        printf("Credit Limit: $%.2f\n",creditLimit);
        printf("Balance: $%.2f\n",newBalance);
    
    
        if (newBalance > creditLimit)
        {
            puts("Credit Limit Exceeded.");
        }
        
   
 }
    return (EXIT_SUCCESS);
}

